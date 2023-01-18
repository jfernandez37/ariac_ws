// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/KittingPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KITTING_PART__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__KITTING_PART__STRUCT_HPP_

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
# define DEPRECATED__ariac_msgs__msg__KittingPart __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__KittingPart __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KittingPart_
{
  using Type = KittingPart_<ContainerAllocator>;

  explicit KittingPart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quadrant = 0;
    }
  }

  explicit KittingPart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->quadrant = 0;
    }
  }

  // field types and members
  using _part_type =
    ariac_msgs::msg::Part_<ContainerAllocator>;
  _part_type part;
  using _quadrant_type =
    uint8_t;
  _quadrant_type quadrant;

  // setters for named parameter idiom
  Type & set__part(
    const ariac_msgs::msg::Part_<ContainerAllocator> & _arg)
  {
    this->part = _arg;
    return *this;
  }
  Type & set__quadrant(
    const uint8_t & _arg)
  {
    this->quadrant = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t QUADRANT1 =
    1u;
  static constexpr uint8_t QUADRANT2 =
    2u;
  static constexpr uint8_t QUADRANT3 =
    3u;
  static constexpr uint8_t QUADRANT4 =
    4u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::KittingPart_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::KittingPart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::KittingPart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::KittingPart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__KittingPart
    std::shared_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__KittingPart
    std::shared_ptr<ariac_msgs::msg::KittingPart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KittingPart_ & other) const
  {
    if (this->part != other.part) {
      return false;
    }
    if (this->quadrant != other.quadrant) {
      return false;
    }
    return true;
  }
  bool operator!=(const KittingPart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KittingPart_

// alias to use template instance with default allocator
using KittingPart =
  ariac_msgs::msg::KittingPart_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t KittingPart_<ContainerAllocator>::QUADRANT1;
template<typename ContainerAllocator>
constexpr uint8_t KittingPart_<ContainerAllocator>::QUADRANT2;
template<typename ContainerAllocator>
constexpr uint8_t KittingPart_<ContainerAllocator>::QUADRANT3;
template<typename ContainerAllocator>
constexpr uint8_t KittingPart_<ContainerAllocator>::QUADRANT4;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__KITTING_PART__STRUCT_HPP_
