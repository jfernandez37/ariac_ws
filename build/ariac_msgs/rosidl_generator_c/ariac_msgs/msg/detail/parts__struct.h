// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Parts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PARTS__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__PARTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/part__struct.h"

// Struct defined in msg/Parts in the package ariac_msgs.
typedef struct ariac_msgs__msg__Parts
{
  ariac_msgs__msg__Part__Sequence parts;
} ariac_msgs__msg__Parts;

// Struct for a sequence of ariac_msgs__msg__Parts.
typedef struct ariac_msgs__msg__Parts__Sequence
{
  ariac_msgs__msg__Parts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Parts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__PARTS__STRUCT_H_
