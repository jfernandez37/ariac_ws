// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/VacuumGripperState in the package ariac_msgs.
typedef struct ariac_msgs__msg__VacuumGripperState
{
  bool enabled;
  bool attached;
  rosidl_runtime_c__String type;
} ariac_msgs__msg__VacuumGripperState;

// Struct for a sequence of ariac_msgs__msg__VacuumGripperState.
typedef struct ariac_msgs__msg__VacuumGripperState__Sequence
{
  ariac_msgs__msg__VacuumGripperState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__VacuumGripperState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__STRUCT_H_
