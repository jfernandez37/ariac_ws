// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/ConveyorBeltState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__ConveyorBeltState __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__ConveyorBeltState __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConveyorBeltState_
{
  using Type = ConveyorBeltState_<ContainerAllocator>;

  explicit ConveyorBeltState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power = 0.0;
      this->enabled = false;
    }
  }

  explicit ConveyorBeltState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->power = 0.0;
      this->enabled = false;
    }
  }

  // field types and members
  using _power_type =
    double;
  _power_type power;
  using _enabled_type =
    bool;
  _enabled_type enabled;

  // setters for named parameter idiom
  Type & set__power(
    const double & _arg)
  {
    this->power = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__ConveyorBeltState
    std::shared_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__ConveyorBeltState
    std::shared_ptr<ariac_msgs::msg::ConveyorBeltState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConveyorBeltState_ & other) const
  {
    if (this->power != other.power) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConveyorBeltState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConveyorBeltState_

// alias to use template instance with default allocator
using ConveyorBeltState =
  ariac_msgs::msg::ConveyorBeltState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__STRUCT_HPP_
