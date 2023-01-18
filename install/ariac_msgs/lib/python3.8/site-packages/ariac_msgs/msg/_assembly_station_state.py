# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/AssemblyStationState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AssemblyStationState(type):
    """Metaclass of message 'AssemblyStationState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ariac_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ariac_msgs.msg.AssemblyStationState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__assembly_station_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__assembly_station_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__assembly_station_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__assembly_station_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__assembly_station_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AssemblyStationState(metaclass=Metaclass_AssemblyStationState):
    """Message class 'AssemblyStationState'."""

    __slots__ = [
        '_battery_attached',
        '_sensor_attached',
        '_regulator_attached',
        '_pump_attached',
    ]

    _fields_and_field_types = {
        'battery_attached': 'boolean',
        'sensor_attached': 'boolean',
        'regulator_attached': 'boolean',
        'pump_attached': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_attached = kwargs.get('battery_attached', bool())
        self.sensor_attached = kwargs.get('sensor_attached', bool())
        self.regulator_attached = kwargs.get('regulator_attached', bool())
        self.pump_attached = kwargs.get('pump_attached', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.battery_attached != other.battery_attached:
            return False
        if self.sensor_attached != other.sensor_attached:
            return False
        if self.regulator_attached != other.regulator_attached:
            return False
        if self.pump_attached != other.pump_attached:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def battery_attached(self):
        """Message field 'battery_attached'."""
        return self._battery_attached

    @battery_attached.setter
    def battery_attached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_attached' field must be of type 'bool'"
        self._battery_attached = value

    @property
    def sensor_attached(self):
        """Message field 'sensor_attached'."""
        return self._sensor_attached

    @sensor_attached.setter
    def sensor_attached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sensor_attached' field must be of type 'bool'"
        self._sensor_attached = value

    @property
    def regulator_attached(self):
        """Message field 'regulator_attached'."""
        return self._regulator_attached

    @regulator_attached.setter
    def regulator_attached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'regulator_attached' field must be of type 'bool'"
        self._regulator_attached = value

    @property
    def pump_attached(self):
        """Message field 'pump_attached'."""
        return self._pump_attached

    @pump_attached.setter
    def pump_attached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pump_attached' field must be of type 'bool'"
        self._pump_attached = value
