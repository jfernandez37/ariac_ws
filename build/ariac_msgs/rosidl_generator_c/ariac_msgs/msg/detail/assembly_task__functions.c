// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/assembly_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `agv_numbers`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `parts`
#include "ariac_msgs/msg/detail/assembly_part__functions.h"

bool
ariac_msgs__msg__AssemblyTask__init(ariac_msgs__msg__AssemblyTask * msg)
{
  if (!msg) {
    return false;
  }
  // agv_numbers
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->agv_numbers, 0)) {
    ariac_msgs__msg__AssemblyTask__fini(msg);
    return false;
  }
  // station
  // parts
  if (!ariac_msgs__msg__AssemblyPart__Sequence__init(&msg->parts, 0)) {
    ariac_msgs__msg__AssemblyTask__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__AssemblyTask__fini(ariac_msgs__msg__AssemblyTask * msg)
{
  if (!msg) {
    return;
  }
  // agv_numbers
  rosidl_runtime_c__uint8__Sequence__fini(&msg->agv_numbers);
  // station
  // parts
  ariac_msgs__msg__AssemblyPart__Sequence__fini(&msg->parts);
}

bool
ariac_msgs__msg__AssemblyTask__are_equal(const ariac_msgs__msg__AssemblyTask * lhs, const ariac_msgs__msg__AssemblyTask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agv_numbers
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->agv_numbers), &(rhs->agv_numbers)))
  {
    return false;
  }
  // station
  if (lhs->station != rhs->station) {
    return false;
  }
  // parts
  if (!ariac_msgs__msg__AssemblyPart__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__AssemblyTask__copy(
  const ariac_msgs__msg__AssemblyTask * input,
  ariac_msgs__msg__AssemblyTask * output)
{
  if (!input || !output) {
    return false;
  }
  // agv_numbers
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->agv_numbers), &(output->agv_numbers)))
  {
    return false;
  }
  // station
  output->station = input->station;
  // parts
  if (!ariac_msgs__msg__AssemblyPart__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__AssemblyTask *
ariac_msgs__msg__AssemblyTask__create()
{
  ariac_msgs__msg__AssemblyTask * msg = (ariac_msgs__msg__AssemblyTask *)malloc(sizeof(ariac_msgs__msg__AssemblyTask));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__AssemblyTask));
  bool success = ariac_msgs__msg__AssemblyTask__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__AssemblyTask__destroy(ariac_msgs__msg__AssemblyTask * msg)
{
  if (msg) {
    ariac_msgs__msg__AssemblyTask__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__AssemblyTask__Sequence__init(ariac_msgs__msg__AssemblyTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__AssemblyTask * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__AssemblyTask *)calloc(size, sizeof(ariac_msgs__msg__AssemblyTask));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__AssemblyTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__AssemblyTask__fini(&data[i - 1]);
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
ariac_msgs__msg__AssemblyTask__Sequence__fini(ariac_msgs__msg__AssemblyTask__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__AssemblyTask__fini(&array->data[i]);
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

ariac_msgs__msg__AssemblyTask__Sequence *
ariac_msgs__msg__AssemblyTask__Sequence__create(size_t size)
{
  ariac_msgs__msg__AssemblyTask__Sequence * array = (ariac_msgs__msg__AssemblyTask__Sequence *)malloc(sizeof(ariac_msgs__msg__AssemblyTask__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__AssemblyTask__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__AssemblyTask__Sequence__destroy(ariac_msgs__msg__AssemblyTask__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__AssemblyTask__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__AssemblyTask__Sequence__are_equal(const ariac_msgs__msg__AssemblyTask__Sequence * lhs, const ariac_msgs__msg__AssemblyTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__AssemblyTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__AssemblyTask__Sequence__copy(
  const ariac_msgs__msg__AssemblyTask__Sequence * input,
  ariac_msgs__msg__AssemblyTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__AssemblyTask);
    ariac_msgs__msg__AssemblyTask * data =
      (ariac_msgs__msg__AssemblyTask *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__AssemblyTask__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__AssemblyTask__fini(&data[i]);
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
    if (!ariac_msgs__msg__AssemblyTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
