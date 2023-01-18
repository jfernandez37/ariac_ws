// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `condition`
#include "ariac_msgs/msg/detail/challenge_condition__functions.h"
// Member `sensors_to_disable`
#include "ariac_msgs/msg/detail/sensors__functions.h"

bool
ariac_msgs__msg__SensorBlackoutChallenge__init(ariac_msgs__msg__SensorBlackoutChallenge * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  // condition
  if (!ariac_msgs__msg__ChallengeCondition__init(&msg->condition)) {
    ariac_msgs__msg__SensorBlackoutChallenge__fini(msg);
    return false;
  }
  // sensors_to_disable
  if (!ariac_msgs__msg__Sensors__init(&msg->sensors_to_disable)) {
    ariac_msgs__msg__SensorBlackoutChallenge__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__SensorBlackoutChallenge__fini(ariac_msgs__msg__SensorBlackoutChallenge * msg)
{
  if (!msg) {
    return;
  }
  // duration
  // condition
  ariac_msgs__msg__ChallengeCondition__fini(&msg->condition);
  // sensors_to_disable
  ariac_msgs__msg__Sensors__fini(&msg->sensors_to_disable);
}

bool
ariac_msgs__msg__SensorBlackoutChallenge__are_equal(const ariac_msgs__msg__SensorBlackoutChallenge * lhs, const ariac_msgs__msg__SensorBlackoutChallenge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // condition
  if (!ariac_msgs__msg__ChallengeCondition__are_equal(
      &(lhs->condition), &(rhs->condition)))
  {
    return false;
  }
  // sensors_to_disable
  if (!ariac_msgs__msg__Sensors__are_equal(
      &(lhs->sensors_to_disable), &(rhs->sensors_to_disable)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__SensorBlackoutChallenge__copy(
  const ariac_msgs__msg__SensorBlackoutChallenge * input,
  ariac_msgs__msg__SensorBlackoutChallenge * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  output->duration = input->duration;
  // condition
  if (!ariac_msgs__msg__ChallengeCondition__copy(
      &(input->condition), &(output->condition)))
  {
    return false;
  }
  // sensors_to_disable
  if (!ariac_msgs__msg__Sensors__copy(
      &(input->sensors_to_disable), &(output->sensors_to_disable)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__SensorBlackoutChallenge *
ariac_msgs__msg__SensorBlackoutChallenge__create()
{
  ariac_msgs__msg__SensorBlackoutChallenge * msg = (ariac_msgs__msg__SensorBlackoutChallenge *)malloc(sizeof(ariac_msgs__msg__SensorBlackoutChallenge));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__SensorBlackoutChallenge));
  bool success = ariac_msgs__msg__SensorBlackoutChallenge__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__SensorBlackoutChallenge__destroy(ariac_msgs__msg__SensorBlackoutChallenge * msg)
{
  if (msg) {
    ariac_msgs__msg__SensorBlackoutChallenge__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__SensorBlackoutChallenge__Sequence__init(ariac_msgs__msg__SensorBlackoutChallenge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__SensorBlackoutChallenge * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__SensorBlackoutChallenge *)calloc(size, sizeof(ariac_msgs__msg__SensorBlackoutChallenge));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__SensorBlackoutChallenge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__SensorBlackoutChallenge__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ariac_msgs__msg__SensorBlackoutChallenge__Sequence__fini(ariac_msgs__msg__SensorBlackoutChallenge__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__SensorBlackoutChallenge__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ariac_msgs__msg__SensorBlackoutChallenge__Sequence *
ariac_msgs__msg__SensorBlackoutChallenge__Sequence__create(size_t size)
{
  ariac_msgs__msg__SensorBlackoutChallenge__Sequence * array = (ariac_msgs__msg__SensorBlackoutChallenge__Sequence *)malloc(sizeof(ariac_msgs__msg__SensorBlackoutChallenge__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__SensorBlackoutChallenge__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__SensorBlackoutChallenge__Sequence__destroy(ariac_msgs__msg__SensorBlackoutChallenge__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__SensorBlackoutChallenge__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__SensorBlackoutChallenge__Sequence__are_equal(const ariac_msgs__msg__SensorBlackoutChallenge__Sequence * lhs, const ariac_msgs__msg__SensorBlackoutChallenge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__SensorBlackoutChallenge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__SensorBlackoutChallenge__Sequence__copy(
  const ariac_msgs__msg__SensorBlackoutChallenge__Sequence * input,
  ariac_msgs__msg__SensorBlackoutChallenge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__SensorBlackoutChallenge);
    ariac_msgs__msg__SensorBlackoutChallenge * data =
      (ariac_msgs__msg__SensorBlackoutChallenge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__SensorBlackoutChallenge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__SensorBlackoutChallenge__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__SensorBlackoutChallenge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
