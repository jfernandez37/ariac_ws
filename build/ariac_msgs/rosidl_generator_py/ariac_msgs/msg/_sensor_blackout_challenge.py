# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorBlackoutChallenge(type):
    """Metaclass of message 'SensorBlackoutChallenge'."""

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
                'ariac_msgs.msg.SensorBlackoutChallenge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_blackout_challenge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_blackout_challenge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_blackout_challenge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_blackout_challenge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_blackout_challenge

            from ariac_msgs.msg import Condition
            if Condition.__class__._TYPE_SUPPORT is None:
                Condition.__class__.__import_type_support__()

            from ariac_msgs.msg import Sensors
            if Sensors.__class__._TYPE_SUPPORT is None:
                Sensors.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorBlackoutChallenge(metaclass=Metaclass_SensorBlackoutChallenge):
    """Message class 'SensorBlackoutChallenge'."""

    __slots__ = [
        '_duration',
        '_condition',
        '_sensors_to_disable',
    ]

    _fields_and_field_types = {
        'duration': 'double',
        'condition': 'ariac_msgs/Condition',
        'sensors_to_disable': 'ariac_msgs/Sensors',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Condition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Sensors'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.duration = kwargs.get('duration', float())
        from ariac_msgs.msg import Condition
        self.condition = kwargs.get('condition', Condition())
        from ariac_msgs.msg import Sensors
        self.sensors_to_disable = kwargs.get('sensors_to_disable', Sensors())

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
        if self.duration != other.duration:
            return False
        if self.condition != other.condition:
            return False
        if self.sensors_to_disable != other.sensors_to_disable:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
        self._duration = value

    @property
    def condition(self):
        """Message field 'condition'."""
        return self._condition

    @condition.setter
    def condition(self, value):
        if __debug__:
            from ariac_msgs.msg import Condition
            assert \
                isinstance(value, Condition), \
                "The 'condition' field must be a sub message of type 'Condition'"
        self._condition = value

    @property
    def sensors_to_disable(self):
        """Message field 'sensors_to_disable'."""
        return self._sensors_to_disable

    @sensors_to_disable.setter
    def sensors_to_disable(self, value):
        if __debug__:
            from ariac_msgs.msg import Sensors
            assert \
                isinstance(value, Sensors), \
                "The 'sensors_to_disable' field must be a sub message of type 'Sensors'"
        self._sensors_to_disable = value
