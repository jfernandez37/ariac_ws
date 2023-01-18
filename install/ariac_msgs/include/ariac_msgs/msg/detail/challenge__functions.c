// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `faulty_part_challenge`
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"
// Member `dropped_part_challenge`
#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"
// Member `sensor_blackout_challenge`
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"
// Member `robot_malfunction_challenge`
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"

bool
ariac_msgs__msg__Challenge__init(ariac_msgs__msg__Challenge * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // faulty_part_challenge
  if (!ariac_msgs__msg__FaultyPartChallenge__init(&msg->faulty_part_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // dropped_part_challenge
  if (!ariac_msgs__msg__DroppedPartChallenge__init(&msg->dropped_part_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // sensor_blackout_challenge
  if (!ariac_msgs__msg__SensorBlackoutChallenge__init(&msg->sensor_blackout_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // robot_malfunction_challenge
  if (!ariac_msgs__msg__RobotMalfunctionChallenge__init(&msg->robot_malfunction_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__Challenge__fini(ariac_msgs__msg__Challenge * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // faulty_part_challenge
  ariac_msgs__msg__FaultyPartChallenge__fini(&msg->faulty_part_challenge);
  // dropped_part_challenge
  ariac_msgs__msg__DroppedPartChallenge__fini(&msg->dropped_part_challenge);
  // sensor_blackout_challenge
  ariac_msgs__msg__SensorBlackoutChallenge__fini(&msg->sensor_blackout_challenge);
  // robot_malfunction_challenge
  ariac_msgs__msg__RobotMalfunctionChallenge__fini(&msg->robot_malfunction_challenge);
}

bool
ariac_msgs__msg__Challenge__are_equal(const ariac_msgs__msg__Challenge * lhs, const ariac_msgs__msg__Challenge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // faulty_part_challenge
  if (!ariac_msgs__msg__FaultyPartChallenge__are_equal(
      &(lhs->faulty_part_challenge), &(rhs->faulty_part_challenge)))
  {
    return false;
  }
  // dropped_part_challenge
  if (!ariac_msgs__msg__DroppedPartChallenge__are_equal(
      &(lhs->dropped_part_challenge), &(rhs->dropped_part_challenge)))
  {
    return false;
  }
  // sensor_blackout_challenge
  if (!ariac_msgs__msg__SensorBlackoutChallenge__are_equal(
      &(lhs->sensor_blackout_challenge), &(rhs->sensor_blackout_challenge)))
  {
    return false;
  }
  // robot_malfunction_challenge
  if (!ariac_msgs__msg__RobotMalfunctionChallenge__are_equal(
      &(lhs->robot_malfunction_challenge), &(rhs->robot_malfunction_challenge)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Challenge__copy(
  const ariac_msgs__msg__Challenge * input,
  ariac_msgs__msg__Challenge * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // faulty_part_challenge
  if (!ariac_msgs__msg__FaultyPartChallenge__copy(
      &(input->faulty_part_challenge), &(output->faulty_part_challenge)))
  {
    return false;
  }
  // dropped_part_challenge
  if (!ariac_msgs__msg__DroppedPartChallenge__copy(
      &(input->dropped_part_challenge), &(output->dropped_part_challenge)))
  {
    return false;
  }
  // sensor_blackout_challenge
  if (!ariac_msgs__msg__SensorBlackoutChallenge__copy(
      &(input->sensor_blackout_challenge), &(output->sensor_blackout_challenge)))
  {
    return false;
  }
  // robot_malfunction_challenge
  if (!ariac_msgs__msg__RobotMalfunctionChallenge__copy(
      &(input->robot_malfunction_challenge), &(output->robot_malfunction_challenge)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__Challenge *
ariac_msgs__msg__Challenge__create()
{
  ariac_msgs__msg__Challenge * msg = (ariac_msgs__msg__Challenge *)malloc(sizeof(ariac_msgs__msg__Challenge));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Challenge));
  bool success = ariac_msgs__msg__Challenge__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Challenge__destroy(ariac_msgs__msg__Challenge * msg)
{
  if (msg) {
    ariac_msgs__msg__Challenge__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__Challenge__Sequence__init(ariac_msgs__msg__Challenge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__Challenge * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__Challenge *)calloc(size, sizeof(ariac_msgs__msg__Challenge));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Challenge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Challenge__fini(&data[i - 1]);
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
ariac_msgs__msg__Challenge__Sequence__fini(ariac_msgs__msg__Challenge__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__Challenge__fini(&array->data[i]);
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

ariac_msgs__msg__Challenge__Sequence *
ariac_msgs__msg__Challenge__Sequence__create(size_t size)
{
  ariac_msgs__msg__Challenge__Sequence * array = (ariac_msgs__msg__Challenge__Sequence *)malloc(sizeof(ariac_msgs__msg__Challenge__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Challenge__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Challenge__Sequence__destroy(ariac_msgs__msg__Challenge__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__Challenge__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__Challenge__Sequence__are_equal(const ariac_msgs__msg__Challenge__Sequence * lhs, const ariac_msgs__msg__Challenge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Challenge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Challenge__Sequence__copy(
  const ariac_msgs__msg__Challenge__Sequence * input,
  ariac_msgs__msg__Challenge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Challenge);
    ariac_msgs__msg__Challenge * data =
      (ariac_msgs__msg__Challenge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Challenge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Challenge__fini(&data[i]);
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
    if (!ariac_msgs__msg__Challenge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
