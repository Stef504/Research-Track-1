// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_custom_msgs:msg/ExamCustom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/msg/exam_custom.hpp"


#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__BUILDER_HPP_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_custom_msgs/msg/detail/exam_custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_custom_msgs
{

namespace msg
{

namespace builder
{

class Init_ExamCustom_name
{
public:
  explicit Init_ExamCustom_name(::robot_custom_msgs::msg::ExamCustom & msg)
  : msg_(msg)
  {}
  ::robot_custom_msgs::msg::ExamCustom name(::robot_custom_msgs::msg::ExamCustom::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::msg::ExamCustom msg_;
};

class Init_ExamCustom_angular_velocity
{
public:
  explicit Init_ExamCustom_angular_velocity(::robot_custom_msgs::msg::ExamCustom & msg)
  : msg_(msg)
  {}
  Init_ExamCustom_name angular_velocity(::robot_custom_msgs::msg::ExamCustom::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_ExamCustom_name(msg_);
  }

private:
  ::robot_custom_msgs::msg::ExamCustom msg_;
};

class Init_ExamCustom_linear_velocity
{
public:
  Init_ExamCustom_linear_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExamCustom_angular_velocity linear_velocity(::robot_custom_msgs::msg::ExamCustom::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_ExamCustom_angular_velocity(msg_);
  }

private:
  ::robot_custom_msgs::msg::ExamCustom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::msg::ExamCustom>()
{
  return robot_custom_msgs::msg::builder::Init_ExamCustom_linear_velocity();
}

}  // namespace robot_custom_msgs

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__BUILDER_HPP_
