// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__STRUCT_HPP_

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
# define DEPRECATED__ariac_msgs__msg__PartPlaceCondition __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__PartPlaceCondition __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PartPlaceCondition_
{
  using Type = PartPlaceCondition_<ContainerAllocator>;

  explicit PartPlaceCondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agv = "";
    }
  }

  explicit PartPlaceCondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_alloc, _init),
    agv(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agv = "";
    }
  }

  // field types and members
  using _part_type =
    ariac_msgs::msg::Part_<ContainerAllocator>;
  _part_type part;
  using _agv_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _agv_type agv;

  // setters for named parameter idiom
  Type & set__part(
    const ariac_msgs::msg::Part_<ContainerAllocator> & _arg)
  {
    this->part = _arg;
    return *this;
  }
  Type & set__agv(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->agv = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__PartPlaceCondition
    std::shared_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__PartPlaceCondition
    std::shared_ptr<ariac_msgs::msg::PartPlaceCondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PartPlaceCondition_ & other) const
  {
    if (this->part != other.part) {
      return false;
    }
    if (this->agv != other.agv) {
      return false;
    }
    return true;
  }
  bool operator!=(const PartPlaceCondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PartPlaceCondition_

// alias to use template instance with default allocator
using PartPlaceCondition =
  ariac_msgs::msg::PartPlaceCondition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__STRUCT_HPP_
