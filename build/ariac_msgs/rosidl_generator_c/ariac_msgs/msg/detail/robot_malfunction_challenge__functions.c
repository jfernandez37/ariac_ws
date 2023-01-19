// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `condition`
#include "ariac_msgs/msg/detail/condition__functions.h"
// Member `robots_to_disable`
#include "ariac_msgs/msg/detail/robots__functions.h"

bool
ariac_msgs__msg__RobotMalfunctionChallenge__init(ariac_msgs__msg__RobotMalfunctionChallenge * msg)
{
  if (!msg) {
    return false;
  }
  // duration
  // condition
  if (!ariac_msgs__msg__Condition__init(&msg->condition)) {
    ariac_msgs__msg__RobotMalfunctionChallenge__fini(msg);
    return false;
  }
  // robots_to_disable
  if (!ariac_msgs__msg__Robots__init(&msg->robots_to_disable)) {
    ariac_msgs__msg__RobotMalfunctionChallenge__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__RobotMalfunctionChallenge__fini(ariac_msgs__msg__RobotMalfunctionChallenge * msg)
{
  if (!msg) {
    return;
  }
  // duration
  // condition
  ariac_msgs__msg__Condition__fini(&msg->condition);
  // robots_to_disable
  ariac_msgs__msg__Robots__fini(&msg->robots_to_disable);
}

bool
ariac_msgs__msg__RobotMalfunctionChallenge__are_equal(const ariac_msgs__msg__RobotMalfunctionChallenge * lhs, const ariac_msgs__msg__RobotMalfunctionChallenge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  // condition
  if (!ariac_msgs__msg__Condition__are_equal(
      &(lhs->condition), &(rhs->condition)))
  {
    return false;
  }
  // robots_to_disable
  if (!ariac_msgs__msg__Robots__are_equal(
      &(lhs->robots_to_disable), &(rhs->robots_to_disable)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__RobotMalfunctionChallenge__copy(
  const ariac_msgs__msg__RobotMalfunctionChallenge * input,
  ariac_msgs__msg__RobotMalfunctionChallenge * output)
{
  if (!input || !output) {
    return false;
  }
  // duration
  output->duration = input->duration;
  // condition
  if (!ariac_msgs__msg__Condition__copy(
      &(input->condition), &(output->condition)))
  {
    return false;
  }
  // robots_to_disable
  if (!ariac_msgs__msg__Robots__copy(
      &(input->robots_to_disable), &(output->robots_to_disable)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__RobotMalfunctionChallenge *
ariac_msgs__msg__RobotMalfunctionChallenge__create()
{
  ariac_msgs__msg__RobotMalfunctionChallenge * msg = (ariac_msgs__msg__RobotMalfunctionChallenge *)malloc(sizeof(ariac_msgs__msg__RobotMalfunctionChallenge));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__RobotMalfunctionChallenge));
  bool success = ariac_msgs__msg__RobotMalfunctionChallenge__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__RobotMalfunctionChallenge__destroy(ariac_msgs__msg__RobotMalfunctionChallenge * msg)
{
  if (msg) {
    ariac_msgs__msg__RobotMalfunctionChallenge__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__init(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__RobotMalfunctionChallenge * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__RobotMalfunctionChallenge *)calloc(size, sizeof(ariac_msgs__msg__RobotMalfunctionChallenge));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__RobotMalfunctionChallenge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__RobotMalfunctionChallenge__fini(&data[i - 1]);
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
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__fini(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__RobotMalfunctionChallenge__fini(&array->data[i]);
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

ariac_msgs__msg__RobotMalfunctionChallenge__Sequence *
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__create(size_t size)
{
  ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array = (ariac_msgs__msg__RobotMalfunctionChallenge__Sequence *)malloc(sizeof(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__destroy(ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__are_equal(const ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * lhs, const ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__RobotMalfunctionChallenge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__RobotMalfunctionChallenge__Sequence__copy(
  const ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * input,
  ariac_msgs__msg__RobotMalfunctionChallenge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__RobotMalfunctionChallenge);
    ariac_msgs__msg__RobotMalfunctionChallenge * data =
      (ariac_msgs__msg__RobotMalfunctionChallenge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__RobotMalfunctionChallenge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__RobotMalfunctionChallenge__fini(&data[i]);
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
    if (!ariac_msgs__msg__RobotMalfunctionChallenge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
