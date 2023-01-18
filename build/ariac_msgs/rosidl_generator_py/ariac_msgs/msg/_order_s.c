// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/Order.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ariac_msgs/msg/detail/order__struct.h"
#include "ariac_msgs/msg/detail/order__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool ariac_msgs__msg__kitting_task__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__kitting_task__convert_to_py(void * raw_ros_message);
bool ariac_msgs__msg__assembly_task__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__assembly_task__convert_to_py(void * raw_ros_message);
bool ariac_msgs__msg__combined_task__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__combined_task__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__order__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ariac_msgs.msg._order.Order", full_classname_dest, 27) == 0);
  }
  ariac_msgs__msg__Order * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // priority
    PyObject * field = PyObject_GetAttrString(_pymsg, "priority");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->priority = (Py_True == field);
    Py_DECREF(field);
  }
  {  // kitting_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "kitting_task");
    if (!field) {
      return false;
    }
    if (!ariac_msgs__msg__kitting_task__convert_from_py(field, &ros_message->kitting_task)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // assembly_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "assembly_task");
    if (!field) {
      return false;
    }
    if (!ariac_msgs__msg__assembly_task__convert_from_py(field, &ros_message->assembly_task)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // combined_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "combined_task");
    if (!field) {
      return false;
    }
    if (!ariac_msgs__msg__combined_task__convert_from_py(field, &ros_message->combined_task)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__order__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Order */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._order");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Order");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__Order * ros_message = (ariac_msgs__msg__Order *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // priority
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->priority ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "priority", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kitting_task
    PyObject * field = NULL;
    field = ariac_msgs__msg__kitting_task__convert_to_py(&ros_message->kitting_task);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "kitting_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // assembly_task
    PyObject * field = NULL;
    field = ariac_msgs__msg__assembly_task__convert_to_py(&ros_message->assembly_task);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "assembly_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // combined_task
    PyObject * field = NULL;
    field = ariac_msgs__msg__combined_task__convert_to_py(&ros_message->combined_task);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "combined_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
