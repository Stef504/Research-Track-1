// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_custom_msgs:srv/Velocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/srv/velocity.hpp"


#ifndef ROBOT_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__TRAITS_HPP_
#define ROBOT_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_custom_msgs/srv/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Velocity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Velocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Velocity_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_custom_msgs::srv::Velocity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_custom_msgs::srv::Velocity_Request & msg)
{
  return robot_custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_custom_msgs::srv::Velocity_Request>()
{
  return "robot_custom_msgs::srv::Velocity_Request";
}

template<>
inline const char * name<robot_custom_msgs::srv::Velocity_Request>()
{
  return "robot_custom_msgs/srv/Velocity_Request";
}

template<>
struct has_fixed_size<robot_custom_msgs::srv::Velocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_custom_msgs::srv::Velocity_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_custom_msgs::srv::Velocity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Velocity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Velocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Velocity_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_custom_msgs::srv::Velocity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_custom_msgs::srv::Velocity_Response & msg)
{
  return robot_custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_custom_msgs::srv::Velocity_Response>()
{
  return "robot_custom_msgs::srv::Velocity_Response";
}

template<>
inline const char * name<robot_custom_msgs::srv::Velocity_Response>()
{
  return "robot_custom_msgs/srv/Velocity_Response";
}

template<>
struct has_fixed_size<robot_custom_msgs::srv::Velocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_custom_msgs::srv::Velocity_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_custom_msgs::srv::Velocity_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robot_custom_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Velocity_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Velocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Velocity_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_custom_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_custom_msgs::srv::Velocity_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_custom_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_custom_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_custom_msgs::srv::Velocity_Event & msg)
{
  return robot_custom_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_custom_msgs::srv::Velocity_Event>()
{
  return "robot_custom_msgs::srv::Velocity_Event";
}

template<>
inline const char * name<robot_custom_msgs::srv::Velocity_Event>()
{
  return "robot_custom_msgs/srv/Velocity_Event";
}

template<>
struct has_fixed_size<robot_custom_msgs::srv::Velocity_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_custom_msgs::srv::Velocity_Event>
  : std::integral_constant<bool, has_bounded_size<robot_custom_msgs::srv::Velocity_Request>::value && has_bounded_size<robot_custom_msgs::srv::Velocity_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robot_custom_msgs::srv::Velocity_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_custom_msgs::srv::Velocity>()
{
  return "robot_custom_msgs::srv::Velocity";
}

template<>
inline const char * name<robot_custom_msgs::srv::Velocity>()
{
  return "robot_custom_msgs/srv/Velocity";
}

template<>
struct has_fixed_size<robot_custom_msgs::srv::Velocity>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_custom_msgs::srv::Velocity_Request>::value &&
    has_fixed_size<robot_custom_msgs::srv::Velocity_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_custom_msgs::srv::Velocity>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_custom_msgs::srv::Velocity_Request>::value &&
    has_bounded_size<robot_custom_msgs::srv::Velocity_Response>::value
  >
{
};

template<>
struct is_service<robot_custom_msgs::srv::Velocity>
  : std::true_type
{
};

template<>
struct is_service_request<robot_custom_msgs::srv::Velocity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_custom_msgs::srv::Velocity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__TRAITS_HPP_
