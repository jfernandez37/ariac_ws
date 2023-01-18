// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TRIAL__STRUCT_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TRIAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'orders'
#include "ariac_msgs/msg/detail/order__struct.hpp"
// Member 'challenges'
#include "ariac_msgs/msg/detail/challenge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ariac_msgs__msg__Trial __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__msg__Trial __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trial_
{
  using Type = Trial_<ContainerAllocator>;

  explicit Trial_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Trial_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _orders_type =
    std::vector<ariac_msgs::msg::Order_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::Order_<ContainerAllocator>>>;
  _orders_type orders;
  using _challenges_type =
    std::vector<ariac_msgs::msg::Challenge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::Challenge_<ContainerAllocator>>>;
  _challenges_type challenges;

  // setters for named parameter idiom
  Type & set__orders(
    const std::vector<ariac_msgs::msg::Order_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::Order_<ContainerAllocator>>> & _arg)
  {
    this->orders = _arg;
    return *this;
  }
  Type & set__challenges(
    const std::vector<ariac_msgs::msg::Challenge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ariac_msgs::msg::Challenge_<ContainerAllocator>>> & _arg)
  {
    this->challenges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::msg::Trial_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::msg::Trial_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::msg::Trial_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::msg::Trial_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Trial_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Trial_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::msg::Trial_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::msg::Trial_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::msg::Trial_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::msg::Trial_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__msg__Trial
    std::shared_ptr<ariac_msgs::msg::Trial_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__msg__Trial
    std::shared_ptr<ariac_msgs::msg::Trial_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trial_ & other) const
  {
    if (this->orders != other.orders) {
      return false;
    }
    if (this->challenges != other.challenges) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trial_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trial_

// alias to use template instance with default allocator
using Trial =
  ariac_msgs::msg::Trial_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__TRIAL__STRUCT_HPP_
