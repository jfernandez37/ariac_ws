// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/msg/detail/trial__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ariac_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Trial_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::msg::Trial(_init);
}

void Trial_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::msg::Trial *>(message_memory);
  typed_message->~Trial();
}

size_t size_function__Trial__orders(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::msg::Order> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trial__orders(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::msg::Order> *>(untyped_member);
  return &member[index];
}

void * get_function__Trial__orders(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::msg::Order> *>(untyped_member);
  return &member[index];
}

void resize_function__Trial__orders(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::msg::Order> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Trial__challenges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::msg::Challenge> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Trial__challenges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::msg::Challenge> *>(untyped_member);
  return &member[index];
}

void * get_function__Trial__challenges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::msg::Challenge> *>(untyped_member);
  return &member[index];
}

void resize_function__Trial__challenges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::msg::Challenge> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Trial_message_member_array[2] = {
  {
    "orders",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::Order>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::Trial, orders),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trial__orders,  // size() function pointer
    get_const_function__Trial__orders,  // get_const(index) function pointer
    get_function__Trial__orders,  // get(index) function pointer
    resize_function__Trial__orders  // resize(index) function pointer
  },
  {
    "challenges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::Challenge>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::Trial, challenges),  // bytes offset in struct
    nullptr,  // default value
    size_function__Trial__challenges,  // size() function pointer
    get_const_function__Trial__challenges,  // get_const(index) function pointer
    get_function__Trial__challenges,  // get(index) function pointer
    resize_function__Trial__challenges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Trial_message_members = {
  "ariac_msgs::msg",  // message namespace
  "Trial",  // message name
  2,  // number of fields
  sizeof(ariac_msgs::msg::Trial),
  Trial_message_member_array,  // message members
  Trial_init_function,  // function to initialize message memory (memory has to be allocated)
  Trial_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Trial_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Trial_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ariac_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::Trial>()
{
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::Trial_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, msg, Trial)() {
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::Trial_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
