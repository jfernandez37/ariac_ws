// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/condition__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/condition__functions.h"
#include "ariac_msgs/msg/detail/condition__struct.h"


// Include directives for member types
// Member `time_condition`
#include "ariac_msgs/msg/time_condition.h"
// Member `time_condition`
#include "ariac_msgs/msg/detail/time_condition__rosidl_typesupport_introspection_c.h"
// Member `part_place_condition`
#include "ariac_msgs/msg/part_place_condition.h"
// Member `part_place_condition`
#include "ariac_msgs/msg/detail/part_place_condition__rosidl_typesupport_introspection_c.h"
// Member `submission_condition`
#include "ariac_msgs/msg/submission_condition.h"
// Member `submission_condition`
#include "ariac_msgs/msg/detail/submission_condition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Condition__rosidl_typesupport_introspection_c__Condition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__Condition__init(message_memory);
}

void Condition__rosidl_typesupport_introspection_c__Condition_fini_function(void * message_memory)
{
  ariac_msgs__msg__Condition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Condition__rosidl_typesupport_introspection_c__Condition_message_member_array[4] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Condition, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Condition, time_condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "part_place_condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Condition, part_place_condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submission_condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Condition, submission_condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Condition__rosidl_typesupport_introspection_c__Condition_message_members = {
  "ariac_msgs__msg",  // message namespace
  "Condition",  // message name
  4,  // number of fields
  sizeof(ariac_msgs__msg__Condition),
  Condition__rosidl_typesupport_introspection_c__Condition_message_member_array,  // message members
  Condition__rosidl_typesupport_introspection_c__Condition_init_function,  // function to initialize message memory (memory has to be allocated)
  Condition__rosidl_typesupport_introspection_c__Condition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Condition__rosidl_typesupport_introspection_c__Condition_message_type_support_handle = {
  0,
  &Condition__rosidl_typesupport_introspection_c__Condition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Condition)() {
  Condition__rosidl_typesupport_introspection_c__Condition_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, TimeCondition)();
  Condition__rosidl_typesupport_introspection_c__Condition_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, PartPlaceCondition)();
  Condition__rosidl_typesupport_introspection_c__Condition_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, SubmissionCondition)();
  if (!Condition__rosidl_typesupport_introspection_c__Condition_message_type_support_handle.typesupport_identifier) {
    Condition__rosidl_typesupport_introspection_c__Condition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Condition__rosidl_typesupport_introspection_c__Condition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
