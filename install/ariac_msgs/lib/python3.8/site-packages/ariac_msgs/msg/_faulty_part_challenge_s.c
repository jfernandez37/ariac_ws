// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
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
#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.h"
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__faulty_part_challenge__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("ariac_msgs.msg._faulty_part_challenge.FaultyPartChallenge", full_classname_dest, 57) == 0);
  }
  ariac_msgs__msg__FaultyPartChallenge * ros_message = _ros_message;
  {  // order_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "order_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->order_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // quadrant1
    PyObject * field = PyObject_GetAttrString(_pymsg, "quadrant1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quadrant1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quadrant2
    PyObject * field = PyObject_GetAttrString(_pymsg, "quadrant2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quadrant2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quadrant3
    PyObject * field = PyObject_GetAttrString(_pymsg, "quadrant3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quadrant3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // quadrant4
    PyObject * field = PyObject_GetAttrString(_pymsg, "quadrant4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quadrant4 = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__faulty_part_challenge__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FaultyPartChallenge */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._faulty_part_challenge");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FaultyPartChallenge");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__FaultyPartChallenge * ros_message = (ariac_msgs__msg__FaultyPartChallenge *)raw_ros_message;
  {  // order_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->order_id.data,
      strlen(ros_message->order_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "order_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quadrant1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quadrant1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quadrant1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quadrant2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quadrant2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quadrant2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quadrant3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quadrant3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quadrant3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quadrant4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quadrant4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quadrant4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
