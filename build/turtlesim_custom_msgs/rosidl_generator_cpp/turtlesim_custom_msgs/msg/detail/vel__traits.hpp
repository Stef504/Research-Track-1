// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_custom_msgs:msg/Vel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/msg/vel.hpp"


#ifndef TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__TRAITS_HPP_
#define TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_custom_msgs/msg/detail/vel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Vel & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Vel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Vel & msg, bool use_flow_style = false)
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

}  // namespace turtlesim_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_custom_msgs::msg::Vel & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_custom_msgs::msg::Vel & msg)
{
  return turtlesim_custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_custom_msgs::msg::Vel>()
{
  return "turtlesim_custom_msgs::msg::Vel";
}

template<>
inline const char * name<turtlesim_custom_msgs::msg::Vel>()
{
  return "turtlesim_custom_msgs/msg/Vel";
}

template<>
struct has_fixed_size<turtlesim_custom_msgs::msg::Vel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_custom_msgs::msg::Vel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_custom_msgs::msg::Vel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__TRAITS_HPP_
