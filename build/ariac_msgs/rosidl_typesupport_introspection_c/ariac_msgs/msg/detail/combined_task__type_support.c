// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/CombinedTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/combined_task__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/combined_task__functions.h"
#include "ariac_msgs/msg/detail/combined_task__struct.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/assembly_part.h"
// Member `parts`
#include "ariac_msgs/msg/detail/assembly_part__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__CombinedTask__init(message_memory);
}

void CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_fini_function(void * message_memory)
{
  ariac_msgs__msg__CombinedTask__fini(message_memory);
}

size_t CombinedTask__rosidl_typesupport_introspection_c__size_function__AssemblyPart__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__AssemblyPart__Sequence * member =
    (const ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return member->size;
}

const void * CombinedTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyPart__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__AssemblyPart__Sequence * member =
    (const ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * CombinedTask__rosidl_typesupport_introspection_c__get_function__AssemblyPart__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__AssemblyPart__Sequence * member =
    (ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  return &member->data[index];
}

bool CombinedTask__rosidl_typesupport_introspection_c__resize_function__AssemblyPart__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__AssemblyPart__Sequence * member =
    (ariac_msgs__msg__AssemblyPart__Sequence *)(untyped_member);
  ariac_msgs__msg__AssemblyPart__Sequence__fini(member);
  return ariac_msgs__msg__AssemblyPart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_member_array[2] = {
  {
    "station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__CombinedTask, station),  // bytes offset in struct
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
    offsetof(ariac_msgs__msg__CombinedTask, parts),  // bytes offset in struct
    NULL,  // default value
    CombinedTask__rosidl_typesupport_introspection_c__size_function__AssemblyPart__parts,  // size() function pointer
    CombinedTask__rosidl_typesupport_introspection_c__get_const_function__AssemblyPart__parts,  // get_const(index) function pointer
    CombinedTask__rosidl_typesupport_introspection_c__get_function__AssemblyPart__parts,  // get(index) function pointer
    CombinedTask__rosidl_typesupport_introspection_c__resize_function__AssemblyPart__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_members = {
  "ariac_msgs__msg",  // message namespace
  "CombinedTask",  // message name
  2,  // number of fields
  sizeof(ariac_msgs__msg__CombinedTask),
  CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_member_array,  // message members
  CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_init_function,  // function to initialize message memory (memory has to be allocated)
  CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_type_support_handle = {
  0,
  &CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, CombinedTask)() {
  CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, AssemblyPart)();
  if (!CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_type_support_handle.typesupport_identifier) {
    CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CombinedTask__rosidl_typesupport_introspection_c__CombinedTask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
