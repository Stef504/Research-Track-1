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

class Init_Vel_vel
{
public:
  explicit Init_Vel_vel(::turtlesim_custom_msgs::msg::Vel & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::msg::Vel vel(::turtlesim_custom_msgs::msg::Vel::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::msg::Vel msg_;
};

class Init_Vel_name
{
public:
  Init_Vel_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vel_vel name(::turtlesim_custom_msgs::msg::Vel::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Vel_vel(msg_);
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
  return turtlesim_custom_msgs::msg::builder::Init_Vel_name();
}

}  // namespace turtlesim_custom_msgs

#endif  // TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__BUILDER_HPP_
