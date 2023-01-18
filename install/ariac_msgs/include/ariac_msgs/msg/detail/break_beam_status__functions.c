// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/BreakBeamStatus.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/break_beam_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ariac_msgs__msg__BreakBeamStatus__init(ariac_msgs__msg__BreakBeamStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ariac_msgs__msg__BreakBeamStatus__fini(msg);
    return false;
  }
  // object_detected
  return true;
}

void
ariac_msgs__msg__BreakBeamStatus__fini(ariac_msgs__msg__BreakBeamStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // object_detected
}

bool
ariac_msgs__msg__BreakBeamStatus__are_equal(const ariac_msgs__msg__BreakBeamStatus * lhs, const ariac_msgs__msg__BreakBeamStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // object_detected
  if (lhs->object_detected != rhs->object_detected) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__BreakBeamStatus__copy(
  const ariac_msgs__msg__BreakBeamStatus * input,
  ariac_msgs__msg__BreakBeamStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // object_detected
  output->object_detected = input->object_detected;
  return true;
}

ariac_msgs__msg__BreakBeamStatus *
ariac_msgs__msg__BreakBeamStatus__create()
{
  ariac_msgs__msg__BreakBeamStatus * msg = (ariac_msgs__msg__BreakBeamStatus *)malloc(sizeof(ariac_msgs__msg__BreakBeamStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__BreakBeamStatus));
  bool success = ariac_msgs__msg__BreakBeamStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__BreakBeamStatus__destroy(ariac_msgs__msg__BreakBeamStatus * msg)
{
  if (msg) {
    ariac_msgs__msg__BreakBeamStatus__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__BreakBeamStatus__Sequence__init(ariac_msgs__msg__BreakBeamStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__BreakBeamStatus * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__BreakBeamStatus *)calloc(size, sizeof(ariac_msgs__msg__BreakBeamStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__BreakBeamStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__BreakBeamStatus__fini(&data[i - 1]);
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
ariac_msgs__msg__BreakBeamStatus__Sequence__fini(ariac_msgs__msg__BreakBeamStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__BreakBeamStatus__fini(&array->data[i]);
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

ariac_msgs__msg__BreakBeamStatus__Sequence *
ariac_msgs__msg__BreakBeamStatus__Sequence__create(size_t size)
{
  ariac_msgs__msg__BreakBeamStatus__Sequence * array = (ariac_msgs__msg__BreakBeamStatus__Sequence *)malloc(sizeof(ariac_msgs__msg__BreakBeamStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__BreakBeamStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__BreakBeamStatus__Sequence__destroy(ariac_msgs__msg__BreakBeamStatus__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__BreakBeamStatus__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__BreakBeamStatus__Sequence__are_equal(const ariac_msgs__msg__BreakBeamStatus__Sequence * lhs, const ariac_msgs__msg__BreakBeamStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__BreakBeamStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__BreakBeamStatus__Sequence__copy(
  const ariac_msgs__msg__BreakBeamStatus__Sequence * input,
  ariac_msgs__msg__BreakBeamStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__BreakBeamStatus);
    ariac_msgs__msg__BreakBeamStatus * data =
      (ariac_msgs__msg__BreakBeamStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__BreakBeamStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__BreakBeamStatus__fini(&data[i]);
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
    if (!ariac_msgs__msg__BreakBeamStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
