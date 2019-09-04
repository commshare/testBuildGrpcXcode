/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/discovery.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/discovery.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "google/protobuf/any.upb.h"
#include "google/rpc/status.upb.h"
#include "gogoproto/gogo.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_DiscoveryRequest_submsgs[2] = {
  &envoy_api_v2_core_Node_msginit,
  &google_rpc_Status_msginit,
};

static const upb_msglayout_field envoy_api_v2_DiscoveryRequest__fields[6] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(24, 48), 0, 0, 11, 1},
  {3, UPB_SIZE(32, 64), 0, 0, 9, 3},
  {4, UPB_SIZE(8, 16), 0, 0, 9, 1},
  {5, UPB_SIZE(16, 32), 0, 0, 9, 1},
  {6, UPB_SIZE(28, 56), 0, 1, 11, 1},
};

const upb_msglayout envoy_api_v2_DiscoveryRequest_msginit = {
  &envoy_api_v2_DiscoveryRequest_submsgs[0],
  &envoy_api_v2_DiscoveryRequest__fields[0],
  UPB_SIZE(40, 80), 6, false,
};

static const upb_msglayout *const envoy_api_v2_DiscoveryResponse_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_api_v2_DiscoveryResponse__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(28, 56), 0, 0, 11, 3},
  {3, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {4, UPB_SIZE(12, 24), 0, 0, 9, 1},
  {5, UPB_SIZE(20, 40), 0, 0, 9, 1},
};

const upb_msglayout envoy_api_v2_DiscoveryResponse_msginit = {
  &envoy_api_v2_DiscoveryResponse_submsgs[0],
  &envoy_api_v2_DiscoveryResponse__fields[0],
  UPB_SIZE(32, 64), 5, false,
};

static const upb_msglayout *const envoy_api_v2_IncrementalDiscoveryRequest_submsgs[3] = {
  &envoy_api_v2_IncrementalDiscoveryRequest_InitialResourceVersionsEntry_msginit,
  &envoy_api_v2_core_Node_msginit,
  &google_rpc_Status_msginit,
};

static const upb_msglayout_field envoy_api_v2_IncrementalDiscoveryRequest__fields[7] = {
  {1, UPB_SIZE(16, 32), 0, 1, 11, 1},
  {2, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {3, UPB_SIZE(24, 48), 0, 0, 9, 3},
  {4, UPB_SIZE(28, 56), 0, 0, 9, 3},
  {5, UPB_SIZE(32, 64), 0, 0, 11, 3},
  {6, UPB_SIZE(8, 16), 0, 0, 9, 1},
  {7, UPB_SIZE(20, 40), 0, 2, 11, 1},
};

const upb_msglayout envoy_api_v2_IncrementalDiscoveryRequest_msginit = {
  &envoy_api_v2_IncrementalDiscoveryRequest_submsgs[0],
  &envoy_api_v2_IncrementalDiscoveryRequest__fields[0],
  UPB_SIZE(40, 80), 7, false,
};

static const upb_msglayout_field envoy_api_v2_IncrementalDiscoveryRequest_InitialResourceVersionsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 9, 1},
};

const upb_msglayout envoy_api_v2_IncrementalDiscoveryRequest_InitialResourceVersionsEntry_msginit = {
  NULL,
  &envoy_api_v2_IncrementalDiscoveryRequest_InitialResourceVersionsEntry__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout *const envoy_api_v2_IncrementalDiscoveryResponse_submsgs[1] = {
  &envoy_api_v2_Resource_msginit,
};

static const upb_msglayout_field envoy_api_v2_IncrementalDiscoveryResponse__fields[4] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(16, 32), 0, 0, 11, 3},
  {5, UPB_SIZE(8, 16), 0, 0, 9, 1},
  {6, UPB_SIZE(20, 40), 0, 0, 9, 3},
};

const upb_msglayout envoy_api_v2_IncrementalDiscoveryResponse_msginit = {
  &envoy_api_v2_IncrementalDiscoveryResponse_submsgs[0],
  &envoy_api_v2_IncrementalDiscoveryResponse__fields[0],
  UPB_SIZE(24, 48), 4, false,
};

static const upb_msglayout *const envoy_api_v2_Resource_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_api_v2_Resource__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Resource_msginit = {
  &envoy_api_v2_Resource_submsgs[0],
  &envoy_api_v2_Resource__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

#include "upb/port_undef.inc"

