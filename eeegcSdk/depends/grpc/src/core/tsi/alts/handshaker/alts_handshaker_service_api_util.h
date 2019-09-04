/*
 *
 * Copyright 2018 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_HANDSHAKER_SERVICE_API_UTIL_H
#define GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_HANDSHAKER_SERVICE_API_UTIL_H

#include <grpc/support/port_platform.h>

#include "pb_decode.h"
#include "pb_encode.h"

#include <grpc/slice.h>
#include <grpc/slice_buffer.h>
#include <grpc/support/alloc.h>
#include <grpc/support/log.h>

#include "src/core/tsi/alts/handshaker/handshaker.pb.h"

/**
 * An implementation of utility functions used to serialize/
 * de-serialize ALTS handshake requests/responses. All APIs in the header
 * are thread-compatible.
 */

/* Renaming of message/field structs generated by nanopb compiler. */
typedef grpc_gcp_HandshakeProtocol grpc_gcp_handshake_protocol;
typedef grpc_gcp_NetworkProtocol grpc_gcp_network_protocol;
typedef grpc_gcp_Identity grpc_gcp_identity;
typedef grpc_gcp_NextHandshakeMessageReq grpc_gcp_next_handshake_message_req;
typedef grpc_gcp_ServerHandshakeParameters grpc_gcp_server_handshake_parameters;
typedef grpc_gcp_Endpoint grpc_gcp_endpoint;
typedef grpc_gcp_StartServerHandshakeReq_HandshakeParametersEntry
    grpc_gcp_handshake_parameters_entry;
typedef grpc_gcp_StartClientHandshakeReq grpc_gcp_start_client_handshake_req;
typedef grpc_gcp_StartServerHandshakeReq grpc_gcp_start_server_handshake_req;
typedef grpc_gcp_HandshakerReq grpc_gcp_handshaker_req;
typedef grpc_gcp_HandshakerResult grpc_gcp_handshaker_result;
typedef grpc_gcp_HandshakerStatus grpc_gcp_handshaker_status;
typedef grpc_gcp_HandshakerResp grpc_gcp_handshaker_resp;

typedef enum {
  CLIENT_START_REQ = 0, /* StartClientHandshakeReq. */
  SERVER_START_REQ = 1, /* StartServerHandshakeReq. */
  NEXT_REQ = 2,         /* NextHandshakeMessageReq. */
} grpc_gcp_handshaker_req_type;

/**
 *  A struct representing a repeated field. The struct is used to organize all
 *  instances of a specific repeated field into a linked list, which then will
 *  be used at encode/decode phase. For instance at the encode phase, the encode
 *  function will iterate through the list, encode each field, and then output
 *  the result to the stream.
 */
typedef struct repeated_field_ {
  struct repeated_field_* next;
  const void* data;
} repeated_field;

/**
 * This method adds a repeated field to the head of repeated field list.
 *
 * - head: a head of repeated field list.
 * - field: a repeated field to be added to the list.
 */
void add_repeated_field(repeated_field** head, const void* field);

/**
 * This method destroys a repeated field list that consists of string type
 * fields.
 *
 * - head: a head of repeated field list.
 */
void destroy_repeated_field_list_string(repeated_field* head);

/**
 * This method destroys a repeated field list that consists of
 * grpc_gcp_identity type fields.
 *
 * - head: a head of repeated field list.
 */
void destroy_repeated_field_list_identity(repeated_field* head);

/**
 * This method creates a grpc_slice instance by copying a data buffer. It is
 * similar to grpc_slice_from_copied_buffer() except that it returns an instance
 * allocated from the heap.
 *
 * - data: a data buffer to be copied to grpc_slice instance.
 * - size: size of data buffer.
 */
grpc_slice* create_slice(const char* data, size_t size);

/* This method destroys a grpc_slice instance. */
void destroy_slice(grpc_slice* slice);

/**
 * The following encode/decode functions will be assigned to encode/decode
 * function pointers of pb_callback_t struct (defined in
 * //third_party/nanopb/pb.h), that represent a repeated field with a dynamic
 * length (e.g., a string type or repeated field).
 */

/* This method is an encode callback function for a string or byte array. */
bool encode_string_or_bytes_cb(pb_ostream_t* stream, const pb_field_t* field,
                               void* const* arg);

/**
 * This method is an encode callback function for a repeated grpc_gcp_identity
 * field.
 */
bool encode_repeated_identity_cb(pb_ostream_t* stream, const pb_field_t* field,
                                 void* const* arg);

/* This method is an encode callback function for a repeated string field. */
bool encode_repeated_string_cb(pb_ostream_t* stream, const pb_field_t* field,
                               void* const* arg);

/**
 * This method is a decode callback function for a string or byte array field.
 */
bool decode_string_or_bytes_cb(pb_istream_t* stream, const pb_field_t* field,
                               void** arg);
/**
 * This method is a decode callback function for a repeated grpc_gcp_identity
 * field.
 */
bool decode_repeated_identity_cb(pb_istream_t* stream, const pb_field_t* field,
                                 void** arg);

/* This method is a decode callback function for a repeated string field. */
bool decode_repeated_string_cb(pb_istream_t* stream, const pb_field_t* field,
                               void** arg);

#endif /* GRPC_CORE_TSI_ALTS_HANDSHAKER_ALTS_HANDSHAKER_SERVICE_API_UTIL_H */
