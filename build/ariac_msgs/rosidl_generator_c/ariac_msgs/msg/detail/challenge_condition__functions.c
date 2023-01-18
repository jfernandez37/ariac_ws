// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/ChallengeCondition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge_condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_condition`
#include "ariac_msgs/msg/detail/time_condition__functions.h"
// Member `part_place_condition`
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"

bool
ariac_msgs__msg__ChallengeCondition__init(ariac_msgs__msg__ChallengeCondition * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ariac_msgs__msg__ChallengeCondition__fini(msg);
    return false;
  }
  // time_condition
  if (!ariac_msgs__msg__TimeCondition__init(&msg->time_condition)) {
    ariac_msgs__msg__ChallengeCondition__fini(msg);
    return false;
  }
  // part_place_condition
  if (!ariac_msgs__msg__PartPlaceCondition__init(&msg->part_place_condition)) {
    ariac_msgs__msg__ChallengeCondition__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__ChallengeCondition__fini(ariac_msgs__msg__ChallengeCondition * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // time_condition
  ariac_msgs__msg__TimeCondition__fini(&msg->time_condition);
  // part_place_condition
  ariac_msgs__msg__PartPlaceCondition__fini(&msg->part_place_condition);
}

bool
ariac_msgs__msg__ChallengeCondition__are_equal(const ariac_msgs__msg__ChallengeCondition * lhs, const ariac_msgs__msg__ChallengeCondition * rhs)
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
  // time_condition
  if (!ariac_msgs__msg__TimeCondition__are_equal(
      &(lhs->time_condition), &(rhs->time_condition)))
  {
    return false;
  }
  // part_place_condition
  if (!ariac_msgs__msg__PartPlaceCondition__are_equal(
      &(lhs->part_place_condition), &(rhs->part_place_condition)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__ChallengeCondition__copy(
  const ariac_msgs__msg__ChallengeCondition * input,
  ariac_msgs__msg__ChallengeCondition * output)
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
  // time_condition
  if (!ariac_msgs__msg__TimeCondition__copy(
      &(input->time_condition), &(output->time_condition)))
  {
    return false;
  }
  // part_place_condition
  if (!ariac_msgs__msg__PartPlaceCondition__copy(
      &(input->part_place_condition), &(output->part_place_condition)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__ChallengeCondition *
ariac_msgs__msg__ChallengeCondition__create()
{
  ariac_msgs__msg__ChallengeCondition * msg = (ariac_msgs__msg__ChallengeCondition *)malloc(sizeof(ariac_msgs__msg__ChallengeCondition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__ChallengeCondition));
  bool success = ariac_msgs__msg__ChallengeCondition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__ChallengeCondition__destroy(ariac_msgs__msg__ChallengeCondition * msg)
{
  if (msg) {
    ariac_msgs__msg__ChallengeCondition__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__ChallengeCondition__Sequence__init(ariac_msgs__msg__ChallengeCondition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__ChallengeCondition * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__ChallengeCondition *)calloc(size, sizeof(ariac_msgs__msg__ChallengeCondition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__ChallengeCondition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__ChallengeCondition__fini(&data[i - 1]);
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
ariac_msgs__msg__ChallengeCondition__Sequence__fini(ariac_msgs__msg__ChallengeCondition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__ChallengeCondition__fini(&array->data[i]);
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

ariac_msgs__msg__ChallengeCondition__Sequence *
ariac_msgs__msg__ChallengeCondition__Sequence__create(size_t size)
{
  ariac_msgs__msg__ChallengeCondition__Sequence * array = (ariac_msgs__msg__ChallengeCondition__Sequence *)malloc(sizeof(ariac_msgs__msg__ChallengeCondition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__ChallengeCondition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__ChallengeCondition__Sequence__destroy(ariac_msgs__msg__ChallengeCondition__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__ChallengeCondition__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__ChallengeCondition__Sequence__are_equal(const ariac_msgs__msg__ChallengeCondition__Sequence * lhs, const ariac_msgs__msg__ChallengeCondition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__ChallengeCondition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__ChallengeCondition__Sequence__copy(
  const ariac_msgs__msg__ChallengeCondition__Sequence * input,
  ariac_msgs__msg__ChallengeCondition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__ChallengeCondition);
    ariac_msgs__msg__ChallengeCondition * data =
      (ariac_msgs__msg__ChallengeCondition *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__ChallengeCondition__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__ChallengeCondition__fini(&data[i]);
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
    if (!ariac_msgs__msg__ChallengeCondition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
