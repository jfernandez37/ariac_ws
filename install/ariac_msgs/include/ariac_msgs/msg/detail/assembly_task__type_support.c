// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/assembly_task__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/assembly_task__functions.h"
#include "ariac_msgs/msg/detail/assembly_task__struct.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/assembly_part.h"
// Member `parts`
#include "ariac_msgs/msg/detail/assembly_part__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__AssemblyTask__init(message_memory);
}

void AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_fini_function(void * message_memory)
{
  ariac_msgs__msg__AssemblyTask__fini(message_memory);
}

size_t AssemblyTask__rosidl_typesupport_introspection_c__size_function__AssemblyPart__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__AssemblyPart__Sequence * member =
    (const ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return member->size;
}

const void * AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyPart__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__AssemblyPart__Sequence * member =
    (const ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyPart__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__AssemblyPart__Sequence * member =
    (ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AssemblyTask__rosidl_typesupport_introspection_c__resize_function__AssemblyPart__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__AssemblyPart__Sequence * member =
    (ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  ariac_msgs__msg__AssemblyPart__Sequence__fini(member);
  return ariac_msgs__msg__AssemblyPart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_member_array[3] = {
  {
    "agv_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyTask, agv_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__AssemblyTask, station),  // bytes offset in struct
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
    offsetof(ariac_msgs__msg__AssemblyTask, parts),  // bytes offset in struct
    NULL,  // default value
    AssemblyTask__rosidl_typesupport_introspection_c__size_function__AssemblyPart__parts,  // size() function pointer
    AssemblyTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyPart__parts,  // get_const(index) function pointer
    AssemblyTask__rosidl_typesupport_introspection_c__get_function__AssemblyPart__parts,  // get(index) function pointer
    AssemblyTask__rosidl_typesupport_introspection_c__resize_function__AssemblyPart__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_members = {
  "ariac_msgs__msg",  // message namespace
  "AssemblyTask",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__msg__AssemblyTask),
  AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_member_array,  // message members
  AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_init_function,  // function to initialize message memory (memory has to be allocated)
  AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle = {
  0,
  &AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, AssemblyTask)() {
  AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, AssemblyPart)();
  if (!AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle.typesupport_identifier) {
    AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AssemblyTask__rosidl_typesupport_introspection_c__AssemblyTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
