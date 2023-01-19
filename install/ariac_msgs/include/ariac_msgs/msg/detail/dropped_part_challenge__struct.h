// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot'
#include "rosidl_runtime_c/string.h"
// Member 'part_to_drop'
#include "ariac_msgs/msg/detail/part__struct.h"

// Struct defined in msg/DroppedPartChallenge in the package ariac_msgs.
typedef struct ariac_msgs__msg__DroppedPartChallenge
{
  rosidl_runtime_c__String robot;
  ariac_msgs__msg__Part part_to_drop;
  uint8_t drop_after_num;
  float drop_after_time;
} ariac_msgs__msg__DroppedPartChallenge;

// Struct for a sequence of ariac_msgs__msg__DroppedPartChallenge.
typedef struct ariac_msgs__msg__DroppedPartChallenge__Sequence
{
  ariac_msgs__msg__DroppedPartChallenge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__DroppedPartChallenge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__STRUCT_H_
