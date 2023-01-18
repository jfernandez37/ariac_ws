// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/Order.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ORDER__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ORDER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'kitting_task'
#include "ariac_msgs/msg/detail/kitting_task__struct.hpp"
// Member 'assembly_task'
#include "ariac_msgs/msg/detail/assembly_task__struct.hpp"
// Member 'combined_task'
#include "ariac_msgs/msg/detail/combined_task__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__Order __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__Order __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Order_
{
  using Type = Order_<ContainerAllocator>;

  explicit Order_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : kitting_task(_init),
    assembly_task(_init),
    combined_task(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->type = 0;
      this->priority = false;
    }
  }

  explicit Order_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    kitting_task(_alloc, _init),
    assembly_task(_alloc, _init),
    combined_task(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->type = 0;
      this->priority = false;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _priority_type =
    bool;
  _priority_type priority;
  using _kitting_task_type =
    ariac_msgs::msg::KittingTask_<ContainerAllocator>;
  _kitting_task_type kitting_task;
  using _assembly_task_type =
    ariac_msgs::msg::AssemblyTask_<ContainerAllocator>;
  _assembly_task_type assembly_task;
  using _combined_task_type =
    ariac_msgs::msg::CombinedTask_<ContainerAllocator>;
  _combined_task_type combined_task;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__priority(
    const bool & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__kitting_task(
    const ariac_msgs::msg::KittingTask_<ContainerAllocator> & _arg)
  {
    this->kitting_task = _arg;
    return *this;
  }
  Type & set__assembly_task(
    const ariac_msgs::msg::AssemblyTask_<ContainerAllocator> & _arg)
  {
    this->assembly_task = _arg;
    return *this;
  }
  Type & set__combined_task(
    const ariac_msgs::msg::CombinedTask_<ContainerAllocator> & _arg)
  {
    this->combined_task = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t KITTING =
    0u;
  static constexpr uint8_t ASSEMBLY =
    1u;
  static constexpr uint8_t COMBINED =
    2u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::Order_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::Order_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::Order_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::Order_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Order_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Order_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Order_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Order_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::Order_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::Order_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__Order
    std::shared_ptr<ariac_msgs::msg::Order_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__Order
    std::shared_ptr<ariac_msgs::msg::Order_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Order_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->kitting_task != other.kitting_task) {
      return false;
    }
    if (this->assembly_task != other.assembly_task) {
      return false;
    }
    if (this->combined_task != other.combined_task) {
      return false;
    }
    return true;
  }
  bool operator!=(const Order_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Order_

// alias to use template instance with default allocator
using Order =
  ariac_msgs::msg::Order_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Order_<ContainerAllocator>::KITTING;
template<typename ContainerAllocator>
constexpr uint8_t Order_<ContainerAllocator>::ASSEMBLY;
template<typename ContainerAllocator>
constexpr uint8_t Order_<ContainerAllocator>::COMBINED;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ORDER__STRUCT_HPP_
