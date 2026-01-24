// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robot_custom_msgs:msg/Custom.idl
// generated code does not contain a copyright notice
#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_custom_msgs/msg/detail/custom__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
bool cdr_serialize_robot_custom_msgs__msg__Custom(
  const robot_custom_msgs__msg__Custom * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
bool cdr_deserialize_robot_custom_msgs__msg__Custom(
  eprosima::fastcdr::Cdr &,
  robot_custom_msgs__msg__Custom * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
size_t get_serialized_size_robot_custom_msgs__msg__Custom(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
size_t max_serialized_size_robot_custom_msgs__msg__Custom(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
bool cdr_serialize_key_robot_custom_msgs__msg__Custom(
  const robot_custom_msgs__msg__Custom * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
size_t get_serialized_size_key_robot_custom_msgs__msg__Custom(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
size_t max_serialized_size_key_robot_custom_msgs__msg__Custom(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_custom_msgs, msg, Custom)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
