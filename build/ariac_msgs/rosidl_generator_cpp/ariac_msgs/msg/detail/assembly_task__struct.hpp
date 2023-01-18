// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__STRUCT_HPP_

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
# define DEPRECATED__ariac_msgs__msg__AssemblyTask __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__AssemblyTask __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AssemblyTask_
{
  using Type = AssemblyTask_<ContainerAllocator>;

  explicit AssemblyTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agv_number = 0;
      this->station = 0;
    }
  }

  explicit AssemblyTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agv_number = 0;
      this->station = 0;
    }
  }

  // field types and members
  using _agv_number_type =
    uint8_t;
  _agv_number_type agv_number;
  using _station_type =
    uint8_t;
  _station_type station;
  using _parts_type =
    std::vector<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::AssemblyPart_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__agv_number(
    const uint8_t & _arg)
  {
    this->agv_number = _arg;
    return *this;
  }
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
    ariac_msgs::msg::AssemblyTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::AssemblyTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AssemblyTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::AssemblyTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__AssemblyTask
    std::shared_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__AssemblyTask
    std::shared_ptr<ariac_msgs::msg::AssemblyTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssemblyTask_ & other) const
  {
    if (this->agv_number != other.agv_number) {
      return false;
    }
    if (this->station != other.station) {
      return false;
    }
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssemblyTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssemblyTask_

// alias to use template instance with default allocator
using AssemblyTask =
  ariac_msgs::msg::AssemblyTask_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AssemblyTask_<ContainerAllocator>::AS1;
template<typename ContainerAllocator>
constexpr uint8_t AssemblyTask_<ContainerAllocator>::AS2;
template<typename ContainerAllocator>
constexpr uint8_t AssemblyTask_<ContainerAllocator>::AS3;
template<typename ContainerAllocator>
constexpr uint8_t AssemblyTask_<ContainerAllocator>::AS4;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__STRUCT_HPP_
