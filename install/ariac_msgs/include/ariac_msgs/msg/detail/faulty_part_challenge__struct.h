// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FaultyPartChallenge in the package ariac_msgs.
typedef struct ariac_msgs__msg__FaultyPartChallenge
{
  rosidl_runtime_c__String order_id;
  bool quadrant1;
  bool quadrant2;
  bool quadrant3;
  bool quadrant4;
} ariac_msgs__msg__FaultyPartChallenge;

// Struct for a sequence of ariac_msgs__msg__FaultyPartChallenge.
typedef struct ariac_msgs__msg__FaultyPartChallenge__Sequence
{
  ariac_msgs__msg__FaultyPartChallenge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__FaultyPartChallenge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__STRUCT_H_
