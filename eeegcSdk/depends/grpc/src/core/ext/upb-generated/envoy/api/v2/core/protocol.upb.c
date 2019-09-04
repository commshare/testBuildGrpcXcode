/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/protocol.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/core/protocol.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "validate/validate.upb.h"
#include "gogoproto/gogo.upb.h"

#include "upb/port_def.inc"

const upb_msglayout envoy_api_v2_core_TcpProtocolOptions_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

static const upb_msglayout *const envoy_api_v2_core_HttpProtocolOptions_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_HttpProtocolOptions__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_core_HttpProtocolOptions_msginit = {
  &envoy_api_v2_core_HttpProtocolOptions_submsgs[0],
  &envoy_api_v2_core_HttpProtocolOptions__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_core_Http1ProtocolOptions_submsgs[1] = {
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_Http1ProtocolOptions__fields[3] = {
  {1, UPB_SIZE(12, 24), 0, 0, 11, 1},
  {2, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {3, UPB_SIZE(4, 8), 0, 0, 9, 1},
};

const upb_msglayout envoy_api_v2_core_Http1ProtocolOptions_msginit = {
  &envoy_api_v2_core_Http1ProtocolOptions_submsgs[0],
  &envoy_api_v2_core_Http1ProtocolOptions__fields[0],
  UPB_SIZE(16, 32), 3, false,
};

static const upb_msglayout *const envoy_api_v2_core_Http2ProtocolOptions_submsgs[4] = {
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_Http2ProtocolOptions__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 11, 1},
  {4, UPB_SIZE(16, 32), 0, 0, 11, 1},
  {5, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_core_Http2ProtocolOptions_msginit = {
  &envoy_api_v2_core_Http2ProtocolOptions_submsgs[0],
  &envoy_api_v2_core_Http2ProtocolOptions__fields[0],
  UPB_SIZE(20, 40), 5, false,
};

static const upb_msglayout *const envoy_api_v2_core_GrpcProtocolOptions_submsgs[1] = {
  &envoy_api_v2_core_Http2ProtocolOptions_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_GrpcProtocolOptions__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_core_GrpcProtocolOptions_msginit = {
  &envoy_api_v2_core_GrpcProtocolOptions_submsgs[0],
  &envoy_api_v2_core_GrpcProtocolOptions__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

#include "upb/port_undef.inc"

