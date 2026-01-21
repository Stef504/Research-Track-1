// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msgs:msg/Vel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/msg/vel.hpp"


#ifndef TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msgs/msg/detail/vel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Vel_threshold
{
public:
  explicit Init_Vel_threshold(::turtlesim_custom_msgs::msg::Vel & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::msg::Vel threshold(::turtlesim_custom_msgs::msg::Vel::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::msg::Vel msg_;
};

class Init_Vel_direction
{
public:
  explicit Init_Vel_direction(::turtlesim_custom_msgs::msg::Vel & msg)
  : msg_(msg)
  {}
  Init_Vel_threshold direction(::turtlesim_custom_msgs::msg::Vel::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Vel_threshold(msg_);
  }

private:
  ::turtlesim_custom_msgs::msg::Vel msg_;
};

class Init_Vel_distance
{
public:
  Init_Vel_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vel_direction distance(::turtlesim_custom_msgs::msg::Vel::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Vel_direction(msg_);
  }

private:
  ::turtlesim_custom_msgs::msg::Vel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::msg::Vel>()
{
  return turtlesim_custom_msgs::msg::builder::Init_Vel_distance();
}

}  // namespace turtlesim_custom_msgs

#endif  // TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__BUILDER_HPP_
