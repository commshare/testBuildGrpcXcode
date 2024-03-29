/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/endpoint/load_report.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_ENDPOINT_LOAD_REPORT_PROTO_UPB_H_
#define ENVOY_API_V2_ENDPOINT_LOAD_REPORT_PROTO_UPB_H_

#include "upb/generated_util.h"

#include "upb/msg.h"

#include "upb/decode.h"
#include "upb/encode.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_endpoint_UpstreamLocalityStats;
struct envoy_api_v2_endpoint_UpstreamEndpointStats;
struct envoy_api_v2_endpoint_EndpointLoadMetricStats;
struct envoy_api_v2_endpoint_ClusterStats;
struct envoy_api_v2_endpoint_ClusterStats_DroppedRequests;
typedef struct envoy_api_v2_endpoint_UpstreamLocalityStats envoy_api_v2_endpoint_UpstreamLocalityStats;
typedef struct envoy_api_v2_endpoint_UpstreamEndpointStats envoy_api_v2_endpoint_UpstreamEndpointStats;
typedef struct envoy_api_v2_endpoint_EndpointLoadMetricStats envoy_api_v2_endpoint_EndpointLoadMetricStats;
typedef struct envoy_api_v2_endpoint_ClusterStats envoy_api_v2_endpoint_ClusterStats;
typedef struct envoy_api_v2_endpoint_ClusterStats_DroppedRequests envoy_api_v2_endpoint_ClusterStats_DroppedRequests;
extern const upb_msglayout envoy_api_v2_endpoint_UpstreamLocalityStats_msginit;
extern const upb_msglayout envoy_api_v2_endpoint_UpstreamEndpointStats_msginit;
extern const upb_msglayout envoy_api_v2_endpoint_EndpointLoadMetricStats_msginit;
extern const upb_msglayout envoy_api_v2_endpoint_ClusterStats_msginit;
extern const upb_msglayout envoy_api_v2_endpoint_ClusterStats_DroppedRequests_msginit;
struct envoy_api_v2_core_Address;
struct envoy_api_v2_core_Locality;
struct google_protobuf_Duration;
extern const upb_msglayout envoy_api_v2_core_Address_msginit;
extern const upb_msglayout envoy_api_v2_core_Locality_msginit;
extern const upb_msglayout google_protobuf_Duration_msginit;

/* Enums */


/* envoy.api.v2.endpoint.UpstreamLocalityStats */

UPB_INLINE envoy_api_v2_endpoint_UpstreamLocalityStats *envoy_api_v2_endpoint_UpstreamLocalityStats_new(upb_arena *arena) {
  return (envoy_api_v2_endpoint_UpstreamLocalityStats *)upb_msg_new(&envoy_api_v2_endpoint_UpstreamLocalityStats_msginit, arena);
}
UPB_INLINE envoy_api_v2_endpoint_UpstreamLocalityStats *envoy_api_v2_endpoint_UpstreamLocalityStats_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_endpoint_UpstreamLocalityStats *ret = envoy_api_v2_endpoint_UpstreamLocalityStats_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_endpoint_UpstreamLocalityStats_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_endpoint_UpstreamLocalityStats_serialize(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_endpoint_UpstreamLocalityStats_msginit, arena, len);
}

