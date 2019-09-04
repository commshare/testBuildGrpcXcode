/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/core/base.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_API_V2_CORE_BASE_PROTO_UPB_H_
#define ENVOY_API_V2_CORE_BASE_PROTO_UPB_H_

#include "upb/generated_util.h"

#include "upb/msg.h"

#include "upb/decode.h"
#include "upb/encode.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

struct envoy_api_v2_core_Locality;
struct envoy_api_v2_core_Node;
struct envoy_api_v2_core_Metadata;
struct envoy_api_v2_core_Metadata_FilterMetadataEntry;
struct envoy_api_v2_core_RuntimeUInt32;
struct envoy_api_v2_core_HeaderValue;
struct envoy_api_v2_core_HeaderValueOption;
struct envoy_api_v2_core_DataSource;
struct envoy_api_v2_core_TransportSocket;
struct envoy_api_v2_core_SocketOption;
struct envoy_api_v2_core_RuntimeFractionalPercent;
typedef struct envoy_api_v2_core_Locality envoy_api_v2_core_Locality;
typedef struct envoy_api_v2_core_Node envoy_api_v2_core_Node;
typedef struct envoy_api_v2_core_Metadata envoy_api_v2_core_Metadata;
typedef struct envoy_api_v2_core_Metadata_FilterMetadataEntry envoy_api_v2_core_Metadata_FilterMetadataEntry;
typedef struct envoy_api_v2_core_RuntimeUInt32 envoy_api_v2_core_RuntimeUInt32;
typedef struct envoy_api_v2_core_HeaderValue envoy_api_v2_core_HeaderValue;
typedef struct envoy_api_v2_core_HeaderValueOption envoy_api_v2_core_HeaderValueOption;
typedef struct envoy_api_v2_core_DataSource envoy_api_v2_core_DataSource;
typedef struct envoy_api_v2_core_TransportSocket envoy_api_v2_core_TransportSocket;
typedef struct envoy_api_v2_core_SocketOption envoy_api_v2_core_SocketOption;
typedef struct envoy_api_v2_core_RuntimeFractionalPercent envoy_api_v2_core_RuntimeFractionalPercent;
extern const upb_msglayout envoy_api_v2_core_Locality_msginit;
extern const upb_msglayout envoy_api_v2_core_Node_msginit;
extern const upb_msglayout envoy_api_v2_core_Metadata_msginit;
extern const upb_msglayout envoy_api_v2_core_Metadata_FilterMetadataEntry_msginit;
extern const upb_msglayout envoy_api_v2_core_RuntimeUInt32_msginit;
extern const upb_msglayout envoy_api_v2_core_HeaderValue_msginit;
extern const upb_msglayout envoy_api_v2_core_HeaderValueOption_msginit;
extern const upb_msglayout envoy_api_v2_core_DataSource_msginit;
extern const upb_msglayout envoy_api_v2_core_TransportSocket_msginit;
extern const upb_msglayout envoy_api_v2_core_SocketOption_msginit;
extern const upb_msglayout envoy_api_v2_core_RuntimeFractionalPercent_msginit;
struct envoy_type_FractionalPercent;
struct google_protobuf_Any;
struct google_protobuf_BoolValue;
struct google_protobuf_Struct;
extern const upb_msglayout envoy_type_FractionalPercent_msginit;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;
extern const upb_msglayout google_protobuf_Struct_msginit;

/* Enums */

typedef enum {
  envoy_api_v2_core_METHOD_UNSPECIFIED = 0,
  envoy_api_v2_core_GET = 1,
  envoy_api_v2_core_HEAD = 2,
  envoy_api_v2_core_POST = 3,
  envoy_api_v2_core_PUT = 4,
  envoy_api_v2_core_DELETE = 5,
  envoy_api_v2_core_CONNECT = 6,
  envoy_api_v2_core_OPTIONS = 7,
  envoy_api_v2_core_TRACE = 8
} envoy_api_v2_core_RequestMethod;

typedef enum {
  envoy_api_v2_core_DEFAULT = 0,
  envoy_api_v2_core_HIGH = 1
} envoy_api_v2_core_RoutingPriority;

typedef enum {
  envoy_api_v2_core_SocketOption_STATE_PREBIND = 0,
  envoy_api_v2_core_SocketOption_STATE_BOUND = 1,
  envoy_api_v2_core_SocketOption_STATE_LISTENING = 2
} envoy_api_v2_core_SocketOption_SocketState;


