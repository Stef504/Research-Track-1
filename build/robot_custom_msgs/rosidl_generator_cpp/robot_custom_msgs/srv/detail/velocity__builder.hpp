// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_custom_msgs:srv/Velocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/srv/velocity.hpp"


#ifndef ROBOT_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__BUILDER_HPP_
#define ROBOT_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_custom_msgs/srv/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Velocity_Request_max
{
public:
  explicit Init_Velocity_Request_max(::robot_custom_msgs::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  ::robot_custom_msgs::srv::Velocity_Request max(::robot_custom_msgs::srv::Velocity_Request::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_min
{
public:
  Init_Velocity_Request_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Request_max min(::robot_custom_msgs::srv::Velocity_Request::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_Velocity_Request_max(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::srv::Velocity_Request>()
{
  return robot_custom_msgs::srv::builder::Init_Velocity_Request_min();
}

}  // namespace robot_custom_msgs


namespace robot_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Velocity_Response_z
{
public:
  explicit Init_Velocity_Response_z(::robot_custom_msgs::srv::Velocity_Response & msg)
  : msg_(msg)
  {}
  ::robot_custom_msgs::srv::Velocity_Response z(::robot_custom_msgs::srv::Velocity_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Response msg_;
};

class Init_Velocity_Response_x
{
public:
  Init_Velocity_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Response_z x(::robot_custom_msgs::srv::Velocity_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Velocity_Response_z(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::srv::Velocity_Response>()
{
  return robot_custom_msgs::srv::builder::Init_Velocity_Response_x();
}

}  // namespace robot_custom_msgs


namespace robot_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Velocity_Event_response
{
public:
  explicit Init_Velocity_Event_response(::robot_custom_msgs::srv::Velocity_Event & msg)
  : msg_(msg)
  {}
  ::robot_custom_msgs::srv::Velocity_Event response(::robot_custom_msgs::srv::Velocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Event msg_;
};

class Init_Velocity_Event_request
{
public:
  explicit Init_Velocity_Event_request(::robot_custom_msgs::srv::Velocity_Event & msg)
  : msg_(msg)
  {}
  Init_Velocity_Event_response request(::robot_custom_msgs::srv::Velocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Velocity_Event_response(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Event msg_;
};

class Init_Velocity_Event_info
{
public:
  Init_Velocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Event_request info(::robot_custom_msgs::srv::Velocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Velocity_Event_request(msg_);
  }

private:
  ::robot_custom_msgs::srv::Velocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::srv::Velocity_Event>()
{
  return robot_custom_msgs::srv::builder::Init_Velocity_Event_info();
}

}  // namespace robot_custom_msgs

#endif  // ROBOT_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__BUILDER_HPP_
