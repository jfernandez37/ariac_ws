// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Order.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/order__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `kitting_task`
#include "ariac_msgs/msg/detail/kitting_task__functions.h"
// Member `assembly_task`
#include "ariac_msgs/msg/detail/assembly_task__functions.h"
// Member `combined_task`
#include "ariac_msgs/msg/detail/combined_task__functions.h"

bool
ariac_msgs__msg__Order__init(ariac_msgs__msg__Order * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    ariac_msgs__msg__Order__fini(msg);
    return false;
  }
  // type
  // priority
  // kitting_task
  if (!ariac_msgs__msg__KittingTask__init(&msg->kitting_task)) {
    ariac_msgs__msg__Order__fini(msg);
    return false;
  }
  // assembly_task
  if (!ariac_msgs__msg__AssemblyTask__init(&msg->assembly_task)) {
    ariac_msgs__msg__Order__fini(msg);
    return false;
  }
  // combined_task
  if (!ariac_msgs__msg__CombinedTask__init(&msg->combined_task)) {
    ariac_msgs__msg__Order__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__Order__fini(ariac_msgs__msg__Order * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // type
  // priority
  // kitting_task
  ariac_msgs__msg__KittingTask__fini(&msg->kitting_task);
  // assembly_task
  ariac_msgs__msg__AssemblyTask__fini(&msg->assembly_task);
  // combined_task
  ariac_msgs__msg__CombinedTask__fini(&msg->combined_task);
}

bool
ariac_msgs__msg__Order__are_equal(const ariac_msgs__msg__Order * lhs, const ariac_msgs__msg__Order * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // kitting_task
  if (!ariac_msgs__msg__KittingTask__are_equal(
      &(lhs->kitting_task), &(rhs->kitting_task)))
  {
    return false;
  }
  // assembly_task
  if (!ariac_msgs__msg__AssemblyTask__are_equal(
      &(lhs->assembly_task), &(rhs->assembly_task)))
  {
    return false;
  }
  // combined_task
  if (!ariac_msgs__msg__CombinedTask__are_equal(
      &(lhs->combined_task), &(rhs->combined_task)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Order__copy(
  const ariac_msgs__msg__Order * input,
  ariac_msgs__msg__Order * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // priority
  output->priority = input->priority;
  // kitting_task
  if (!ariac_msgs__msg__KittingTask__copy(
      &(input->kitting_task), &(output->kitting_task)))
  {
    return false;
  }
  // assembly_task
  if (!ariac_msgs__msg__AssemblyTask__copy(
      &(input->assembly_task), &(output->assembly_task)))
  {
    return false;
  }
  // combined_task
  if (!ariac_msgs__msg__CombinedTask__copy(
      &(input->combined_task), &(output->combined_task)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__Order *
ariac_msgs__msg__Order__create()
{
  ariac_msgs__msg__Order * msg = (ariac_msgs__msg__Order *)malloc(sizeof(ariac_msgs__msg__Order));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Order));
  bool success = ariac_msgs__msg__Order__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Order__destroy(ariac_msgs__msg__Order * msg)
{
  if (msg) {
    ariac_msgs__msg__Order__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__Order__Sequence__init(ariac_msgs__msg__Order__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__Order * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__Order *)calloc(size, sizeof(ariac_msgs__msg__Order));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Order__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Order__fini(&data[i - 1]);
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
ariac_msgs__msg__Order__Sequence__fini(ariac_msgs__msg__Order__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__Order__fini(&array->data[i]);
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

ariac_msgs__msg__Order__Sequence *
ariac_msgs__msg__Order__Sequence__create(size_t size)
{
  ariac_msgs__msg__Order__Sequence * array = (ariac_msgs__msg__Order__Sequence *)malloc(sizeof(ariac_msgs__msg__Order__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Order__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Order__Sequence__destroy(ariac_msgs__msg__Order__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__Order__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__Order__Sequence__are_equal(const ariac_msgs__msg__Order__Sequence * lhs, const ariac_msgs__msg__Order__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Order__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Order__Sequence__copy(
  const ariac_msgs__msg__Order__Sequence * input,
  ariac_msgs__msg__Order__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Order);
    ariac_msgs__msg__Order * data =
      (ariac_msgs__msg__Order *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Order__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Order__fini(&data[i]);
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
    if (!ariac_msgs__msg__Order__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
