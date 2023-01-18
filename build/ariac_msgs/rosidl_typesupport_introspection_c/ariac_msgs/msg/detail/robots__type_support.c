// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/robots__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/robots__functions.h"
#include "ariac_msgs/msg/detail/robots__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Robots__rosidl_typesupport_introspection_c__Robots_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__Robots__init(message_memory);
}

void Robots__rosidl_typesupport_introspection_c__Robots_fini_function(void * message_memory)
{
  ariac_msgs__msg__Robots__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Robots__rosidl_typesupport_introspection_c__Robots_message_member_array[2] = {
  {
    "floor_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Robots, floor_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ceiling_robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Robots, ceiling_robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Robots__rosidl_typesupport_introspection_c__Robots_message_members = {
  "ariac_msgs__msg",  // message namespace
  "Robots",  // message name
  2,  // number of fields
  sizeof(ariac_msgs__msg__Robots),
  Robots__rosidl_typesupport_introspection_c__Robots_message_member_array,  // message members
  Robots__rosidl_typesupport_introspection_c__Robots_init_function,  // function to initialize message memory (memory has to be allocated)
  Robots__rosidl_typesupport_introspection_c__Robots_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Robots__rosidl_typesupport_introspection_c__Robots_message_type_support_handle = {
  0,
  &Robots__rosidl_typesupport_introspection_c__Robots_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Robots)() {
  if (!Robots__rosidl_typesupport_introspection_c__Robots_message_type_support_handle.typesupport_identifier) {
    Robots__rosidl_typesupport_introspection_c__Robots_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Robots__rosidl_typesupport_introspection_c__Robots_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
