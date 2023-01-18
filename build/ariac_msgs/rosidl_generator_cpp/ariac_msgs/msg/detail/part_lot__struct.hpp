// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/PartLot.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_LOT__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART_LOT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__PartLot __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__PartLot __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PartLot_
{
  using Type = PartLot_<ContainerAllocator>;

  explicit PartLot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quantity = 0;
    }
  }

  explicit PartLot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quantity = 0;
    }
  }

  // field types and members
  using _part_type =
    ariac_msgs::msg::Part_<ContainerAllocator>;
  _part_type part;
  using _quantity_type =
    uint8_t;
  _quantity_type quantity;

  // setters for named parameter idiom
  Type & set__part(
    const ariac_msgs::msg::Part_<ContainerAllocator> & _arg)
  {
    this->part = _arg;
    return *this;
  }
  Type & set__quantity(
    const uint8_t & _arg)
  {
    this->quantity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::PartLot_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::PartLot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::PartLot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::PartLot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__PartLot
    std::shared_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__PartLot
    std::shared_ptr<ariac_msgs::msg::PartLot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PartLot_ & other) const
  {
    if (this->part != other.part) {
      return false;
    }
    if (this->quantity != other.quantity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PartLot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PartLot_

// alias to use template instance with default allocator
using PartLot =
  ariac_msgs::msg::PartLot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_LOT__STRUCT_HPP_
