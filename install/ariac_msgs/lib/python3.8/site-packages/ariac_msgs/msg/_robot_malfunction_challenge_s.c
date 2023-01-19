// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
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
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.h"
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"

bool ariac_msgs__msg__condition__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__condition__convert_to_py(void * raw_ros_message);
bool ariac_msgs__msg__robots__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__robots__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__robot_malfunction_challenge__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("ariac_msgs.msg._robot_malfunction_challenge.RobotMalfunctionChallenge", full_classname_dest, 69) == 0);
  }
  ariac_msgs__msg__RobotMalfunctionChallenge * ros_message = _ros_message;
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // condition
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition");
    if (!field) {
      return false;
    }
    if (!ariac_msgs__msg__condition__convert_from_py(field, &ros_message->condition)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // robots_to_disable
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_to_disable");
    if (!field) {
      return false;
    }
    if (!ariac_msgs__msg__robots__convert_from_py(field, &ros_message->robots_to_disable)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__robot_malfunction_challenge__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotMalfunctionChallenge */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._robot_malfunction_challenge");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotMalfunctionChallenge");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__RobotMalfunctionChallenge * ros_message = (ariac_msgs__msg__RobotMalfunctionChallenge *)raw_ros_message;
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition
    PyObject * field = NULL;
    field = ariac_msgs__msg__condition__convert_to_py(&ros_message->condition);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_to_disable
    PyObject * field = NULL;
    field = ariac_msgs__msg__robots__convert_to_py(&ros_message->robots_to_disable);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_to_disable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
