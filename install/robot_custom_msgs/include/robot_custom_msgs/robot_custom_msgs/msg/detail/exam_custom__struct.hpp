// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_custom_msgs:msg/ExamCustom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/msg/exam_custom.hpp"


#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__STRUCT_HPP_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_custom_msgs__msg__ExamCustom __attribute__((deprecated))
#else
# define DEPRECATED__robot_custom_msgs__msg__ExamCustom __declspec(deprecated)
#endif

namespace robot_custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExamCustom_
{
  using Type = ExamCustom_<ContainerAllocator>;

  explicit ExamCustom_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->name = "";
    }
  }

  explicit ExamCustom_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_velocity = 0.0f;
      this->angular_velocity = 0.0f;
      this->name = "";
    }
  }

  // field types and members
  using _linear_velocity_type =
    float;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    float;
  _angular_velocity_type angular_velocity;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__linear_velocity(
    const float & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const float & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_custom_msgs::msg::ExamCustom_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_custom_msgs::msg::ExamCustom_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_custom_msgs::msg::ExamCustom_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_custom_msgs::msg::ExamCustom_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_custom_msgs__msg__ExamCustom
    std::shared_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_custom_msgs__msg__ExamCustom
    std::shared_ptr<robot_custom_msgs::msg::ExamCustom_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExamCustom_ & other) const
  {
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExamCustom_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExamCustom_

// alias to use template instance with default allocator
using ExamCustom =
  robot_custom_msgs::msg::ExamCustom_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_custom_msgs

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__EXAM_CUSTOM__STRUCT_HPP_
