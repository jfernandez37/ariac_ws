// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/AssemblyPart.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/assembly_part__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/assembly_part__functions.h"
#include "ariac_msgs/msg/detail/assembly_part__struct.h"


// Include directives for member types
// Member `part`
#include "ariac_msgs/msg/part.h"
// Member `part`
#include "ariac_msgs/msg/detail/part__rosidl_typesupport_introspection_c.h"
// Member `assembled_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `assembled_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `install_direction`
#include "geometry_msgs/msg/vector3.h"
// Member `install_direction`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__AssemblyPart__init(message_memory);
}

void AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_fini_function(void * message_memory)
{
  ariac_msgs__msg__AssemblyPart__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_member_array[3] = {
  {
    "part",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyPart, part),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assembled_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyPart, assembled_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "install_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyPart, install_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_members = {
  "ariac_msgs__msg",  // message namespace
  "AssemblyPart",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__msg__AssemblyPart),
  AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_member_array,  // message members
  AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_init_function,  // function to initialize message memory (memory has to be allocated)
  AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_type_support_handle = {
  0,
  &AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, AssemblyPart)() {
  AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Part)();
  AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_type_support_handle.typesupport_identifier) {
    AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AssemblyPart__rosidl_typesupport_introspection_c__AssemblyPart_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
