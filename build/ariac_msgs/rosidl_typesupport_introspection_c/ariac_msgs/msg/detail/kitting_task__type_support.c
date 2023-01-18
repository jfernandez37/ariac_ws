// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/KittingTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/kitting_task__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/kitting_task__functions.h"
#include "ariac_msgs/msg/detail/kitting_task__struct.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/kitting_part.h"
// Member `parts`
#include "ariac_msgs/msg/detail/kitting_part__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KittingTask__rosidl_typesupport_introspection_c__KittingTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__KittingTask__init(message_memory);
}

void KittingTask__rosidl_typesupport_introspection_c__KittingTask_fini_function(void * message_memory)
{
  ariac_msgs__msg__KittingTask__fini(message_memory);
}

size_t KittingTask__rosidl_typesupport_introspection_c__size_function__KittingPart__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__KittingPart__Sequence * member =
    (const ariac_msgs__msg__KittingPart__Sequence *)(untyped_member);
  return member->size;
}

const void * KittingTask__rosidl_typesupport_introspection_c__get_const_function__KittingPart__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__KittingPart__Sequence * member =
    (const ariac_msgs__msg__KittingPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * KittingTask__rosidl_typesupport_introspection_c__get_function__KittingPart__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__KittingPart__Sequence * member =
    (ariac_msgs__msg__KittingPart__Sequence *)(untyped_member);
  return &member->data[index];
}

bool KittingTask__rosidl_typesupport_introspection_c__resize_function__KittingPart__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__KittingPart__Sequence * member =
    (ariac_msgs__msg__KittingPart__Sequence *)(untyped_member);
  ariac_msgs__msg__KittingPart__Sequence__fini(member);
  return ariac_msgs__msg__KittingPart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_member_array[4] = {
  {
    "agv_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__KittingTask, agv_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tray_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__KittingTask, tray_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__KittingTask, destination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__KittingTask, parts),  // bytes offset in struct
    NULL,  // default value
    KittingTask__rosidl_typesupport_introspection_c__size_function__KittingPart__parts,  // size() function pointer
    KittingTask__rosidl_typesupport_introspection_c__get_const_function__KittingPart__parts,  // get_const(index) function pointer
    KittingTask__rosidl_typesupport_introspection_c__get_function__KittingPart__parts,  // get(index) function pointer
    KittingTask__rosidl_typesupport_introspection_c__resize_function__KittingPart__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_members = {
  "ariac_msgs__msg",  // message namespace
  "KittingTask",  // message name
  4,  // number of fields
  sizeof(ariac_msgs__msg__KittingTask),
  KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_member_array,  // message members
  KittingTask__rosidl_typesupport_introspection_c__KittingTask_init_function,  // function to initialize message memory (memory has to be allocated)
  KittingTask__rosidl_typesupport_introspection_c__KittingTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_type_support_handle = {
  0,
  &KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, KittingTask)() {
  KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, KittingPart)();
  if (!KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_type_support_handle.typesupport_identifier) {
    KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KittingTask__rosidl_typesupport_introspection_c__KittingTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
