// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msgs:srv/Velocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/srv/velocity.hpp"


#ifndef TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msgs/srv/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Velocity_Request_max
{
public:
  explicit Init_Velocity_Request_max(::turtlesim_custom_msgs::srv::Velocity_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::srv::Velocity_Request max(::turtlesim_custom_msgs::srv::Velocity_Request::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Request msg_;
};

class Init_Velocity_Request_min
{
public:
  Init_Velocity_Request_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Request_max min(::turtlesim_custom_msgs::srv::Velocity_Request::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_Velocity_Request_max(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Velocity_Request>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Velocity_Request_min();
}

}  // namespace turtlesim_custom_msgs


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Velocity_Response_z
{
public:
  explicit Init_Velocity_Response_z(::turtlesim_custom_msgs::srv::Velocity_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::srv::Velocity_Response z(::turtlesim_custom_msgs::srv::Velocity_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Response msg_;
};

class Init_Velocity_Response_x
{
public:
  Init_Velocity_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Response_z x(::turtlesim_custom_msgs::srv::Velocity_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Velocity_Response_z(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Velocity_Response>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Velocity_Response_x();
}

}  // namespace turtlesim_custom_msgs


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Velocity_Event_response
{
public:
  explicit Init_Velocity_Event_response(::turtlesim_custom_msgs::srv::Velocity_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::srv::Velocity_Event response(::turtlesim_custom_msgs::srv::Velocity_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Event msg_;
};

class Init_Velocity_Event_request
{
public:
  explicit Init_Velocity_Event_request(::turtlesim_custom_msgs::srv::Velocity_Event & msg)
  : msg_(msg)
  {}
  Init_Velocity_Event_response request(::turtlesim_custom_msgs::srv::Velocity_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Velocity_Event_response(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Event msg_;
};

class Init_Velocity_Event_info
{
public:
  Init_Velocity_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_Event_request info(::turtlesim_custom_msgs::srv::Velocity_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Velocity_Event_request(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Velocity_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Velocity_Event>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Velocity_Event_info();
}

}  // namespace turtlesim_custom_msgs

#endif  // TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__VELOCITY__BUILDER_HPP_
