/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster/circuit_breaker.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/cluster/circuit_breaker.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "gogoproto/gogo.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_cluster_CircuitBreakers_submsgs[1] = {
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit,
};

static const upb_msglayout_field envoy_api_v2_cluster_CircuitBreakers__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_msginit = {
  &envoy_api_v2_cluster_CircuitBreakers_submsgs[0],
  &envoy_api_v2_cluster_CircuitBreakers__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_cluster_CircuitBreakers_Thresholds_submsgs[4] = {
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_cluster_CircuitBreakers_Thresholds__fields[5] = {
  {1, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {2, UPB_SIZE(8, 8), 0, 0, 11, 1},
  {3, UPB_SIZE(12, 16), 0, 0, 11, 1},
  {4, UPB_SIZE(16, 24), 0, 0, 11, 1},
  {5, UPB_SIZE(20, 32), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit = {
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_submsgs[0],
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds__fields[0],
  UPB_SIZE(24, 40), 5, false,
};

#include "upb/port_undef.inc"

