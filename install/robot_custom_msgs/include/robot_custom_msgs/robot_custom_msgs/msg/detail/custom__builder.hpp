// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_custom_msgs:msg/Custom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/msg/custom.hpp"


#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__BUILDER_HPP_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_custom_msgs/msg/detail/custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Custom_threshold
{
public:
  explicit Init_Custom_threshold(::robot_custom_msgs::msg::Custom & msg)
  : msg_(msg)
  {}
  ::robot_custom_msgs::msg::Custom threshold(::robot_custom_msgs::msg::Custom::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::msg::Custom msg_;
};

class Init_Custom_direction
{
public:
  explicit Init_Custom_direction(::robot_custom_msgs::msg::Custom & msg)
  : msg_(msg)
  {}
  Init_Custom_threshold direction(::robot_custom_msgs::msg::Custom::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Custom_threshold(msg_);
  }

private:
  ::robot_custom_msgs::msg::Custom msg_;
};

class Init_Custom_distance
{
public:
  Init_Custom_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Custom_direction distance(::robot_custom_msgs::msg::Custom::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Custom_direction(msg_);
  }

private:
  ::robot_custom_msgs::msg::Custom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::msg::Custom>()
{
  return robot_custom_msgs::msg::builder::Init_Custom_distance();
}

}  // namespace robot_custom_msgs

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__BUILDER_HPP_
