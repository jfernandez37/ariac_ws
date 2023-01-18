// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TimeCondition in the package ariac_msgs.
typedef struct ariac_msgs__msg__TimeCondition
{
  double seconds;
} ariac_msgs__msg__TimeCondition;

// Struct for a sequence of ariac_msgs__msg__TimeCondition.
typedef struct ariac_msgs__msg__TimeCondition__Sequence
{
  ariac_msgs__msg__TimeCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__TimeCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__STRUCT_H_
