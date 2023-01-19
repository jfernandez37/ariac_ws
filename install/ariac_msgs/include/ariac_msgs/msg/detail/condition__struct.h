// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONDITION__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__CONDITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TIME'.
enum
{
  ariac_msgs__msg__Condition__TIME = 0
};

/// Constant 'PART_PLACE'.
enum
{
  ariac_msgs__msg__Condition__PART_PLACE = 1
};

/// Constant 'SUBMISSION'.
enum
{
  ariac_msgs__msg__Condition__SUBMISSION = 2
};

// Include directives for member types
// Member 'time_condition'
#include "ariac_msgs/msg/detail/time_condition__struct.h"
// Member 'part_place_condition'
#include "ariac_msgs/msg/detail/part_place_condition__struct.h"
// Member 'submission_condition'
#include "ariac_msgs/msg/detail/submission_condition__struct.h"

// Struct defined in msg/Condition in the package ariac_msgs.
typedef struct ariac_msgs__msg__Condition
{
  uint8_t type;
  ariac_msgs__msg__TimeCondition time_condition;
  ariac_msgs__msg__PartPlaceCondition part_place_condition;
  ariac_msgs__msg__SubmissionCondition submission_condition;
} ariac_msgs__msg__Condition;

// Struct for a sequence of ariac_msgs__msg__Condition.
typedef struct ariac_msgs__msg__Condition__Sequence
{
  ariac_msgs__msg__Condition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Condition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__CONDITION__STRUCT_H_
