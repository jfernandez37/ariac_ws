// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/BreakBeamStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/BreakBeamStatus in the package ariac_msgs.
typedef struct ariac_msgs__msg__BreakBeamStatus
{
  std_msgs__msg__Header header;
  bool object_detected;
} ariac_msgs__msg__BreakBeamStatus;

// Struct for a sequence of ariac_msgs__msg__BreakBeamStatus.
typedef struct ariac_msgs__msg__BreakBeamStatus__Sequence
{
  ariac_msgs__msg__BreakBeamStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__BreakBeamStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__STRUCT_H_
