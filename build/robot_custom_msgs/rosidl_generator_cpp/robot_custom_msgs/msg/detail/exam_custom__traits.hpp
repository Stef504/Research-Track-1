// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_custom_msgs:msg/ExamCustom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/msg/exam_custom.hpp"


#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__TRAITS_HPP_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_custom_msgs/msg/detail/exam_custom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExamCustom & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_velocity
  {
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExamCustom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_velocity, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExamCustom & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_custom_msgs::msg::ExamCustom & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_custom_msgs::msg::ExamCustom & msg)
{
  return robot_custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_custom_msgs::msg::ExamCustom>()
{
  return "robot_custom_msgs::msg::ExamCustom";
}

template<>
inline const char * name<robot_custom_msgs::msg::ExamCustom>()
{
  return "robot_custom_msgs/msg/ExamCustom";
}

template<>
struct has_fixed_size<robot_custom_msgs::msg::ExamCustom>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_custom_msgs::msg::ExamCustom>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_custom_msgs::msg::ExamCustom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__TRAITS_HPP_
