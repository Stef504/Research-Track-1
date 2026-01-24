// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_custom_msgs:msg/Custom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/msg/custom.hpp"


#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__TRAITS_HPP_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_custom_msgs/msg/detail/custom__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Custom & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: threshold
  {
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Custom & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Custom & msg, bool use_flow_style = false)
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
  const robot_custom_msgs::msg::Custom & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_custom_msgs::msg::Custom & msg)
{
  return robot_custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_custom_msgs::msg::Custom>()
{
  return "robot_custom_msgs::msg::Custom";
}

template<>
inline const char * name<robot_custom_msgs::msg::Custom>()
{
  return "robot_custom_msgs/msg/Custom";
}

template<>
struct has_fixed_size<robot_custom_msgs::msg::Custom>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_custom_msgs::msg::Custom>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_custom_msgs::msg::Custom>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__TRAITS_HPP_
