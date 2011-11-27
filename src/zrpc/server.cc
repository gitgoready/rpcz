// Copyright 2011, Nadav Samet.
// All rights reserved.
//
// Author: thesamet@gmail.com <Nadav Samet>

#include "zrpc/rpc.h"
#include "zrpc/server.h"
#include "zrpc/service.h"
#include <iostream>
#include <zmq.hpp>
#include "google/protobuf/descriptor.h"
#include "google/protobuf/service.h"
#include "glog/logging.h"
#include "zrpc/proto/zrpc.pb.h"

namespace zrpc {

Server::Server(zmq::socket_t* socket) : socket_(socket) {}

void Server::Start() {
  while (true) {
    zmq::message_t request;
    socket_->recv(&request);
    HandleRequest(&request);
  }
}

void Server::RegisterService(zrpc::Service *service) {
  VLOG(2) << "Registering service '" << service->GetDescriptor()->full_name() << "'";
  service_map_[service->GetDescriptor()->full_name()] = service;
}

namespace {
struct RPCRequestContext {
  RPC rpc;
  ::google::protobuf::Message* request;
  ::google::protobuf::Message* response;
};

void SendGenericResponse(::zmq::socket_t* socket,
                         const GenericRPCResponse& generic_rpc_response) {
  std::string serialized_generic_response;
  CHECK(generic_rpc_response.SerializeToString(&serialized_generic_response));
  zmq::message_t zmq_response_message(serialized_generic_response.length());
  memcpy(zmq_response_message.data(), serialized_generic_response.c_str(),
         serialized_generic_response.length());
  socket->send(zmq_response_message);
}

void FinalizeResponse(RPCRequestContext *context,
                      ::zmq::socket_t* socket) {
  GenericRPCResponse generic_rpc_response;
  if (context->rpc.OK()) {
    CHECK(context->response->SerializeToString(
            generic_rpc_response.mutable_payload()));
  } else {
    generic_rpc_response.set_status(
        context->rpc.GetStatus());
    generic_rpc_response.set_application_error(
        context->rpc.GetApplicationError());
    std::string error_message(context->rpc.GetErrorMessage());
    if (!error_message.empty()) {
      generic_rpc_response.set_error(error_message);
    }
  }
  SendGenericResponse(socket, generic_rpc_response); 
  delete context->request;
  delete context->response;
  delete context;
}

void ReplyWithAppError(zmq::socket_t* socket, int application_error,
                       const std::string& error="") {
  GenericRPCResponse response;
  response.set_status(GenericRPCResponse::APPLICATION_ERROR);
  response.set_application_error(application_error);
  if (!error.empty()) {
    response.set_error(error);
  }
  SendGenericResponse(socket, response);
}
}

void Server::HandleRequest(zmq::message_t* request) {
  GenericRPCRequest generic_rpc_request;
  VLOG(2) << "Received request of size " << request->size();
  if (!generic_rpc_request.ParseFromArray(request->data(), request->size())) {
    // Handle bad RPC.
    VLOG(2) << "Received corrupt message.";
    ReplyWithAppError(socket_, GenericRPCResponse::INVALID_GENERIC_WRAPPER);
    return;
  };
  ServiceMap::const_iterator service_it = service_map_.find(
      generic_rpc_request.service());
  if (service_it == service_map_.end()) {
    // Handle invalid service.
    ReplyWithAppError(socket_, GenericRPCResponse::UNKNOWN_SERVICE);
    return;
  }
  zrpc::Service* service = service_it->second;
  const ::google::protobuf::MethodDescriptor* descriptor =
      service->GetDescriptor()->FindMethodByName(generic_rpc_request.method());
  if (descriptor == NULL) {
    // Invalid method name
    ReplyWithAppError(socket_, GenericRPCResponse::UNKNOWN_METHOD);
    return;
  }
  RPCRequestContext* context = CHECK_NOTNULL(new RPCRequestContext);
  context->request = CHECK_NOTNULL(
      service->GetRequestPrototype(descriptor).New());
  context->response = CHECK_NOTNULL(
      service->GetResponsePrototype(descriptor).New());
  if (!context->request->ParseFromString(generic_rpc_request.payload())) {
    // Invalid proto;
    ReplyWithAppError(socket_, GenericRPCResponse::INVALID_MESSAGE);
    delete context->request;
    delete context->response;
    return;
  }

  ::google::protobuf::Closure *closure = ::google::protobuf::NewCallback(
      &FinalizeResponse, context, socket_);
  service->CallMethod(descriptor, &context->rpc,
                      context->request,
                      context->response, closure);
}

}  // namespace
