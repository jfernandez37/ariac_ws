// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/BreakBeamStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__BreakBeamStatus __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__BreakBeamStatus __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BreakBeamStatus_
{
  using Type = BreakBeamStatus_<ContainerAllocator>;

  explicit BreakBeamStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_detected = false;
    }
  }

  explicit BreakBeamStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_detected = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _object_detected_type =
    bool;
  _object_detected_type object_detected;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__object_detected(
    const bool & _arg)
  {
    this->object_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__BreakBeamStatus
    std::shared_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__BreakBeamStatus
    std::shared_ptr<ariac_msgs::msg::BreakBeamStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BreakBeamStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->object_detected != other.object_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const BreakBeamStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BreakBeamStatus_

// alias to use template instance with default allocator
using BreakBeamStatus =
  ariac_msgs::msg::BreakBeamStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__STRUCT_HPP_
