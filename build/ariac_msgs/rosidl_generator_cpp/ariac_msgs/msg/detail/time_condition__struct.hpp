// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__TimeCondition __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__TimeCondition __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeCondition_
{
  using Type = TimeCondition_<ContainerAllocator>;

  explicit TimeCondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seconds = 0.0;
    }
  }

  explicit TimeCondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seconds = 0.0;
    }
  }

  // field types and members
  using _seconds_type =
    double;
  _seconds_type seconds;

  // setters for named parameter idiom
  Type & set__seconds(
    const double & _arg)
  {
    this->seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::TimeCondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::TimeCondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::TimeCondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::TimeCondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__TimeCondition
    std::shared_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__TimeCondition
    std::shared_ptr<ariac_msgs::msg::TimeCondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeCondition_ & other) const
  {
    if (this->seconds != other.seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeCondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeCondition_

// alias to use template instance with default allocator
using TimeCondition =
  ariac_msgs::msg::TimeCondition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__STRUCT_HPP_
