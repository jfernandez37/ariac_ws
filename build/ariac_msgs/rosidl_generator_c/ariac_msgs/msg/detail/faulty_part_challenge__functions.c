// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__msg__FaultyPartChallenge__init(ariac_msgs__msg__FaultyPartChallenge * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    ariac_msgs__msg__FaultyPartChallenge__fini(msg);
    return false;
  }
  // quandrant1
  // quandrant2
  // quandrant3
  // quandrant4
  return true;
}

void
ariac_msgs__msg__FaultyPartChallenge__fini(ariac_msgs__msg__FaultyPartChallenge * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
  // quandrant1
  // quandrant2
  // quandrant3
  // quandrant4
}

bool
ariac_msgs__msg__FaultyPartChallenge__are_equal(const ariac_msgs__msg__FaultyPartChallenge * lhs, const ariac_msgs__msg__FaultyPartChallenge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  // quandrant1
  if (lhs->quandrant1 != rhs->quandrant1) {
    return false;
  }
  // quandrant2
  if (lhs->quandrant2 != rhs->quandrant2) {
    return false;
  }
  // quandrant3
  if (lhs->quandrant3 != rhs->quandrant3) {
    return false;
  }
  // quandrant4
  if (lhs->quandrant4 != rhs->quandrant4) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__FaultyPartChallenge__copy(
  const ariac_msgs__msg__FaultyPartChallenge * input,
  ariac_msgs__msg__FaultyPartChallenge * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  // quandrant1
  output->quandrant1 = input->quandrant1;
  // quandrant2
  output->quandrant2 = input->quandrant2;
  // quandrant3
  output->quandrant3 = input->quandrant3;
  // quandrant4
  output->quandrant4 = input->quandrant4;
  return true;
}

ariac_msgs__msg__FaultyPartChallenge *
ariac_msgs__msg__FaultyPartChallenge__create()
{
  ariac_msgs__msg__FaultyPartChallenge * msg = (ariac_msgs__msg__FaultyPartChallenge *)malloc(sizeof(ariac_msgs__msg__FaultyPartChallenge));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__FaultyPartChallenge));
  bool success = ariac_msgs__msg__FaultyPartChallenge__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__FaultyPartChallenge__destroy(ariac_msgs__msg__FaultyPartChallenge * msg)
{
  if (msg) {
    ariac_msgs__msg__FaultyPartChallenge__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__FaultyPartChallenge__Sequence__init(ariac_msgs__msg__FaultyPartChallenge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__FaultyPartChallenge * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__FaultyPartChallenge *)calloc(size, sizeof(ariac_msgs__msg__FaultyPartChallenge));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__FaultyPartChallenge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__FaultyPartChallenge__fini(&data[i - 1]);
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
ariac_msgs__msg__FaultyPartChallenge__Sequence__fini(ariac_msgs__msg__FaultyPartChallenge__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__FaultyPartChallenge__fini(&array->data[i]);
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

ariac_msgs__msg__FaultyPartChallenge__Sequence *
ariac_msgs__msg__FaultyPartChallenge__Sequence__create(size_t size)
{
  ariac_msgs__msg__FaultyPartChallenge__Sequence * array = (ariac_msgs__msg__FaultyPartChallenge__Sequence *)malloc(sizeof(ariac_msgs__msg__FaultyPartChallenge__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__FaultyPartChallenge__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__FaultyPartChallenge__Sequence__destroy(ariac_msgs__msg__FaultyPartChallenge__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__FaultyPartChallenge__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__FaultyPartChallenge__Sequence__are_equal(const ariac_msgs__msg__FaultyPartChallenge__Sequence * lhs, const ariac_msgs__msg__FaultyPartChallenge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__FaultyPartChallenge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__FaultyPartChallenge__Sequence__copy(
  const ariac_msgs__msg__FaultyPartChallenge__Sequence * input,
  ariac_msgs__msg__FaultyPartChallenge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__FaultyPartChallenge);
    ariac_msgs__msg__FaultyPartChallenge * data =
      (ariac_msgs__msg__FaultyPartChallenge *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__FaultyPartChallenge__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__FaultyPartChallenge__fini(&data[i]);
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
    if (!ariac_msgs__msg__FaultyPartChallenge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
