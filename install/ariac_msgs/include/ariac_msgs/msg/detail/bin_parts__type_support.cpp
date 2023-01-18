// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/msg/detail/bin_parts__struct.hpp"
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

void BinParts_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::msg::BinParts(_init);
}

void BinParts_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::msg::BinParts *>(message_memory);
  typed_message->~BinParts();
}

size_t size_function__BinParts__bins(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ariac_msgs::msg::BinInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BinParts__bins(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ariac_msgs::msg::BinInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__BinParts__bins(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ariac_msgs::msg::BinInfo> *>(untyped_member);
  return &member[index];
}

void resize_function__BinParts__bins(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ariac_msgs::msg::BinInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BinParts_message_member_array[1] = {
  {
    "bins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::BinInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::BinParts, bins),  // bytes offset in struct
    nullptr,  // default value
    size_function__BinParts__bins,  // size() function pointer
    get_const_function__BinParts__bins,  // get_const(index) function pointer
    get_function__BinParts__bins,  // get(index) function pointer
    resize_function__BinParts__bins  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BinParts_message_members = {
  "ariac_msgs::msg",  // message namespace
  "BinParts",  // message name
  1,  // number of fields
  sizeof(ariac_msgs::msg::BinParts),
  BinParts_message_member_array,  // message members
  BinParts_init_function,  // function to initialize message memory (memory has to be allocated)
  BinParts_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BinParts_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BinParts_message_members,
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
get_message_type_support_handle<ariac_msgs::msg::BinParts>()
{
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::BinParts_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, msg, BinParts)() {
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::BinParts_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
