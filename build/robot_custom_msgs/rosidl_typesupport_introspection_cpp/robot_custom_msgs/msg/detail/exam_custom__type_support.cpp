// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_custom_msgs:msg/ExamCustom.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_custom_msgs/msg/detail/exam_custom__functions.h"
#include "robot_custom_msgs/msg/detail/exam_custom__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_custom_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExamCustom_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_custom_msgs::msg::ExamCustom(_init);
}

void ExamCustom_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_custom_msgs::msg::ExamCustom *>(message_memory);
  typed_message->~ExamCustom();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExamCustom_message_member_array[3] = {
  {
    "linear_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_custom_msgs::msg::ExamCustom, linear_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_custom_msgs::msg::ExamCustom, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_custom_msgs::msg::ExamCustom, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExamCustom_message_members = {
  "robot_custom_msgs::msg",  // message namespace
  "ExamCustom",  // message name
  3,  // number of fields
  sizeof(robot_custom_msgs::msg::ExamCustom),
  false,  // has_any_key_member_
  ExamCustom_message_member_array,  // message members
  ExamCustom_init_function,  // function to initialize message memory (memory has to be allocated)
  ExamCustom_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExamCustom_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExamCustom_message_members,
  get_message_typesupport_handle_function,
  &robot_custom_msgs__msg__ExamCustom__get_type_hash,
  &robot_custom_msgs__msg__ExamCustom__get_type_description,
  &robot_custom_msgs__msg__ExamCustom__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_custom_msgs::msg::ExamCustom>()
{
  return &::robot_custom_msgs::msg::rosidl_typesupport_introspection_cpp::ExamCustom_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_custom_msgs, msg, ExamCustom)() {
  return &::robot_custom_msgs::msg::rosidl_typesupport_introspection_cpp::ExamCustom_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
