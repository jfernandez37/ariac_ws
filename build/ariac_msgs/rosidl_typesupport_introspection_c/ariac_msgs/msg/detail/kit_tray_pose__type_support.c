// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/KitTrayPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/kit_tray_pose__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/kit_tray_pose__functions.h"
#include "ariac_msgs/msg/detail/kit_tray_pose__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__KitTrayPose__init(message_memory);
}

void KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_fini_function(void * message_memory)
{
  ariac_msgs__msg__KitTrayPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__KitTrayPose, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__KitTrayPose, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_members = {
  "ariac_msgs__msg",  // message namespace
  "KitTrayPose",  // message name
  2,  // number of fields
  sizeof(ariac_msgs__msg__KitTrayPose),
  KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_member_array,  // message members
  KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_init_function,  // function to initialize message memory (memory has to be allocated)
  KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_type_support_handle = {
  0,
  &KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, KitTrayPose)() {
  KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_type_support_handle.typesupport_identifier) {
    KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KitTrayPose__rosidl_typesupport_introspection_c__KitTrayPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
