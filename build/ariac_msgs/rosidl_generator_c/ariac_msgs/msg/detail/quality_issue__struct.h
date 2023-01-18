// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/QualityIssue in the package ariac_msgs.
typedef struct ariac_msgs__msg__QualityIssue
{
  bool all_passed;
  bool missing_part;
  bool flipped_part;
  bool faulty_part;
  bool incorrect_part_type;
  bool incorrect_part_color;
} ariac_msgs__msg__QualityIssue;

// Struct for a sequence of ariac_msgs__msg__QualityIssue.
typedef struct ariac_msgs__msg__QualityIssue__Sequence
{
  ariac_msgs__msg__QualityIssue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__QualityIssue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__STRUCT_H_
