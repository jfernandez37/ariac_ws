// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/SubmissionCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__STRUCT_H_

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

// Struct defined in msg/SubmissionCondition in the package ariac_msgs.
typedef struct ariac_msgs__msg__SubmissionCondition
{
  rosidl_runtime_c__String order_id;
} ariac_msgs__msg__SubmissionCondition;

// Struct for a sequence of ariac_msgs__msg__SubmissionCondition.
typedef struct ariac_msgs__msg__SubmissionCondition__Sequence
{
  ariac_msgs__msg__SubmissionCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__SubmissionCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__SUBMISSION_CONDITION__STRUCT_H_
