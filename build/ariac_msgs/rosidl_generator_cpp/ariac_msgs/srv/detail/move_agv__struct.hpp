// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ariac_msgs:srv/MoveAGV.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__STRUCT_HPP_
#define ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__MoveAGV_Request __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__MoveAGV_Request __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveAGV_Request_
{
  using Type = MoveAGV_Request_<ContainerAllocator>;

  explicit MoveAGV_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = 0;
    }
  }

  explicit MoveAGV_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->location = 0;
    }
  }

  // field types and members
  using _location_type =
    int8_t;
  _location_type location;

  // setters for named parameter idiom
  Type & set__location(
    const int8_t & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t KITTING =
    0;
  static constexpr int8_t ASSEMBLY_FRONT =
    1;
  static constexpr int8_t ASSEMBLY_BACK =
    2;
  static constexpr int8_t WAREHOUSE =
    3;

  // pointer types
  using RawPtr =
    ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__MoveAGV_Request
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__MoveAGV_Request
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveAGV_Request_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveAGV_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveAGV_Request_

// alias to use template instance with default allocator
using MoveAGV_Request =
  ariac_msgs::srv::MoveAGV_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t MoveAGV_Request_<ContainerAllocator>::KITTING;
template<typename ContainerAllocator>
constexpr int8_t MoveAGV_Request_<ContainerAllocator>::ASSEMBLY_FRONT;
template<typename ContainerAllocator>
constexpr int8_t MoveAGV_Request_<ContainerAllocator>::ASSEMBLY_BACK;
template<typename ContainerAllocator>
constexpr int8_t MoveAGV_Request_<ContainerAllocator>::WAREHOUSE;

}  // namespace srv

}  // namespace ariac_msgs


#ifndef _WIN32
# define DEPRECATED__ariac_msgs__srv__MoveAGV_Response __attribute__((deprecated))
#else
# define DEPRECATED__ariac_msgs__srv__MoveAGV_Response __declspec(deprecated)
#endif

namespace ariac_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveAGV_Response_
{
  using Type = MoveAGV_Response_<ContainerAllocator>;

  explicit MoveAGV_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MoveAGV_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ariac_msgs__srv__MoveAGV_Response
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ariac_msgs__srv__MoveAGV_Response
    std::shared_ptr<ariac_msgs::srv::MoveAGV_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveAGV_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveAGV_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveAGV_Response_

// alias to use template instance with default allocator
using MoveAGV_Response =
  ariac_msgs::srv::MoveAGV_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ariac_msgs

namespace ariac_msgs
{

namespace srv
{

struct MoveAGV
{
  using Request = ariac_msgs::srv::MoveAGV_Request;
  using Response = ariac_msgs::srv::MoveAGV_Response;
};

}  // namespace srv

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__STRUCT_HPP_
