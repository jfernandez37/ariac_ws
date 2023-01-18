// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/CombinedTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/assembly_part__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__CombinedTask __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__CombinedTask __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CombinedTask_
{
  using Type = CombinedTask_<ContainerAllocator>;

  explicit CombinedTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->station = 0;
    }
  }

  explicit CombinedTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->station = 0;
    }
  }

  // field types and members
  using _station_type =
    uint8_t;
  _station_type station;
  using _parts_type =
    std::vector<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__station(
    const uint8_t & _arg)
  {
    this->station = _arg;
    return *this;
  }
  Type & set__parts(
    const std::vector<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>> & _arg)
  {
    this->parts = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t AS1 =
    1u;
  static constexpr uint8_t AS2 =
    2u;
  static constexpr uint8_t AS3 =
    3u;
  static constexpr uint8_t AS4 =
    4u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::CombinedTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::CombinedTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::CombinedTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::CombinedTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__CombinedTask
    std::shared_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__CombinedTask
    std::shared_ptr<ariac_msgs::msg::CombinedTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CombinedTask_ & other) const
  {
    if (this->station != other.station) {
      return false;
    }
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const CombinedTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CombinedTask_

// alias to use template instance with default allocator
using CombinedTask =
  ariac_msgs::msg::CombinedTask_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t CombinedTask_<ContainerAllocator>::AS1;
template<typename ContainerAllocator>
constexpr uint8_t CombinedTask_<ContainerAllocator>::AS2;
template<typename ContainerAllocator>
constexpr uint8_t CombinedTask_<ContainerAllocator>::AS3;
template<typename ContainerAllocator>
constexpr uint8_t CombinedTask_<ContainerAllocator>::AS4;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__STRUCT_HPP_
