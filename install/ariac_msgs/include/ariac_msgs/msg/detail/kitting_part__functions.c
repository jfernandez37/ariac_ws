// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/KittingPart.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/kitting_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `part`
#include "ariac_msgs/msg/detail/part__functions.h"

bool
ariac_msgs__msg__KittingPart__init(ariac_msgs__msg__KittingPart * msg)
{
  if (!msg) {
    return false;
  }
  // part
  if (!ariac_msgs__msg__Part__init(&msg->part)) {
    ariac_msgs__msg__KittingPart__fini(msg);
    return false;
  }
  // quadrant
  return true;
}

void
ariac_msgs__msg__KittingPart__fini(ariac_msgs__msg__KittingPart * msg)
{
  if (!msg) {
    return;
  }
  // part
  ariac_msgs__msg__Part__fini(&msg->part);
  // quadrant
}

bool
ariac_msgs__msg__KittingPart__are_equal(const ariac_msgs__msg__KittingPart * lhs, const ariac_msgs__msg__KittingPart * rhs)
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
  // quadrant
  if (lhs->quadrant != rhs->quadrant) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__KittingPart__copy(
  const ariac_msgs__msg__KittingPart * input,
  ariac_msgs__msg__KittingPart * output)
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
  // quadrant
  output->quadrant = input->quadrant;
  return true;
}

ariac_msgs__msg__KittingPart *
ariac_msgs__msg__KittingPart__create()
{
  ariac_msgs__msg__KittingPart * msg = (ariac_msgs__msg__KittingPart *)malloc(sizeof(ariac_msgs__msg__KittingPart));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__KittingPart));
  bool success = ariac_msgs__msg__KittingPart__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__KittingPart__destroy(ariac_msgs__msg__KittingPart * msg)
{
  if (msg) {
    ariac_msgs__msg__KittingPart__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__KittingPart__Sequence__init(ariac_msgs__msg__KittingPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__KittingPart * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__KittingPart *)calloc(size, sizeof(ariac_msgs__msg__KittingPart));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__KittingPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__KittingPart__fini(&data[i - 1]);
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
ariac_msgs__msg__KittingPart__Sequence__fini(ariac_msgs__msg__KittingPart__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__KittingPart__fini(&array->data[i]);
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

ariac_msgs__msg__KittingPart__Sequence *
ariac_msgs__msg__KittingPart__Sequence__create(size_t size)
{
  ariac_msgs__msg__KittingPart__Sequence * array = (ariac_msgs__msg__KittingPart__Sequence *)malloc(sizeof(ariac_msgs__msg__KittingPart__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__KittingPart__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__KittingPart__Sequence__destroy(ariac_msgs__msg__KittingPart__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__KittingPart__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__KittingPart__Sequence__are_equal(const ariac_msgs__msg__KittingPart__Sequence * lhs, const ariac_msgs__msg__KittingPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__KittingPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__KittingPart__Sequence__copy(
  const ariac_msgs__msg__KittingPart__Sequence * input,
  ariac_msgs__msg__KittingPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__KittingPart);
    ariac_msgs__msg__KittingPart * data =
      (ariac_msgs__msg__KittingPart *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__KittingPart__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__KittingPart__fini(&data[i]);
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
    if (!ariac_msgs__msg__KittingPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
