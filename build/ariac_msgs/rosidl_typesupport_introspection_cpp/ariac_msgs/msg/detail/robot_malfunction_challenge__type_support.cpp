// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.hpp"
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

void RobotMalfunctionChallenge_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ariac_msgs::msg::RobotMalfunctionChallenge(_init);
}

void RobotMalfunctionChallenge_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ariac_msgs::msg::RobotMalfunctionChallenge *>(message_memory);
  typed_message->~RobotMalfunctionChallenge();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotMalfunctionChallenge_message_member_array[3] = {
  {
    "duration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::RobotMalfunctionChallenge, duration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "condition",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::Condition>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::RobotMalfunctionChallenge, condition),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robots_to_disable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ariac_msgs::msg::Robots>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs::msg::RobotMalfunctionChallenge, robots_to_disable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotMalfunctionChallenge_message_members = {
  "ariac_msgs::msg",  // message namespace
  "RobotMalfunctionChallenge",  // message name
  3,  // number of fields
  sizeof(ariac_msgs::msg::RobotMalfunctionChallenge),
  RobotMalfunctionChallenge_message_member_array,  // message members
  RobotMalfunctionChallenge_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotMalfunctionChallenge_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotMalfunctionChallenge_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotMalfunctionChallenge_message_members,
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
get_message_type_support_handle<ariac_msgs::msg::RobotMalfunctionChallenge>()
{
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::RobotMalfunctionChallenge_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ariac_msgs, msg, RobotMalfunctionChallenge)() {
  return &::ariac_msgs::msg::rosidl_typesupport_introspection_cpp::RobotMalfunctionChallenge_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
