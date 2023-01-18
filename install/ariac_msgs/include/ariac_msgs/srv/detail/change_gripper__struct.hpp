// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:srv/ChangeGripper.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER__STRUCT_HPP_
#define ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__ChangeGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__ChangeGripper_Request __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeGripper_Request_
{
  using Type = ChangeGripper_Request_<ContainerAllocator>;

  explicit ChangeGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_type = 0;
    }
  }

  explicit ChangeGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_type = 0;
    }
  }

  // field types and members
  using _gripper_type_type =
    uint8_t;
  _gripper_type_type gripper_type;

  // setters for named parameter idiom
  Type & set__gripper_type(
    const uint8_t & _arg)
  {
    this->gripper_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PART_GRIPPER =
    1u;
  static constexpr uint8_t TRAY_GRIPPER =
    2u;

  // pointer types
  using RawPtr =
    ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__ChangeGripper_Request
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__ChangeGripper_Request
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeGripper_Request_ & other) const
  {
    if (this->gripper_type != other.gripper_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeGripper_Request_

// alias to use template instance with default allocator
using ChangeGripper_Request =
  ariac_msgs::srv::ChangeGripper_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ChangeGripper_Request_<ContainerAllocator>::PART_GRIPPER;
template<typename ContainerAllocator>
constexpr uint8_t ChangeGripper_Request_<ContainerAllocator>::TRAY_GRIPPER;

}  // namespace srv

}  // namespace ariac_msgs


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__ChangeGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__ChangeGripper_Response __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeGripper_Response_
{
  using Type = ChangeGripper_Response_<ContainerAllocator>;

  explicit ChangeGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit ChangeGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__ChangeGripper_Response
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__ChangeGripper_Response
    std::shared_ptr<ariac_msgs::srv::ChangeGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeGripper_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeGripper_Response_

// alias to use template instance with default allocator
using ChangeGripper_Response =
  ariac_msgs::srv::ChangeGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs

namespace ariac_msgs
{

namespace srv
{

struct ChangeGripper
{
  using Request = ariac_msgs::srv::ChangeGripper_Request;
  using Response = ariac_msgs::srv::ChangeGripper_Response;
};

}  // namespace srv

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER__STRUCT_HPP_