/* envoy.api.v2.core.Locality */

UPB_INLINE envoy_api_v2_core_Locality *envoy_api_v2_core_Locality_new(upb_arena *arena) {
  return (envoy_api_v2_core_Locality *)upb_msg_new(&envoy_api_v2_core_Locality_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_Locality *envoy_api_v2_core_Locality_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_Locality *ret = envoy_api_v2_core_Locality_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_Locality_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_Locality_serialize(const envoy_api_v2_core_Locality *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_Locality_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_core_Locality_region(const envoy_api_v2_core_Locality *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE upb_strview envoy_api_v2_core_Locality_zone(const envoy_api_v2_core_Locality *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)); }
UPB_INLINE upb_strview envoy_api_v2_core_Locality_sub_zone(const envoy_api_v2_core_Locality *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(16, 32)); }

UPB_INLINE void envoy_api_v2_core_Locality_set_region(envoy_api_v2_core_Locality *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_Locality_set_zone(envoy_api_v2_core_Locality *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE void envoy_api_v2_core_Locality_set_sub_zone(envoy_api_v2_core_Locality *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(16, 32)) = value;
}


/* envoy.api.v2.core.Node */

UPB_INLINE envoy_api_v2_core_Node *envoy_api_v2_core_Node_new(upb_arena *arena) {
  return (envoy_api_v2_core_Node *)upb_msg_new(&envoy_api_v2_core_Node_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_Node *envoy_api_v2_core_Node_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_Node *ret = envoy_api_v2_core_Node_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_Node_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_Node_serialize(const envoy_api_v2_core_Node *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_Node_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_core_Node_id(const envoy_api_v2_core_Node *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE upb_strview envoy_api_v2_core_Node_cluster(const envoy_api_v2_core_Node *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)); }
UPB_INLINE const struct google_protobuf_Struct* envoy_api_v2_core_Node_metadata(const envoy_api_v2_core_Node *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_Struct*, UPB_SIZE(24, 48)); }
UPB_INLINE const envoy_api_v2_core_Locality* envoy_api_v2_core_Node_locality(const envoy_api_v2_core_Node *msg) { return UPB_FIELD_AT(msg, const envoy_api_v2_core_Locality*, UPB_SIZE(28, 56)); }
UPB_INLINE upb_strview envoy_api_v2_core_Node_build_version(const envoy_api_v2_core_Node *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(16, 32)); }

UPB_INLINE void envoy_api_v2_core_Node_set_id(envoy_api_v2_core_Node *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_Node_set_cluster(envoy_api_v2_core_Node *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE void envoy_api_v2_core_Node_set_metadata(envoy_api_v2_core_Node *msg, struct google_protobuf_Struct* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_Struct*, UPB_SIZE(24, 48)) = value;
}
UPB_INLINE struct google_protobuf_Struct* envoy_api_v2_core_Node_mutable_metadata(envoy_api_v2_core_Node *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)envoy_api_v2_core_Node_metadata(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Node_set_metadata(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Node_set_locality(envoy_api_v2_core_Node *msg, envoy_api_v2_core_Locality* value) {
  UPB_FIELD_AT(msg, envoy_api_v2_core_Locality*, UPB_SIZE(28, 56)) = value;
}
UPB_INLINE struct envoy_api_v2_core_Locality* envoy_api_v2_core_Node_mutable_locality(envoy_api_v2_core_Node *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Locality* sub = (struct envoy_api_v2_core_Locality*)envoy_api_v2_core_Node_locality(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_Locality*)upb_msg_new(&envoy_api_v2_core_Locality_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Node_set_locality(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_Node_set_build_version(envoy_api_v2_core_Node *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(16, 32)) = value;
}


/* envoy.api.v2.core.Metadata */

UPB_INLINE envoy_api_v2_core_Metadata *envoy_api_v2_core_Metadata_new(upb_arena *arena) {
  return (envoy_api_v2_core_Metadata *)upb_msg_new(&envoy_api_v2_core_Metadata_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_Metadata *envoy_api_v2_core_Metadata_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_Metadata *ret = envoy_api_v2_core_Metadata_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_Metadata_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_Metadata_serialize(const envoy_api_v2_core_Metadata *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_Metadata_msginit, arena, len);
}

UPB_INLINE const envoy_api_v2_core_Metadata_FilterMetadataEntry* const* envoy_api_v2_core_Metadata_filter_metadata(const envoy_api_v2_core_Metadata *msg, size_t *len) { return (const envoy_api_v2_core_Metadata_FilterMetadataEntry* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_api_v2_core_Metadata_FilterMetadataEntry** envoy_api_v2_core_Metadata_mutable_filter_metadata(envoy_api_v2_core_Metadata *msg, size_t *len) {
  return (envoy_api_v2_core_Metadata_FilterMetadataEntry**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_api_v2_core_Metadata_FilterMetadataEntry** envoy_api_v2_core_Metadata_resize_filter_metadata(envoy_api_v2_core_Metadata *msg, size_t len, upb_arena *arena) {
  return (envoy_api_v2_core_Metadata_FilterMetadataEntry**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_api_v2_core_Metadata_FilterMetadataEntry* envoy_api_v2_core_Metadata_add_filter_metadata(envoy_api_v2_core_Metadata *msg, upb_arena *arena) {
  struct envoy_api_v2_core_Metadata_FilterMetadataEntry* sub = (struct envoy_api_v2_core_Metadata_FilterMetadataEntry*)upb_msg_new(&envoy_api_v2_core_Metadata_FilterMetadataEntry_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}


/* envoy.api.v2.core.Metadata.FilterMetadataEntry */

UPB_INLINE envoy_api_v2_core_Metadata_FilterMetadataEntry *envoy_api_v2_core_Metadata_FilterMetadataEntry_new(upb_arena *arena) {
  return (envoy_api_v2_core_Metadata_FilterMetadataEntry *)upb_msg_new(&envoy_api_v2_core_Metadata_FilterMetadataEntry_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_Metadata_FilterMetadataEntry *envoy_api_v2_core_Metadata_FilterMetadataEntry_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_Metadata_FilterMetadataEntry *ret = envoy_api_v2_core_Metadata_FilterMetadataEntry_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_Metadata_FilterMetadataEntry_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_Metadata_FilterMetadataEntry_serialize(const envoy_api_v2_core_Metadata_FilterMetadataEntry *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_Metadata_FilterMetadataEntry_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_core_Metadata_FilterMetadataEntry_key(const envoy_api_v2_core_Metadata_FilterMetadataEntry *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE const struct google_protobuf_Struct* envoy_api_v2_core_Metadata_FilterMetadataEntry_value(const envoy_api_v2_core_Metadata_FilterMetadataEntry *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_Struct*, UPB_SIZE(8, 16)); }

UPB_INLINE void envoy_api_v2_core_Metadata_FilterMetadataEntry_set_key(envoy_api_v2_core_Metadata_FilterMetadataEntry *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_Metadata_FilterMetadataEntry_set_value(envoy_api_v2_core_Metadata_FilterMetadataEntry *msg, struct google_protobuf_Struct* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_Struct*, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE struct google_protobuf_Struct* envoy_api_v2_core_Metadata_FilterMetadataEntry_mutable_value(envoy_api_v2_core_Metadata_FilterMetadataEntry *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)envoy_api_v2_core_Metadata_FilterMetadataEntry_value(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_Metadata_FilterMetadataEntry_set_value(msg, sub);
  }
  return sub;
}


/* envoy.api.v2.core.RuntimeUInt32 */

UPB_INLINE envoy_api_v2_core_RuntimeUInt32 *envoy_api_v2_core_RuntimeUInt32_new(upb_arena *arena) {
  return (envoy_api_v2_core_RuntimeUInt32 *)upb_msg_new(&envoy_api_v2_core_RuntimeUInt32_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_RuntimeUInt32 *envoy_api_v2_core_RuntimeUInt32_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_RuntimeUInt32 *ret = envoy_api_v2_core_RuntimeUInt32_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_RuntimeUInt32_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_RuntimeUInt32_serialize(const envoy_api_v2_core_RuntimeUInt32 *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_RuntimeUInt32_msginit, arena, len);
}

UPB_INLINE uint32_t envoy_api_v2_core_RuntimeUInt32_default_value(const envoy_api_v2_core_RuntimeUInt32 *msg) { return UPB_FIELD_AT(msg, uint32_t, UPB_SIZE(0, 0)); }
UPB_INLINE upb_strview envoy_api_v2_core_RuntimeUInt32_runtime_key(const envoy_api_v2_core_RuntimeUInt32 *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(4, 8)); }

UPB_INLINE void envoy_api_v2_core_RuntimeUInt32_set_default_value(envoy_api_v2_core_RuntimeUInt32 *msg, uint32_t value) {
  UPB_FIELD_AT(msg, uint32_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_RuntimeUInt32_set_runtime_key(envoy_api_v2_core_RuntimeUInt32 *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(4, 8)) = value;
}


/* envoy.api.v2.core.HeaderValue */

UPB_INLINE envoy_api_v2_core_HeaderValue *envoy_api_v2_core_HeaderValue_new(upb_arena *arena) {
  return (envoy_api_v2_core_HeaderValue *)upb_msg_new(&envoy_api_v2_core_HeaderValue_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_HeaderValue *envoy_api_v2_core_HeaderValue_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_HeaderValue *ret = envoy_api_v2_core_HeaderValue_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_HeaderValue_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_HeaderValue_serialize(const envoy_api_v2_core_HeaderValue *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_HeaderValue_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_api_v2_core_HeaderValue_key(const envoy_api_v2_core_HeaderValue *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE upb_strview envoy_api_v2_core_HeaderValue_value(const envoy_api_v2_core_HeaderValue *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)); }

UPB_INLINE void envoy_api_v2_core_HeaderValue_set_key(envoy_api_v2_core_HeaderValue *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_HeaderValue_set_value(envoy_api_v2_core_HeaderValue *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(8, 16)) = value;
}


/* envoy.api.v2.core.HeaderValueOption */

UPB_INLINE envoy_api_v2_core_HeaderValueOption *envoy_api_v2_core_HeaderValueOption_new(upb_arena *arena) {
  return (envoy_api_v2_core_HeaderValueOption *)upb_msg_new(&envoy_api_v2_core_HeaderValueOption_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_HeaderValueOption *envoy_api_v2_core_HeaderValueOption_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_HeaderValueOption *ret = envoy_api_v2_core_HeaderValueOption_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_HeaderValueOption_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_HeaderValueOption_serialize(const envoy_api_v2_core_HeaderValueOption *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_HeaderValueOption_msginit, arena, len);
}

UPB_INLINE const envoy_api_v2_core_HeaderValue* envoy_api_v2_core_HeaderValueOption_header(const envoy_api_v2_core_HeaderValueOption *msg) { return UPB_FIELD_AT(msg, const envoy_api_v2_core_HeaderValue*, UPB_SIZE(0, 0)); }
UPB_INLINE const struct google_protobuf_BoolValue* envoy_api_v2_core_HeaderValueOption_append(const envoy_api_v2_core_HeaderValueOption *msg) { return UPB_FIELD_AT(msg, const struct google_protobuf_BoolValue*, UPB_SIZE(4, 8)); }

UPB_INLINE void envoy_api_v2_core_HeaderValueOption_set_header(envoy_api_v2_core_HeaderValueOption *msg, envoy_api_v2_core_HeaderValue* value) {
  UPB_FIELD_AT(msg, envoy_api_v2_core_HeaderValue*, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE struct envoy_api_v2_core_HeaderValue* envoy_api_v2_core_HeaderValueOption_mutable_header(envoy_api_v2_core_HeaderValueOption *msg, upb_arena *arena) {
  struct envoy_api_v2_core_HeaderValue* sub = (struct envoy_api_v2_core_HeaderValue*)envoy_api_v2_core_HeaderValueOption_header(msg);
  if (sub == NULL) {
    sub = (struct envoy_api_v2_core_HeaderValue*)upb_msg_new(&envoy_api_v2_core_HeaderValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_HeaderValueOption_set_header(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_HeaderValueOption_set_append(envoy_api_v2_core_HeaderValueOption *msg, struct google_protobuf_BoolValue* value) {
  UPB_FIELD_AT(msg, struct google_protobuf_BoolValue*, UPB_SIZE(4, 8)) = value;
}
UPB_INLINE struct google_protobuf_BoolValue* envoy_api_v2_core_HeaderValueOption_mutable_append(envoy_api_v2_core_HeaderValueOption *msg, upb_arena *arena) {
  struct google_protobuf_BoolValue* sub = (struct google_protobuf_BoolValue*)envoy_api_v2_core_HeaderValueOption_append(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_BoolValue*)upb_msg_new(&google_protobuf_BoolValue_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_HeaderValueOption_set_append(msg, sub);
  }
  return sub;
}


/* envoy.api.v2.core.DataSource */

UPB_INLINE envoy_api_v2_core_DataSource *envoy_api_v2_core_DataSource_new(upb_arena *arena) {
  return (envoy_api_v2_core_DataSource *)upb_msg_new(&envoy_api_v2_core_DataSource_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_DataSource *envoy_api_v2_core_DataSource_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_DataSource *ret = envoy_api_v2_core_DataSource_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_DataSource_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_DataSource_serialize(const envoy_api_v2_core_DataSource *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_DataSource_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_core_DataSource_specifier_filename = 1,
  envoy_api_v2_core_DataSource_specifier_inline_bytes = 2,
  envoy_api_v2_core_DataSource_specifier_inline_string = 3,
  envoy_api_v2_core_DataSource_specifier_NOT_SET = 0,
} envoy_api_v2_core_DataSource_specifier_oneofcases;
UPB_INLINE envoy_api_v2_core_DataSource_specifier_oneofcases envoy_api_v2_core_DataSource_specifier_case(const envoy_api_v2_core_DataSource* msg) { return UPB_FIELD_AT(msg, int, UPB_SIZE(8, 16)); }

UPB_INLINE bool envoy_api_v2_core_DataSource_has_filename(const envoy_api_v2_core_DataSource *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(8, 16), 1); }
UPB_INLINE upb_strview envoy_api_v2_core_DataSource_filename(const envoy_api_v2_core_DataSource *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 1, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_api_v2_core_DataSource_has_inline_bytes(const envoy_api_v2_core_DataSource *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(8, 16), 2); }
UPB_INLINE upb_strview envoy_api_v2_core_DataSource_inline_bytes(const envoy_api_v2_core_DataSource *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 2, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_api_v2_core_DataSource_has_inline_string(const envoy_api_v2_core_DataSource *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(8, 16), 3); }
UPB_INLINE upb_strview envoy_api_v2_core_DataSource_inline_string(const envoy_api_v2_core_DataSource *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), UPB_SIZE(8, 16), 3, upb_strview_make("", strlen(""))); }

UPB_INLINE void envoy_api_v2_core_DataSource_set_filename(envoy_api_v2_core_DataSource *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 1);
}
UPB_INLINE void envoy_api_v2_core_DataSource_set_inline_bytes(envoy_api_v2_core_DataSource *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 2);
}
UPB_INLINE void envoy_api_v2_core_DataSource_set_inline_string(envoy_api_v2_core_DataSource *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(0, 0), value, UPB_SIZE(8, 16), 3);
}


/* envoy.api.v2.core.TransportSocket */

UPB_INLINE envoy_api_v2_core_TransportSocket *envoy_api_v2_core_TransportSocket_new(upb_arena *arena) {
  return (envoy_api_v2_core_TransportSocket *)upb_msg_new(&envoy_api_v2_core_TransportSocket_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_TransportSocket *envoy_api_v2_core_TransportSocket_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_TransportSocket *ret = envoy_api_v2_core_TransportSocket_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_TransportSocket_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_TransportSocket_serialize(const envoy_api_v2_core_TransportSocket *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_TransportSocket_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_core_TransportSocket_config_type_config = 2,
  envoy_api_v2_core_TransportSocket_config_type_typed_config = 3,
  envoy_api_v2_core_TransportSocket_config_type_NOT_SET = 0,
} envoy_api_v2_core_TransportSocket_config_type_oneofcases;
UPB_INLINE envoy_api_v2_core_TransportSocket_config_type_oneofcases envoy_api_v2_core_TransportSocket_config_type_case(const envoy_api_v2_core_TransportSocket* msg) { return UPB_FIELD_AT(msg, int, UPB_SIZE(12, 24)); }

UPB_INLINE upb_strview envoy_api_v2_core_TransportSocket_name(const envoy_api_v2_core_TransportSocket *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }
UPB_INLINE bool envoy_api_v2_core_TransportSocket_has_config(const envoy_api_v2_core_TransportSocket *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(12, 24), 2); }
UPB_INLINE const struct google_protobuf_Struct* envoy_api_v2_core_TransportSocket_config(const envoy_api_v2_core_TransportSocket *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Struct*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 2, NULL); }
UPB_INLINE bool envoy_api_v2_core_TransportSocket_has_typed_config(const envoy_api_v2_core_TransportSocket *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(12, 24), 3); }
UPB_INLINE const struct google_protobuf_Any* envoy_api_v2_core_TransportSocket_typed_config(const envoy_api_v2_core_TransportSocket *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Any*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }

UPB_INLINE void envoy_api_v2_core_TransportSocket_set_name(envoy_api_v2_core_TransportSocket *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_TransportSocket_set_config(envoy_api_v2_core_TransportSocket *msg, struct google_protobuf_Struct* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Struct*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 2);
}
UPB_INLINE struct google_protobuf_Struct* envoy_api_v2_core_TransportSocket_mutable_config(envoy_api_v2_core_TransportSocket *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)envoy_api_v2_core_TransportSocket_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_TransportSocket_set_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_TransportSocket_set_typed_config(envoy_api_v2_core_TransportSocket *msg, struct google_protobuf_Any* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Any*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct google_protobuf_Any* envoy_api_v2_core_TransportSocket_mutable_typed_config(envoy_api_v2_core_TransportSocket *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_api_v2_core_TransportSocket_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_TransportSocket_set_typed_config(msg, sub);
  }
  return sub;
}


/* envoy.api.v2.core.SocketOption */

UPB_INLINE envoy_api_v2_core_SocketOption *envoy_api_v2_core_SocketOption_new(upb_arena *arena) {
  return (envoy_api_v2_core_SocketOption *)upb_msg_new(&envoy_api_v2_core_SocketOption_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_SocketOption *envoy_api_v2_core_SocketOption_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_SocketOption *ret = envoy_api_v2_core_SocketOption_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_SocketOption_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_SocketOption_serialize(const envoy_api_v2_core_SocketOption *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_SocketOption_msginit, arena, len);
}

typedef enum {
  envoy_api_v2_core_SocketOption_value_int_value = 4,
  envoy_api_v2_core_SocketOption_value_buf_value = 5,
  envoy_api_v2_core_SocketOption_value_NOT_SET = 0,
} envoy_api_v2_core_SocketOption_value_oneofcases;
UPB_INLINE envoy_api_v2_core_SocketOption_value_oneofcases envoy_api_v2_core_SocketOption_value_case(const envoy_api_v2_core_SocketOption* msg) { return UPB_FIELD_AT(msg, int, UPB_SIZE(40, 56)); }

UPB_INLINE upb_strview envoy_api_v2_core_SocketOption_description(const envoy_api_v2_core_SocketOption *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(24, 24)); }
UPB_INLINE int64_t envoy_api_v2_core_SocketOption_level(const envoy_api_v2_core_SocketOption *msg) { return UPB_FIELD_AT(msg, int64_t, UPB_SIZE(0, 0)); }
UPB_INLINE int64_t envoy_api_v2_core_SocketOption_name(const envoy_api_v2_core_SocketOption *msg) { return UPB_FIELD_AT(msg, int64_t, UPB_SIZE(8, 8)); }
UPB_INLINE bool envoy_api_v2_core_SocketOption_has_int_value(const envoy_api_v2_core_SocketOption *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(40, 56), 4); }
UPB_INLINE int64_t envoy_api_v2_core_SocketOption_int_value(const envoy_api_v2_core_SocketOption *msg) { return UPB_READ_ONEOF(msg, int64_t, UPB_SIZE(32, 40), UPB_SIZE(40, 56), 4, 0); }
UPB_INLINE bool envoy_api_v2_core_SocketOption_has_buf_value(const envoy_api_v2_core_SocketOption *msg) { return _upb_has_oneof_field(msg, UPB_SIZE(40, 56), 5); }
UPB_INLINE upb_strview envoy_api_v2_core_SocketOption_buf_value(const envoy_api_v2_core_SocketOption *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(32, 40), UPB_SIZE(40, 56), 5, upb_strview_make("", strlen(""))); }
UPB_INLINE int32_t envoy_api_v2_core_SocketOption_state(const envoy_api_v2_core_SocketOption *msg) { return UPB_FIELD_AT(msg, int32_t, UPB_SIZE(16, 16)); }

UPB_INLINE void envoy_api_v2_core_SocketOption_set_description(envoy_api_v2_core_SocketOption *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(24, 24)) = value;
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_level(envoy_api_v2_core_SocketOption *msg, int64_t value) {
  UPB_FIELD_AT(msg, int64_t, UPB_SIZE(0, 0)) = value;
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_name(envoy_api_v2_core_SocketOption *msg, int64_t value) {
  UPB_FIELD_AT(msg, int64_t, UPB_SIZE(8, 8)) = value;
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_int_value(envoy_api_v2_core_SocketOption *msg, int64_t value) {
  UPB_WRITE_ONEOF(msg, int64_t, UPB_SIZE(32, 40), value, UPB_SIZE(40, 56), 4);
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_buf_value(envoy_api_v2_core_SocketOption *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(32, 40), value, UPB_SIZE(40, 56), 5);
}
UPB_INLINE void envoy_api_v2_core_SocketOption_set_state(envoy_api_v2_core_SocketOption *msg, int32_t value) {
  UPB_FIELD_AT(msg, int32_t, UPB_SIZE(16, 16)) = value;
}


/* envoy.api.v2.core.RuntimeFractionalPercent */

UPB_INLINE envoy_api_v2_core_RuntimeFractionalPercent *envoy_api_v2_core_RuntimeFractionalPercent_new(upb_arena *arena) {
  return (envoy_api_v2_core_RuntimeFractionalPercent *)upb_msg_new(&envoy_api_v2_core_RuntimeFractionalPercent_msginit, arena);
}
UPB_INLINE envoy_api_v2_core_RuntimeFractionalPercent *envoy_api_v2_core_RuntimeFractionalPercent_parsenew(upb_strview buf, upb_arena *arena) {
  envoy_api_v2_core_RuntimeFractionalPercent *ret = envoy_api_v2_core_RuntimeFractionalPercent_new(arena);
  return (ret && upb_decode(buf, ret, &envoy_api_v2_core_RuntimeFractionalPercent_msginit)) ? ret : NULL;
}
UPB_INLINE char *envoy_api_v2_core_RuntimeFractionalPercent_serialize(const envoy_api_v2_core_RuntimeFractionalPercent *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_api_v2_core_RuntimeFractionalPercent_msginit, arena, len);
}

UPB_INLINE const struct envoy_type_FractionalPercent* envoy_api_v2_core_RuntimeFractionalPercent_default_value(const envoy_api_v2_core_RuntimeFractionalPercent *msg) { return UPB_FIELD_AT(msg, const struct envoy_type_FractionalPercent*, UPB_SIZE(8, 16)); }
UPB_INLINE upb_strview envoy_api_v2_core_RuntimeFractionalPercent_runtime_key(const envoy_api_v2_core_RuntimeFractionalPercent *msg) { return UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)); }

UPB_INLINE void envoy_api_v2_core_RuntimeFractionalPercent_set_default_value(envoy_api_v2_core_RuntimeFractionalPercent *msg, struct envoy_type_FractionalPercent* value) {
  UPB_FIELD_AT(msg, struct envoy_type_FractionalPercent*, UPB_SIZE(8, 16)) = value;
}
UPB_INLINE struct envoy_type_FractionalPercent* envoy_api_v2_core_RuntimeFractionalPercent_mutable_default_value(envoy_api_v2_core_RuntimeFractionalPercent *msg, upb_arena *arena) {
  struct envoy_type_FractionalPercent* sub = (struct envoy_type_FractionalPercent*)envoy_api_v2_core_RuntimeFractionalPercent_default_value(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_FractionalPercent*)upb_msg_new(&envoy_type_FractionalPercent_msginit, arena);
    if (!sub) return NULL;
    envoy_api_v2_core_RuntimeFractionalPercent_set_default_value(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_api_v2_core_RuntimeFractionalPercent_set_runtime_key(envoy_api_v2_core_RuntimeFractionalPercent *msg, upb_strview value) {
  UPB_FIELD_AT(msg, upb_strview, UPB_SIZE(0, 0)) = value;
}


#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_API_V2_CORE_BASE_PROTO_UPB_H_ */
