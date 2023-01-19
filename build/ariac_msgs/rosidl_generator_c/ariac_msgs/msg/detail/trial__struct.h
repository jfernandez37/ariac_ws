// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TRIAL__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__TRIAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trial_name'
#include "rosidl_runtime_c/string.h"
// Member 'orders'
#include "ariac_msgs/msg/detail/order__struct.h"
// Member 'order_conditions'
#include "ariac_msgs/msg/detail/order_condition__struct.h"
// Member 'challenges'
#include "ariac_msgs/msg/detail/challenge__struct.h"

// Struct defined in msg/Trial in the package ariac_msgs.
typedef struct ariac_msgs__msg__Trial
{
  float time_limit;
  rosidl_runtime_c__String trial_name;
  ariac_msgs__msg__Order__Sequence orders;
  ariac_msgs__msg__OrderCondition__Sequence order_conditions;
  ariac_msgs__msg__Challenge__Sequence challenges;
} ariac_msgs__msg__Trial;

// Struct for a sequence of ariac_msgs__msg__Trial.
typedef struct ariac_msgs__msg__Trial__Sequence
{
  ariac_msgs__msg__Trial * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Trial__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__TRIAL__STRUCT_H_
