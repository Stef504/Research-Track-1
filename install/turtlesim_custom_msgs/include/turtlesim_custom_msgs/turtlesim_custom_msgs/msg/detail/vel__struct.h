// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_custom_msgs:msg/Vel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/msg/vel.h"


#ifndef TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__STRUCT_H_
#define TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Vel in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__msg__Vel
{
  float distance;
  rosidl_runtime_c__String direction;
  float threshold;
} turtlesim_custom_msgs__msg__Vel;

// Struct for a sequence of turtlesim_custom_msgs__msg__Vel.
typedef struct turtlesim_custom_msgs__msg__Vel__Sequence
{
  turtlesim_custom_msgs__msg__Vel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__msg__Vel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__STRUCT_H_
