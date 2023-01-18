// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/bin_info__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/bin_info__functions.h"
#include "ariac_msgs/msg/detail/bin_info__struct.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/part_lot.h"
// Member `parts`
#include "ariac_msgs/msg/detail/part_lot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void BinInfo__rosidl_typesupport_introspection_c__BinInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__BinInfo__init(message_memory);
}

void BinInfo__rosidl_typesupport_introspection_c__BinInfo_fini_function(void * message_memory)
{
  ariac_msgs__msg__BinInfo__fini(message_memory);
}

size_t BinInfo__rosidl_typesupport_introspection_c__size_function__PartLot__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__PartLot__Sequence * member =
    (const ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  return member->size;
}

const void * BinInfo__rosidl_typesupport_introspection_c__get_const_function__PartLot__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__PartLot__Sequence * member =
    (const ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BinInfo__rosidl_typesupport_introspection_c__get_function__PartLot__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__PartLot__Sequence * member =
    (ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BinInfo__rosidl_typesupport_introspection_c__resize_function__PartLot__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__PartLot__Sequence * member =
    (ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  ariac_msgs__msg__PartLot__Sequence__fini(member);
  return ariac_msgs__msg__PartLot__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_member_array[2] = {
  {
    "bin_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__BinInfo, bin_number),  // bytes offset in struct
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
    offsetof(ariac_msgs__msg__BinInfo, parts),  // bytes offset in struct
    NULL,  // default value
    BinInfo__rosidl_typesupport_introspection_c__size_function__PartLot__parts,  // size() function pointer
    BinInfo__rosidl_typesupport_introspection_c__get_const_function__PartLot__parts,  // get_const(index) function pointer
    BinInfo__rosidl_typesupport_introspection_c__get_function__PartLot__parts,  // get(index) function pointer
    BinInfo__rosidl_typesupport_introspection_c__resize_function__PartLot__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_members = {
  "ariac_msgs__msg",  // message namespace
  "BinInfo",  // message name
  2,  // number of fields
  sizeof(ariac_msgs__msg__BinInfo),
  BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_member_array,  // message members
  BinInfo__rosidl_typesupport_introspection_c__BinInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  BinInfo__rosidl_typesupport_introspection_c__BinInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_type_support_handle = {
  0,
  &BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, BinInfo)() {
  BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, PartLot)();
  if (!BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_type_support_handle.typesupport_identifier) {
    BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BinInfo__rosidl_typesupport_introspection_c__BinInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
