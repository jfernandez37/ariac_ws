// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_INFO__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BIN_INFO__STRUCT_HPP_

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
# define DEPRECATED__ariac_msgs__msg__BinInfo __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__BinInfo __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BinInfo_
{
  using Type = BinInfo_<ContainerAllocator>;

  explicit BinInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bin_number = 0;
    }
  }

  explicit BinInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bin_number = 0;
    }
  }

  // field types and members
  using _bin_number_type =
    uint8_t;
  _bin_number_type bin_number;
  using _parts_type =
    std::vector<ariac_msgs::msg::PartLot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartLot_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__bin_number(
    const uint8_t & _arg)
  {
    this->bin_number = _arg;
    return *this;
  }
  Type & set__parts(
    const std::vector<ariac_msgs::msg::PartLot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::PartLot_<ContainerAllocator>>> & _arg)
  {
    this->parts = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BIN1 =
    1u;
  static constexpr uint8_t BIN2 =
    2u;
  static constexpr uint8_t BIN3 =
    3u;
  static constexpr uint8_t BIN4 =
    4u;
  static constexpr uint8_t BIN5 =
    5u;
  static constexpr uint8_t BIN6 =
    6u;
  static constexpr uint8_t BIN7 =
    7u;
  static constexpr uint8_t BIN8 =
    8u;

  // pointer types
  using RawPtr =
    ariac_msgs::msg::BinInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::BinInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::BinInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::BinInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__BinInfo
    std::shared_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__BinInfo
    std::shared_ptr<ariac_msgs::msg::BinInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BinInfo_ & other) const
  {
    if (this->bin_number != other.bin_number) {
      return false;
    }
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const BinInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BinInfo_

// alias to use template instance with default allocator
using BinInfo =
  ariac_msgs::msg::BinInfo_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN1;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN2;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN3;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN4;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN5;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN6;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN7;
template<typename ContainerAllocator>
constexpr uint8_t BinInfo_<ContainerAllocator>::BIN8;

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_INFO__STRUCT_HPP_
