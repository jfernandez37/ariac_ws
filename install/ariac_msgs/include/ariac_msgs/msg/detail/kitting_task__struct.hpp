// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/KittingTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/kitting_part__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__KittingTask __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__KittingTask __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KittingTask_
{
  using Type = KittingTask_<ContainerAllocator>;

  explicit KittingTask_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agv_number = 0;
      this->tray_id = 0;
      this->destination = 0;
    }
  }

  explicit KittingTask_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agv_number = 0;
      this->tray_id = 0;
      this->destination = 0;
    }
  }

  // field types and members
  using _agv_number_type =
    uint8_t;
  _agv_number_type agv_number;
  using _tray_id_type =
    int8_t;
  _tray_id_type tray_id;
  using _destination_type =
    uint8_t;
  _destination_type destination;
  using _parts_type =
    std::vector<ariac_msgs::msg::KittingPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::KittingPart_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__agv_number(
    const uint8_t & _arg)
  {
    this->agv_number = _arg;
    return *this;
  }
  Type & set__tray_id(
    const int8_t & _arg)
  {
    this->tray_id = _arg;
    return *this;
  }
  Type & set__destination(
    const uint8_t & _arg)
  {
    this->destination = _arg;
    return *this;
  }
  Type & set__parts(
    const std::vector<ariac_msgs::msg::KittingPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::KittingPart_<ContainerAllocator>>> & _arg)
  {
    this->parts = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t KITTING =
    0u;
  static constexpr uint8_t ASSEMBLY_FRONT =
    1u;
  static constexpr uint8_t ASSEMBLY_BACK =
    2u;
  static constexpr uint8_t WAREHOUSE =
    3u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::KittingTask_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::KittingTask_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::KittingTask_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::KittingTask_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__KittingTask
    std::shared_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__KittingTask
    std::shared_ptr<ariac_msgs::msg::KittingTask_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KittingTask_ & other) const
  {
    if (this->agv_number != other.agv_number) {
      return false;
    }
    if (this->tray_id != other.tray_id) {
      return false;
    }
    if (this->destination != other.destination) {
      return false;
    }
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const KittingTask_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KittingTask_

// alias to use template instance with default allocator
using KittingTask =
  ariac_msgs::msg::KittingTask_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t KittingTask_<ContainerAllocator>::KITTING;
template<typename ContainerAllocator>
constexpr uint8_t KittingTask_<ContainerAllocator>::ASSEMBLY_FRONT;
template<typename ContainerAllocator>
constexpr uint8_t KittingTask_<ContainerAllocator>::ASSEMBLY_BACK;
template<typename ContainerAllocator>
constexpr uint8_t KittingTask_<ContainerAllocator>::WAREHOUSE;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__KITTING_TASK__STRUCT_HPP_
