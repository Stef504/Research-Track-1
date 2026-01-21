// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_custom_msgs:srv/Threshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/srv/threshold.h"


#ifndef TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__STRUCT_H_
#define TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Threshold in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__srv__Threshold_Request
{
  float threshold;
} turtlesim_custom_msgs__srv__Threshold_Request;

// Struct for a sequence of turtlesim_custom_msgs__srv__Threshold_Request.
typedef struct turtlesim_custom_msgs__srv__Threshold_Request__Sequence
{
  turtlesim_custom_msgs__srv__Threshold_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__srv__Threshold_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Threshold in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__srv__Threshold_Response
{
  float newthreshold;
} turtlesim_custom_msgs__srv__Threshold_Response;

// Struct for a sequence of turtlesim_custom_msgs__srv__Threshold_Response.
typedef struct turtlesim_custom_msgs__srv__Threshold_Response__Sequence
{
  turtlesim_custom_msgs__srv__Threshold_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__srv__Threshold_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim_custom_msgs__srv__Threshold_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim_custom_msgs__srv__Threshold_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Threshold in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__srv__Threshold_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim_custom_msgs__srv__Threshold_Request__Sequence request;
  turtlesim_custom_msgs__srv__Threshold_Response__Sequence response;
} turtlesim_custom_msgs__srv__Threshold_Event;

// Struct for a sequence of turtlesim_custom_msgs__srv__Threshold_Event.
typedef struct turtlesim_custom_msgs__srv__Threshold_Event__Sequence
{
  turtlesim_custom_msgs__srv__Threshold_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__srv__Threshold_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__STRUCT_H_
