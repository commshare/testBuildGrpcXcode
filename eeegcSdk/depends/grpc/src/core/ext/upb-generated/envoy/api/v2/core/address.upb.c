/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/address.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/core/address.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "validate/validate.upb.h"
#include "gogoproto/gogo.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_field envoy_api_v2_core_Pipe__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
};

const upb_msglayout envoy_api_v2_core_Pipe_msginit = {
  NULL,
  &envoy_api_v2_core_Pipe__fields[0],
  UPB_SIZE(8, 16), 1, false,
};

static const upb_msglayout_field envoy_api_v2_core_SocketAddress__fields[6] = {
  {1, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {2, UPB_SIZE(12, 16), 0, 0, 9, 1},
  {3, UPB_SIZE(28, 48), UPB_SIZE(-37, -65), 0, 13, 1},
  {4, UPB_SIZE(28, 48), UPB_SIZE(-37, -65), 0, 9, 1},
  {5, UPB_SIZE(20, 32), 0, 0, 9, 1},
  {6, UPB_SIZE(8, 8), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_core_SocketAddress_msginit = {
  NULL,
  &envoy_api_v2_core_SocketAddress__fields[0],
  UPB_SIZE(40, 80), 6, false,
};

static const upb_msglayout *const envoy_api_v2_core_TcpKeepalive_submsgs[3] = {
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_TcpKeepalive__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 0, 11, 1},
  {3, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_core_TcpKeepalive_msginit = {
  &envoy_api_v2_core_TcpKeepalive_submsgs[0],
  &envoy_api_v2_core_TcpKeepalive__fields[0],
  UPB_SIZE(12, 24), 3, false,
};

static const upb_msglayout *const envoy_api_v2_core_BindConfig_submsgs[3] = {
  &envoy_api_v2_core_SocketAddress_msginit,
  &envoy_api_v2_core_SocketOption_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_BindConfig__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 2, 11, 1},
  {3, UPB_SIZE(8, 16), 0, 1, 11, 3},
};

const upb_msglayout envoy_api_v2_core_BindConfig_msginit = {
  &envoy_api_v2_core_BindConfig_submsgs[0],
  &envoy_api_v2_core_BindConfig__fields[0],
  UPB_SIZE(12, 24), 3, false,
};

static const upb_msglayout *const envoy_api_v2_core_Address_submsgs[2] = {
  &envoy_api_v2_core_Pipe_msginit,
  &envoy_api_v2_core_SocketAddress_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_Address__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
};

const upb_msglayout envoy_api_v2_core_Address_msginit = {
  &envoy_api_v2_core_Address_submsgs[0],
  &envoy_api_v2_core_Address__fields[0],
  UPB_SIZE(8, 16), 2, false,
};

static const upb_msglayout *const envoy_api_v2_core_CidrRange_submsgs[1] = {
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_core_CidrRange__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_core_CidrRange_msginit = {
  &envoy_api_v2_core_CidrRange_submsgs[0],
  &envoy_api_v2_core_CidrRange__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

#include "upb/port_undef.inc"

