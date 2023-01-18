// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/ChallengeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__STRUCT_H_

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
// Member 'time_condition'
#include "ariac_msgs/msg/detail/time_condition__struct.h"
// Member 'part_place_condition'
#include "ariac_msgs/msg/detail/part_place_condition__struct.h"

// Struct defined in msg/ChallengeCondition in the package ariac_msgs.
typedef struct ariac_msgs__msg__ChallengeCondition
{
  rosidl_runtime_c__String type;
  ariac_msgs__msg__TimeCondition time_condition;
  ariac_msgs__msg__PartPlaceCondition part_place_condition;
} ariac_msgs__msg__ChallengeCondition;

// Struct for a sequence of ariac_msgs__msg__ChallengeCondition.
typedef struct ariac_msgs__msg__ChallengeCondition__Sequence
{
  ariac_msgs__msg__ChallengeCondition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__ChallengeCondition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__STRUCT_H_