UPB_INLINE const struct envoy_api_v2_core_Locality* envoy_api_v2_endpoint_UpstreamLocalityStats_locality(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_Locality*, UPB_SIZE(28, 32)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_UpstreamLocalityStats_total_successful_requests(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_UpstreamLocalityStats_total_requests_in_progress(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(8, 8)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_UpstreamLocalityStats_total_error_requests(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(16, 16)); }
UPB_INLINE const envoy_api_v2_endpoint_EndpointLoadMetricStats* const* envoy_api_v2_endpoint_UpstreamLocalityStats_load_metric_stats(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg, size_t *len) { return (const envoy_api_v2_endpoint_EndpointLoadMetricStats* const*)_upb_array_accessor(msg, UPB_SIZE(32, 40), len); }
UPB_INLINE uint32_t envoy_api_v2_endpoint_UpstreamLocalityStats_priority(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg) { return UPB_FIELD_AT(msg, uint32_t, UPB_SIZE(24, 24)); }
UPB_INLINE const envoy_api_v2_endpoint_UpstreamEndpointStats* const* envoy_api_v2_endpoint_UpstreamLocalityStats_upstream_endpoint_stats(const envoy_api_v2_endpoint_UpstreamLocalityStats *msg, size_t *len) { return (const envoy_api_v2_endpoint_UpstreamEndpointStats* const*)_upb_array_accessor(msg, UPB_SIZE(36, 48), len); }

UPB_INLINE void envoy_api_v2_endpoint_UpstreamLocalityStats_set_locality(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, struct envoy_api_v2_core_Locality* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_Locality*, UPB_SIZE(28, 32)) = value;
}
UPB_INLINE struct envoy_api_v2_core_Locality* envoy_api_v2_endpoint_UpstreamLocalityStats_mutable_locality(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Locality* sub = (struct envoy_api_v2_core_Locality*)envoy_api_v2_endpoint_UpstreamLocalityStats_locality(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Locality*)upb_msg_new(&envoy_api_v2_core_Locality_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_endpoint_UpstreamLocalityStats_set_locality(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamLocalityStats_set_total_successful_requests(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamLocalityStats_set_total_requests_in_progress(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamLocalityStats_set_total_error_requests(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(16, 16)) = value;
}
UPB_INLINE envoy_api_v2_endpoint_EndpointLoadMetricStats** envoy_api_v2_endpoint_UpstreamLocalityStats_mutable_load_metric_stats(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, size_t *len) {
  return (envoy_api_v2_endpoint_EndpointLoadMetricStats**)_upb_array_mutable_accessor(msg, UPB_SIZE(32, 40), len);
}
UPB_INLINE envoy_api_v2_endpoint_EndpointLoadMetricStats** envoy_api_v2_endpoint_UpstreamLocalityStats_resize_load_metric_stats(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_endpoint_EndpointLoadMetricStats**)_upb_array_resize_accessor(msg, UPB_SIZE(32, 40), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_endpoint_EndpointLoadMetricStats* envoy_api_v2_endpoint_UpstreamLocalityStats_add_load_metric_stats(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, upb_arena *arena) {
  struct envoy_api_v2_endpoint_EndpointLoadMetricStats* sub = (struct envoy_api_v2_endpoint_EndpointLoadMetricStats*)upb_msg_new(&envoy_api_v2_endpoint_EndpointLoadMetricStats_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(32, 40), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamLocalityStats_set_priority(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, uint32_t value) {
  UPB_FIELD_AT(msg, uint32_t, UPB_SIZE(24, 24)) = value;
}
UPB_INLINE envoy_api_v2_endpoint_UpstreamEndpointStats** envoy_api_v2_endpoint_UpstreamLocalityStats_mutable_upstream_endpoint_stats(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, size_t *len) {
  return (envoy_api_v2_endpoint_UpstreamEndpointStats**)_upb_array_mutable_accessor(msg, UPB_SIZE(36, 48), len);
}
UPB_INLINE envoy_api_v2_endpoint_UpstreamEndpointStats** envoy_api_v2_endpoint_UpstreamLocalityStats_resize_upstream_endpoint_stats(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_endpoint_UpstreamEndpointStats**)_upb_array_resize_accessor(msg, UPB_SIZE(36, 48), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_endpoint_UpstreamEndpointStats* envoy_api_v2_endpoint_UpstreamLocalityStats_add_upstream_endpoint_stats(envoy_api_v2_endpoint_UpstreamLocalityStats *msg, upb_arena *arena) {
  struct envoy_api_v2_endpoint_UpstreamEndpointStats* sub = (struct envoy_api_v2_endpoint_UpstreamEndpointStats*)upb_msg_new(&envoy_api_v2_endpoint_UpstreamEndpointStats_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(36, 48), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}


/* envoy.api.v2.endpoint.UpstreamEndpointStats */

UPB_INLINE envoy_api_v2_endpoint_UpstreamEndpointStats *envoy_api_v2_endpoint_UpstreamEndpointStats_new(upb_arena *arena) {
  return (envoy_api_v2_endpoint_UpstreamEndpointStats *)upb_msg_new(&envoy_api_v2_endpoint_UpstreamEndpointStats_msginit, arena);
}
UPB_INLINE envoy_api_v2_endpoint_UpstreamEndpointStats *envoy_api_v2_endpoint_UpstreamEndpointStats_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_endpoint_UpstreamEndpointStats *ret = envoy_api_v2_endpoint_UpstreamEndpointStats_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_endpoint_UpstreamEndpointStats_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_endpoint_UpstreamEndpointStats_serialize(const envoy_api_v2_endpoint_UpstreamEndpointStats *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_endpoint_UpstreamEndpointStats_msginit, arena, len);
}

UPB_INLINE const struct envoy_api_v2_core_Address* envoy_api_v2_endpoint_UpstreamEndpointStats_address(const envoy_api_v2_endpoint_UpstreamEndpointStats *msg) { return UPB_FIELD_AT(msg, const struct envoy_api_v2_core_Address*, UPB_SIZE(24, 24)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_UpstreamEndpointStats_total_successful_requests(const envoy_api_v2_endpoint_UpstreamEndpointStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_UpstreamEndpointStats_total_requests_in_progress(const envoy_api_v2_endpoint_UpstreamEndpointStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(8, 8)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_UpstreamEndpointStats_total_error_requests(const envoy_api_v2_endpoint_UpstreamEndpointStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(16, 16)); }
UPB_INLINE const envoy_api_v2_endpoint_EndpointLoadMetricStats* const* envoy_api_v2_endpoint_UpstreamEndpointStats_load_metric_stats(const envoy_api_v2_endpoint_UpstreamEndpointStats *msg, size_t *len) { return (const envoy_api_v2_endpoint_EndpointLoadMetricStats* const*)_upb_array_accessor(msg, UPB_SIZE(28, 32), len); }

UPB_INLINE void envoy_api_v2_endpoint_UpstreamEndpointStats_set_address(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, struct envoy_api_v2_core_Address* value) {
  UPB_FIELD_AT(msg, struct envoy_api_v2_core_Address*, UPB_SIZE(24, 24)) = value;
}
UPB_INLINE struct envoy_api_v2_core_Address* envoy_api_v2_endpoint_UpstreamEndpointStats_mutable_address(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Address* sub = (struct envoy_api_v2_core_Address*)envoy_api_v2_endpoint_UpstreamEndpointStats_address(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Address*)upb_msg_new(&envoy_api_v2_core_Address_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_endpoint_UpstreamEndpointStats_set_address(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamEndpointStats_set_total_successful_requests(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamEndpointStats_set_total_requests_in_progress(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_UpstreamEndpointStats_set_total_error_requests(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(16, 16)) = value;
}
UPB_INLINE envoy_api_v2_endpoint_EndpointLoadMetricStats** envoy_api_v2_endpoint_UpstreamEndpointStats_mutable_load_metric_stats(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, size_t *len) {
  return (envoy_api_v2_endpoint_EndpointLoadMetricStats**)_upb_array_mutable_accessor(msg, UPB_SIZE(28, 32), len);
}
UPB_INLINE envoy_api_v2_endpoint_EndpointLoadMetricStats** envoy_api_v2_endpoint_UpstreamEndpointStats_resize_load_metric_stats(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_endpoint_EndpointLoadMetricStats**)_upb_array_resize_accessor(msg, UPB_SIZE(28, 32), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_endpoint_EndpointLoadMetricStats* envoy_api_v2_endpoint_UpstreamEndpointStats_add_load_metric_stats(envoy_api_v2_endpoint_UpstreamEndpointStats *msg, upb_arena *arena) {
  struct envoy_api_v2_endpoint_EndpointLoadMetricStats* sub = (struct envoy_api_v2_endpoint_EndpointLoadMetricStats*)upb_msg_new(&envoy_api_v2_endpoint_EndpointLoadMetricStats_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(28, 32), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}


/* envoy.api.v2.endpoint.EndpointLoadMetricStats */

UPB_INLINE envoy_api_v2_endpoint_EndpointLoadMetricStats *envoy_api_v2_endpoint_EndpointLoadMetricStats_new(upb_arena *arena) {
  return (envoy_api_v2_endpoint_EndpointLoadMetricStats *)upb_msg_new(&envoy_api_v2_endpoint_EndpointLoadMetricStats_msginit, arena);
}
UPB_INLINE envoy_api_v2_endpoint_EndpointLoadMetricStats *envoy_api_v2_endpoint_EndpointLoadMetricStats_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_endpoint_EndpointLoadMetricStats *ret = envoy_api_v2_endpoint_EndpointLoadMetricStats_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_endpoint_EndpointLoadMetricStats_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_endpoint_EndpointLoadMetricStats_serialize(const envoy_api_v2_endpoint_EndpointLoadMetricStats *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_endpoint_EndpointLoadMetricStats_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_endpoint_EndpointLoadMetricStats_metric_name(const envoy_api_v2_endpoint_EndpointLoadMetricStats *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(16, 16)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_EndpointLoadMetricStats_num_requests_finished_with_metric(const envoy_api_v2_endpoint_EndpointLoadMetricStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)); }
UPB_INLINE double envoy_api_v2_endpoint_EndpointLoadMetricStats_total_metric_value(const envoy_api_v2_endpoint_EndpointLoadMetricStats *msg) { return UPB_FIELD_AT(msg, double, UPB_SIZE(8, 8)); }

UPB_INLINE void envoy_api_v2_endpoint_EndpointLoadMetricStats_set_metric_name(envoy_api_v2_endpoint_EndpointLoadMetricStats *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(16, 16)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_EndpointLoadMetricStats_set_num_requests_finished_with_metric(envoy_api_v2_endpoint_EndpointLoadMetricStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_EndpointLoadMetricStats_set_total_metric_value(envoy_api_v2_endpoint_EndpointLoadMetricStats *msg, double value) {
  UPB_FIELD_AT(msg, double, UPB_SIZE(8, 8)) = value;
}


/* envoy.api.v2.endpoint.ClusterStats */

UPB_INLINE envoy_api_v2_endpoint_ClusterStats *envoy_api_v2_endpoint_ClusterStats_new(upb_arena *arena) {
  return (envoy_api_v2_endpoint_ClusterStats *)upb_msg_new(&envoy_api_v2_endpoint_ClusterStats_msginit, arena);
}
UPB_INLINE envoy_api_v2_endpoint_ClusterStats *envoy_api_v2_endpoint_ClusterStats_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_endpoint_ClusterStats *ret = envoy_api_v2_endpoint_ClusterStats_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_endpoint_ClusterStats_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_endpoint_ClusterStats_serialize(const envoy_api_v2_endpoint_ClusterStats *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_endpoint_ClusterStats_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_endpoint_ClusterStats_cluster_name(const envoy_api_v2_endpoint_ClusterStats *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 8)); }
UPB_INLINE const envoy_api_v2_endpoint_UpstreamLocalityStats* const* envoy_api_v2_endpoint_ClusterStats_upstream_locality_stats(const envoy_api_v2_endpoint_ClusterStats *msg, size_t *len) { return (const envoy_api_v2_endpoint_UpstreamLocalityStats* const*)_upb_array_accessor(msg, UPB_SIZE(20, 32), len); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_ClusterStats_total_dropped_requests(const envoy_api_v2_endpoint_ClusterStats *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)); }
UPB_INLINE const struct google_protobuf_Duration* envoy_api_v2_endpoint_ClusterStats_load_report_interval(const envoy_api_v2_endpoint_ClusterStats *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_Duration*, UPB_SIZE(16, 24)); }
UPB_INLINE const envoy_api_v2_endpoint_ClusterStats_DroppedRequests* const* envoy_api_v2_endpoint_ClusterStats_dropped_requests(const envoy_api_v2_endpoint_ClusterStats *msg, size_t *len) { return (const envoy_api_v2_endpoint_ClusterStats_DroppedRequests* const*)_upb_array_accessor(msg, UPB_SIZE(24, 40), len); }

UPB_INLINE void envoy_api_v2_endpoint_ClusterStats_set_cluster_name(envoy_api_v2_endpoint_ClusterStats *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE envoy_api_v2_endpoint_UpstreamLocalityStats** envoy_api_v2_endpoint_ClusterStats_mutable_upstream_locality_stats(envoy_api_v2_endpoint_ClusterStats *msg, size_t *len) {
  return (envoy_api_v2_endpoint_UpstreamLocalityStats**)_upb_array_mutable_accessor(msg, UPB_SIZE(20, 32), len);
}
UPB_INLINE envoy_api_v2_endpoint_UpstreamLocalityStats** envoy_api_v2_endpoint_ClusterStats_resize_upstream_locality_stats(envoy_api_v2_endpoint_ClusterStats *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_endpoint_UpstreamLocalityStats**)_upb_array_resize_accessor(msg, UPB_SIZE(20, 32), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_endpoint_UpstreamLocalityStats* envoy_api_v2_endpoint_ClusterStats_add_upstream_locality_stats(envoy_api_v2_endpoint_ClusterStats *msg, upb_arena *arena) {
  struct envoy_api_v2_endpoint_UpstreamLocalityStats* sub = (struct envoy_api_v2_endpoint_UpstreamLocalityStats*)upb_msg_new(&envoy_api_v2_endpoint_UpstreamLocalityStats_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(20, 32), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_api_v2_endpoint_ClusterStats_set_total_dropped_requests(envoy_api_v2_endpoint_ClusterStats *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_ClusterStats_set_load_report_interval(envoy_api_v2_endpoint_ClusterStats *msg, struct google_protobuf_Duration* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_Duration*, UPB_SIZE(16, 24)) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_api_v2_endpoint_ClusterStats_mutable_load_report_interval(envoy_api_v2_endpoint_ClusterStats *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_api_v2_endpoint_ClusterStats_load_report_interval(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_endpoint_ClusterStats_set_load_report_interval(msg, sub);
  }
  return sub;
}
UPB_INLINE envoy_api_v2_endpoint_ClusterStats_DroppedRequests** envoy_api_v2_endpoint_ClusterStats_mutable_dropped_requests(envoy_api_v2_endpoint_ClusterStats *msg, size_t *len) {
  return (envoy_api_v2_endpoint_ClusterStats_DroppedRequests**)_upb_array_mutable_accessor(msg, UPB_SIZE(24, 40), len);
}
UPB_INLINE envoy_api_v2_endpoint_ClusterStats_DroppedRequests** envoy_api_v2_endpoint_ClusterStats_resize_dropped_requests(envoy_api_v2_endpoint_ClusterStats *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_endpoint_ClusterStats_DroppedRequests**)_upb_array_resize_accessor(msg, UPB_SIZE(24, 40), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_endpoint_ClusterStats_DroppedRequests* envoy_api_v2_endpoint_ClusterStats_add_dropped_requests(envoy_api_v2_endpoint_ClusterStats *msg, upb_arena *arena) {
  struct envoy_api_v2_endpoint_ClusterStats_DroppedRequests* sub = (struct envoy_api_v2_endpoint_ClusterStats_DroppedRequests*)upb_msg_new(&envoy_api_v2_endpoint_ClusterStats_DroppedRequests_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(24, 40), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}


/* envoy.api.v2.endpoint.ClusterStats.DroppedRequests */

UPB_INLINE envoy_api_v2_endpoint_ClusterStats_DroppedRequests *envoy_api_v2_endpoint_ClusterStats_DroppedRequests_new(upb_arena *arena) {
  return (envoy_api_v2_endpoint_ClusterStats_DroppedRequests *)upb_msg_new(&envoy_api_v2_endpoint_ClusterStats_DroppedRequests_msginit, arena);
}
UPB_INLINE envoy_api_v2_endpoint_ClusterStats_DroppedRequests *envoy_api_v2_endpoint_ClusterStats_DroppedRequests_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_endpoint_ClusterStats_DroppedRequests *ret = envoy_api_v2_endpoint_ClusterStats_DroppedRequests_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_endpoint_ClusterStats_DroppedRequests_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_endpoint_ClusterStats_DroppedRequests_serialize(const envoy_api_v2_endpoint_ClusterStats_DroppedRequests *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_endpoint_ClusterStats_DroppedRequests_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_endpoint_ClusterStats_DroppedRequests_category(const envoy_api_v2_endpoint_ClusterStats_DroppedRequests *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 8)); }
UPB_INLINE uint64_t envoy_api_v2_endpoint_ClusterStats_DroppedRequests_dropped_count(const envoy_api_v2_endpoint_ClusterStats_DroppedRequests *msg) { return UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)); }

UPB_INLINE void envoy_api_v2_endpoint_ClusterStats_DroppedRequests_set_category(envoy_api_v2_endpoint_ClusterStats_DroppedRequests *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE void envoy_api_v2_endpoint_ClusterStats_DroppedRequests_set_dropped_count(envoy_api_v2_endpoint_ClusterStats_DroppedRequests *msg, uint64_t value) {
  UPB_FIELD_AT(msg, uint64_t, UPB_SIZE(0, 0)) = value;
}


#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_ENDPOINT_LOAD_REPORT_PROTO_UPB_H_ */
