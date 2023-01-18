// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `part`
#include "ariac_msgs/msg/detail/part__functions.h"
// Member `agv`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__msg__PartPlaceCondition__init(ariac_msgs__msg__PartPlaceCondition * msg)
{
  if (!msg) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__init(&msg->part)) {
    ariac_msgs__msg__PartPlaceCondition__fini(msg);
    return false;
  }
  // agv
  if (!rosidl_runtime_c__String__init(&msg->agv)) {
    ariac_msgs__msg__PartPlaceCondition__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__PartPlaceCondition__fini(ariac_msgs__msg__PartPlaceCondition * msg)
{
  if (!msg) {
    return;
  }
  // part
  ariac_msgs__msg__Part__fini(&msg->part);
  // agv
  rosidl_runtime_c__String__fini(&msg->agv);
}

bool
ariac_msgs__msg__PartPlaceCondition__are_equal(const ariac_msgs__msg__PartPlaceCondition * lhs, const ariac_msgs__msg__PartPlaceCondition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__are_equal(
      &(lhs->part), &(rhs->part)))
  {
    return false;
  }
  // agv
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->agv), &(rhs->agv)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__PartPlaceCondition__copy(
  const ariac_msgs__msg__PartPlaceCondition * input,
  ariac_msgs__msg__PartPlaceCondition * output)
{
  if (!input || !output) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__copy(
      &(input->part), &(output->part)))
  {
    return false;
  }
  // agv
  if (!rosidl_runtime_c__String__copy(
      &(input->agv), &(output->agv)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__PartPlaceCondition *
ariac_msgs__msg__PartPlaceCondition__create()
{
  ariac_msgs__msg__PartPlaceCondition * msg = (ariac_msgs__msg__PartPlaceCondition *)malloc(sizeof(ariac_msgs__msg__PartPlaceCondition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__PartPlaceCondition));
  bool success = ariac_msgs__msg__PartPlaceCondition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__PartPlaceCondition__destroy(ariac_msgs__msg__PartPlaceCondition * msg)
{
  if (msg) {
    ariac_msgs__msg__PartPlaceCondition__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__PartPlaceCondition__Sequence__init(ariac_msgs__msg__PartPlaceCondition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__PartPlaceCondition * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__PartPlaceCondition *)calloc(size, sizeof(ariac_msgs__msg__PartPlaceCondition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__PartPlaceCondition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__PartPlaceCondition__fini(&data[i - 1]);
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
ariac_msgs__msg__PartPlaceCondition__Sequence__fini(ariac_msgs__msg__PartPlaceCondition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__PartPlaceCondition__fini(&array->data[i]);
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

ariac_msgs__msg__PartPlaceCondition__Sequence *
ariac_msgs__msg__PartPlaceCondition__Sequence__create(size_t size)
{
  ariac_msgs__msg__PartPlaceCondition__Sequence * array = (ariac_msgs__msg__PartPlaceCondition__Sequence *)malloc(sizeof(ariac_msgs__msg__PartPlaceCondition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__PartPlaceCondition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__PartPlaceCondition__Sequence__destroy(ariac_msgs__msg__PartPlaceCondition__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__PartPlaceCondition__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__PartPlaceCondition__Sequence__are_equal(const ariac_msgs__msg__PartPlaceCondition__Sequence * lhs, const ariac_msgs__msg__PartPlaceCondition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__PartPlaceCondition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__PartPlaceCondition__Sequence__copy(
  const ariac_msgs__msg__PartPlaceCondition__Sequence * input,
  ariac_msgs__msg__PartPlaceCondition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__PartPlaceCondition);
    ariac_msgs__msg__PartPlaceCondition * data =
      (ariac_msgs__msg__PartPlaceCondition *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__PartPlaceCondition__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__PartPlaceCondition__fini(&data[i]);
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
    if (!ariac_msgs__msg__PartPlaceCondition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
