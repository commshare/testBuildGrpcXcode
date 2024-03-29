/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.7-dev */

#ifndef PB_GRPC_HEALTH_V1_HEALTH_PB_H_INCLUDED
#define PB_GRPC_HEALTH_V1_HEALTH_PB_H_INCLUDED
#include "pb.h"
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _grpc_health_v1_HealthCheckResponse_ServingStatus {
    grpc_health_v1_HealthCheckResponse_ServingStatus_UNKNOWN = 0,
    grpc_health_v1_HealthCheckResponse_ServingStatus_SERVING = 1,
    grpc_health_v1_HealthCheckResponse_ServingStatus_NOT_SERVING = 2,
    grpc_health_v1_HealthCheckResponse_ServingStatus_SERVICE_UNKNOWN = 3
} grpc_health_v1_HealthCheckResponse_ServingStatus;
#define _grpc_health_v1_HealthCheckResponse_ServingStatus_MIN grpc_health_v1_HealthCheckResponse_ServingStatus_UNKNOWN
#define _grpc_health_v1_HealthCheckResponse_ServingStatus_MAX grpc_health_v1_HealthCheckResponse_ServingStatus_SERVICE_UNKNOWN
#define _grpc_health_v1_HealthCheckResponse_ServingStatus_ARRAYSIZE ((grpc_health_v1_HealthCheckResponse_ServingStatus)(grpc_health_v1_HealthCheckResponse_ServingStatus_SERVICE_UNKNOWN+1))

/* Struct definitions */
typedef struct _grpc_health_v1_HealthCheckRequest {
    bool has_service;
    char service[200];
/* @@protoc_insertion_point(struct:grpc_health_v1_HealthCheckRequest) */
} grpc_health_v1_HealthCheckRequest;

typedef struct _grpc_health_v1_HealthCheckResponse {
    bool has_status;
    grpc_health_v1_HealthCheckResponse_ServingStatus status;
/* @@protoc_insertion_point(struct:grpc_health_v1_HealthCheckResponse) */
} grpc_health_v1_HealthCheckResponse;

/* Default values for struct fields */

/* Initializer values for message structs */
#define grpc_health_v1_HealthCheckRequest_init_default {false, ""}
#define grpc_health_v1_HealthCheckResponse_init_default {false, (grpc_health_v1_HealthCheckResponse_ServingStatus)0}
#define grpc_health_v1_HealthCheckRequest_init_zero {false, ""}
#define grpc_health_v1_HealthCheckResponse_init_zero {false, (grpc_health_v1_HealthCheckResponse_ServingStatus)0}

/* Field tags (for use in manual encoding/decoding) */
#define grpc_health_v1_HealthCheckRequest_service_tag 1
#define grpc_health_v1_HealthCheckResponse_status_tag 1

/* Struct field encoding specification for nanopb */
extern const pb_field_t grpc_health_v1_HealthCheckRequest_fields[2];
extern const pb_field_t grpc_health_v1_HealthCheckResponse_fields[2];

/* Maximum encoded size of messages (where known) */
#define grpc_health_v1_HealthCheckRequest_size   203
#define grpc_health_v1_HealthCheckResponse_size  2

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define HEALTH_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
