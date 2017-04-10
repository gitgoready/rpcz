// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "dqlib.rpcz.h"
#include "dqlib.pb.h"
#include <google/protobuf/descriptor.h>
#include <google/protobuf/stubs/once.h>
#include <rpcz/rpcz.hpp>
namespace {
const ::google::protobuf::ServiceDescriptor* DQService_descriptor_ = NULL;
}  // anonymouse namespace

namespace examples {

void rpcz_protobuf_AssignDesc_dqlib_2eproto() {
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dqlib.proto");
  GOOGLE_CHECK(file != NULL);
  DQService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &rpcz_protobuf_AssignDesc_dqlib_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void rpcz_protobuf_ShutdownFile_dqlib_2eproto() {
}

// ===================================================================

DQService::~DQService() {}

const ::google::protobuf::ServiceDescriptor* DQService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DQService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* DQService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return DQService_descriptor_;
}

void DQService::CLAService(const ::examples::MvoAssetAllocationInput&,
                         ::rpcz::reply< ::examples::MvoAssetAllocationOutput> reply) {
  reply.Error(::rpcz::application_error::METHOD_NOT_IMPLEMENTED,
              "Method CLAService() not implemented.");
}

void DQService::call_method(const ::google::protobuf::MethodDescriptor* method,
                             const ::google::protobuf::Message& request,
                             ::rpcz::server_channel* channel) {
  GOOGLE_DCHECK_EQ(method->service(), DQService_descriptor_);
  switch(method->index()) {
    case 0:
      CLAService(
          *::google::protobuf::down_cast<const ::examples::MvoAssetAllocationInput*>(&request),
          ::rpcz::reply< ::examples::MvoAssetAllocationOutput>(channel));
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& DQService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::examples::MvoAssetAllocationInput::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& DQService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::examples::MvoAssetAllocationOutput::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

DQService_Stub::DQService_Stub(::rpcz::rpc_channel* channel,
                                   const ::std::string& service_name,
                                   bool owns_channel)
  : channel_(channel), service_name_(service_name),
    owns_channel_(owns_channel) {}
DQService_Stub::DQService_Stub(::rpcz::rpc_channel* channel,
                                   bool owns_channel)
  : channel_(channel), service_name_(DQService::descriptor()->name()),
    owns_channel_(owns_channel) {}
DQService_Stub::~DQService_Stub() {
  if (owns_channel_) delete channel_;
}

void DQService_Stub::CLAService(const ::examples::MvoAssetAllocationInput& request,
                              ::examples::MvoAssetAllocationOutput* response,
                              ::rpcz::rpc* rpc,
                              ::rpcz::closure* done) {
  channel_->call_method(service_name_,
                        DQService::descriptor()->method(0),
                        request, response, rpc, done);
}
void DQService_Stub::CLAService(const ::examples::MvoAssetAllocationInput& request,
                              ::examples::MvoAssetAllocationOutput* response,
                              long deadline_ms) {
  ::rpcz::rpc rpc;
  rpc.set_deadline_ms(deadline_ms);
  channel_->call_method(service_name_,
                        DQService::descriptor()->method(0),
                        request, response, &rpc, NULL);
  rpc.wait();
  if (!rpc.ok()) {
    throw ::rpcz::rpc_error(rpc);
  }
}

}  // namespace examples
