// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/trial__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `orders`
#include "ariac_msgs/msg/detail/order__functions.h"
// Member `challenges`
#include "ariac_msgs/msg/detail/challenge__functions.h"

bool
ariac_msgs__msg__Trial__init(ariac_msgs__msg__Trial * msg)
{
  if (!msg) {
    return false;
  }
  // orders
  if (!ariac_msgs__msg__Order__Sequence__init(&msg->orders, 0)) {
    ariac_msgs__msg__Trial__fini(msg);
    return false;
  }
  // challenges
  if (!ariac_msgs__msg__Challenge__Sequence__init(&msg->challenges, 0)) {
    ariac_msgs__msg__Trial__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__Trial__fini(ariac_msgs__msg__Trial * msg)
{
  if (!msg) {
    return;
  }
  // orders
  ariac_msgs__msg__Order__Sequence__fini(&msg->orders);
  // challenges
  ariac_msgs__msg__Challenge__Sequence__fini(&msg->challenges);
}

bool
ariac_msgs__msg__Trial__are_equal(const ariac_msgs__msg__Trial * lhs, const ariac_msgs__msg__Trial * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // orders
  if (!ariac_msgs__msg__Order__Sequence__are_equal(
      &(lhs->orders), &(rhs->orders)))
  {
    return false;
  }
  // challenges
  if (!ariac_msgs__msg__Challenge__Sequence__are_equal(
      &(lhs->challenges), &(rhs->challenges)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Trial__copy(
  const ariac_msgs__msg__Trial * input,
  ariac_msgs__msg__Trial * output)
{
  if (!input || !output) {
    return false;
  }
  // orders
  if (!ariac_msgs__msg__Order__Sequence__copy(
      &(input->orders), &(output->orders)))
  {
    return false;
  }
  // challenges
  if (!ariac_msgs__msg__Challenge__Sequence__copy(
      &(input->challenges), &(output->challenges)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__Trial *
ariac_msgs__msg__Trial__create()
{
  ariac_msgs__msg__Trial * msg = (ariac_msgs__msg__Trial *)malloc(sizeof(ariac_msgs__msg__Trial));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Trial));
  bool success = ariac_msgs__msg__Trial__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Trial__destroy(ariac_msgs__msg__Trial * msg)
{
  if (msg) {
    ariac_msgs__msg__Trial__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__Trial__Sequence__init(ariac_msgs__msg__Trial__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__Trial * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__Trial *)calloc(size, sizeof(ariac_msgs__msg__Trial));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Trial__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Trial__fini(&data[i - 1]);
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
ariac_msgs__msg__Trial__Sequence__fini(ariac_msgs__msg__Trial__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__Trial__fini(&array->data[i]);
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

ariac_msgs__msg__Trial__Sequence *
ariac_msgs__msg__Trial__Sequence__create(size_t size)
{
  ariac_msgs__msg__Trial__Sequence * array = (ariac_msgs__msg__Trial__Sequence *)malloc(sizeof(ariac_msgs__msg__Trial__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Trial__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Trial__Sequence__destroy(ariac_msgs__msg__Trial__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__Trial__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__Trial__Sequence__are_equal(const ariac_msgs__msg__Trial__Sequence * lhs, const ariac_msgs__msg__Trial__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Trial__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Trial__Sequence__copy(
  const ariac_msgs__msg__Trial__Sequence * input,
  ariac_msgs__msg__Trial__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Trial);
    ariac_msgs__msg__Trial * data =
      (ariac_msgs__msg__Trial *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Trial__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Trial__fini(&data[i]);
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
    if (!ariac_msgs__msg__Trial__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
