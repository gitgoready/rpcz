// Copyright 2011 Google Inc. All Rights Reserved.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: nadavs@google.com <Nadav Samet>

#ifndef RPCZ_RPCZ_H
#define RPCZ_RPCZ_H

// Master include file
#include "rpcz/application.h"
#include "rpcz/callback.h"
#include "rpcz/connection_manager.h"
#include "rpcz/event_manager.h"
#include "rpcz/macros.h"
#include "rpcz/rpc.h"
#include "rpcz/rpc_channel.h"
#include "rpcz/server.h"
#include "rpcz/service.h"
#include "rpcz/sync_event.h"

// Two include files were intentionally left out since they rely on ZeroMQ
// headers being around and probably most people will not need this low-level
// functionality. These files are:
//    zmq_utils.h
//    remote_response.h
#endif