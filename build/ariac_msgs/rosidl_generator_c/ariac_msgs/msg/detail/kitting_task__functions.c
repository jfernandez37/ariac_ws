// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/KittingTask.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/kitting_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/detail/kitting_part__functions.h"

bool
ariac_msgs__msg__KittingTask__init(ariac_msgs__msg__KittingTask * msg)
{
  if (!msg) {
    return false;
  }
  // agv_number
  // tray_id
  // destination
  // parts
  if (!ariac_msgs__msg__KittingPart__Sequence__init(&msg->parts, 0)) {
    ariac_msgs__msg__KittingTask__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__KittingTask__fini(ariac_msgs__msg__KittingTask * msg)
{
  if (!msg) {
    return;
  }
  // agv_number
  // tray_id
  // destination
  // parts
  ariac_msgs__msg__KittingPart__Sequence__fini(&msg->parts);
}

bool
ariac_msgs__msg__KittingTask__are_equal(const ariac_msgs__msg__KittingTask * lhs, const ariac_msgs__msg__KittingTask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agv_number
  if (lhs->agv_number != rhs->agv_number) {
    return false;
  }
  // tray_id
  if (lhs->tray_id != rhs->tray_id) {
    return false;
  }
  // destination
  if (lhs->destination != rhs->destination) {
    return false;
  }
  // parts
  if (!ariac_msgs__msg__KittingPart__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__KittingTask__copy(
  const ariac_msgs__msg__KittingTask * input,
  ariac_msgs__msg__KittingTask * output)
{
  if (!input || !output) {
    return false;
  }
  // agv_number
  output->agv_number = input->agv_number;
  // tray_id
  output->tray_id = input->tray_id;
  // destination
  output->destination = input->destination;
  // parts
  if (!ariac_msgs__msg__KittingPart__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__KittingTask *
ariac_msgs__msg__KittingTask__create()
{
  ariac_msgs__msg__KittingTask * msg = (ariac_msgs__msg__KittingTask *)malloc(sizeof(ariac_msgs__msg__KittingTask));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__KittingTask));
  bool success = ariac_msgs__msg__KittingTask__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__KittingTask__destroy(ariac_msgs__msg__KittingTask * msg)
{
  if (msg) {
    ariac_msgs__msg__KittingTask__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__KittingTask__Sequence__init(ariac_msgs__msg__KittingTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__KittingTask * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__KittingTask *)calloc(size, sizeof(ariac_msgs__msg__KittingTask));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__KittingTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__KittingTask__fini(&data[i - 1]);
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
ariac_msgs__msg__KittingTask__Sequence__fini(ariac_msgs__msg__KittingTask__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__KittingTask__fini(&array->data[i]);
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

ariac_msgs__msg__KittingTask__Sequence *
ariac_msgs__msg__KittingTask__Sequence__create(size_t size)
{
  ariac_msgs__msg__KittingTask__Sequence * array = (ariac_msgs__msg__KittingTask__Sequence *)malloc(sizeof(ariac_msgs__msg__KittingTask__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__KittingTask__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__KittingTask__Sequence__destroy(ariac_msgs__msg__KittingTask__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__KittingTask__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__KittingTask__Sequence__are_equal(const ariac_msgs__msg__KittingTask__Sequence * lhs, const ariac_msgs__msg__KittingTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__KittingTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__KittingTask__Sequence__copy(
  const ariac_msgs__msg__KittingTask__Sequence * input,
  ariac_msgs__msg__KittingTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__KittingTask);
    ariac_msgs__msg__KittingTask * data =
      (ariac_msgs__msg__KittingTask *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__KittingTask__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__KittingTask__fini(&data[i]);
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
    if (!ariac_msgs__msg__KittingTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
