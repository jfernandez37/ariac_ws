// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bins'
#include "ariac_msgs/msg/detail/bin_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__BinParts __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__BinParts __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BinParts_
{
  using Type = BinParts_<ContainerAllocator>;

  explicit BinParts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BinParts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _bins_type =
    std::vector<ariac_msgs::msg::BinInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::BinInfo_<ContainerAllocator>>>;
  _bins_type bins;

  // setters for named parameter idiom
  Type & set__bins(
    const std::vector<ariac_msgs::msg::BinInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::BinInfo_<ContainerAllocator>>> & _arg)
  {
    this->bins = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::BinParts_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::BinParts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::BinParts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::BinParts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__BinParts
    std::shared_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__BinParts
    std::shared_ptr<ariac_msgs::msg::BinParts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BinParts_ & other) const
  {
    if (this->bins != other.bins) {
      return false;
    }
    return true;
  }
  bool operator!=(const BinParts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BinParts_

// alias to use template instance with default allocator
using BinParts =
  ariac_msgs::msg::BinParts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__STRUCT_HPP_
