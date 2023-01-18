// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/ConveyorParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part_lot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__ConveyorParts __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__ConveyorParts __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConveyorParts_
{
  using Type = ConveyorParts_<ContainerAllocator>;

  explicit ConveyorParts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ConveyorParts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _parts_type =
    std::vector<ariac_msgs::msg::PartLot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartLot_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__parts(
    const std::vector<ariac_msgs::msg::PartLot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartLot_<ContainerAllocator>>> & _arg)
  {
    this->parts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::ConveyorParts_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::ConveyorParts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::ConveyorParts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::ConveyorParts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__ConveyorParts
    std::shared_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__ConveyorParts
    std::shared_ptr<ariac_msgs::msg::ConveyorParts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConveyorParts_ & other) const
  {
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConveyorParts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConveyorParts_

// alias to use template instance with default allocator
using ConveyorParts =
  ariac_msgs::msg::ConveyorParts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_PARTS__STRUCT_HPP_
