// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'part_to_drop'
#include "ariac_msgs/msg/detail/part__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__DroppedPartChallenge __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__DroppedPartChallenge __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroppedPartChallenge_
{
  using Type = DroppedPartChallenge_<ContainerAllocator>;

  explicit DroppedPartChallenge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part_to_drop(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot = "";
      this->drop_after_num = 0;
      this->drop_after_time = 0.0f;
    }
  }

  explicit DroppedPartChallenge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot(_alloc),
    part_to_drop(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot = "";
      this->drop_after_num = 0;
      this->drop_after_time = 0.0f;
    }
  }

  // field types and members
  using _robot_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_type robot;
  using _part_to_drop_type =
    ariac_msgs::msg::Part_<ContainerAllocator>;
  _part_to_drop_type part_to_drop;
  using _drop_after_num_type =
    uint8_t;
  _drop_after_num_type drop_after_num;
  using _drop_after_time_type =
    float;
  _drop_after_time_type drop_after_time;

  // setters for named parameter idiom
  Type & set__robot(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot = _arg;
    return *this;
  }
  Type & set__part_to_drop(
    const ariac_msgs::msg::Part_<ContainerAllocator> & _arg)
  {
    this->part_to_drop = _arg;
    return *this;
  }
  Type & set__drop_after_num(
    const uint8_t & _arg)
  {
    this->drop_after_num = _arg;
    return *this;
  }
  Type & set__drop_after_time(
    const float & _arg)
  {
    this->drop_after_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__DroppedPartChallenge
    std::shared_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__DroppedPartChallenge
    std::shared_ptr<ariac_msgs::msg::DroppedPartChallenge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroppedPartChallenge_ & other) const
  {
    if (this->robot != other.robot) {
      return false;
    }
    if (this->part_to_drop != other.part_to_drop) {
      return false;
    }
    if (this->drop_after_num != other.drop_after_num) {
      return false;
    }
    if (this->drop_after_time != other.drop_after_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroppedPartChallenge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroppedPartChallenge_

// alias to use template instance with default allocator
using DroppedPartChallenge =
  ariac_msgs::msg::DroppedPartChallenge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__STRUCT_HPP_
