// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/bin_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/detail/part_lot__functions.h"

bool
ariac_msgs__msg__BinInfo__init(ariac_msgs__msg__BinInfo * msg)
{
  if (!msg) {
    return false;
  }
  // bin_number
  // parts
  if (!ariac_msgs__msg__PartLot__Sequence__init(&msg->parts, 0)) {
    ariac_msgs__msg__BinInfo__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__BinInfo__fini(ariac_msgs__msg__BinInfo * msg)
{
  if (!msg) {
    return;
  }
  // bin_number
  // parts
  ariac_msgs__msg__PartLot__Sequence__fini(&msg->parts);
}

bool
ariac_msgs__msg__BinInfo__are_equal(const ariac_msgs__msg__BinInfo * lhs, const ariac_msgs__msg__BinInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bin_number
  if (lhs->bin_number != rhs->bin_number) {
    return false;
  }
  // parts
  if (!ariac_msgs__msg__PartLot__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__BinInfo__copy(
  const ariac_msgs__msg__BinInfo * input,
  ariac_msgs__msg__BinInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // bin_number
  output->bin_number = input->bin_number;
  // parts
  if (!ariac_msgs__msg__PartLot__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__BinInfo *
ariac_msgs__msg__BinInfo__create()
{
  ariac_msgs__msg__BinInfo * msg = (ariac_msgs__msg__BinInfo *)malloc(sizeof(ariac_msgs__msg__BinInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__BinInfo));
  bool success = ariac_msgs__msg__BinInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__BinInfo__destroy(ariac_msgs__msg__BinInfo * msg)
{
  if (msg) {
    ariac_msgs__msg__BinInfo__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__BinInfo__Sequence__init(ariac_msgs__msg__BinInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__BinInfo * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__BinInfo *)calloc(size, sizeof(ariac_msgs__msg__BinInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__BinInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__BinInfo__fini(&data[i - 1]);
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
ariac_msgs__msg__BinInfo__Sequence__fini(ariac_msgs__msg__BinInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__BinInfo__fini(&array->data[i]);
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

ariac_msgs__msg__BinInfo__Sequence *
ariac_msgs__msg__BinInfo__Sequence__create(size_t size)
{
  ariac_msgs__msg__BinInfo__Sequence * array = (ariac_msgs__msg__BinInfo__Sequence *)malloc(sizeof(ariac_msgs__msg__BinInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__BinInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__BinInfo__Sequence__destroy(ariac_msgs__msg__BinInfo__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__BinInfo__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__BinInfo__Sequence__are_equal(const ariac_msgs__msg__BinInfo__Sequence * lhs, const ariac_msgs__msg__BinInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__BinInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__BinInfo__Sequence__copy(
  const ariac_msgs__msg__BinInfo__Sequence * input,
  ariac_msgs__msg__BinInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__BinInfo);
    ariac_msgs__msg__BinInfo * data =
      (ariac_msgs__msg__BinInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__BinInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__BinInfo__fini(&data[i]);
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
    if (!ariac_msgs__msg__BinInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
