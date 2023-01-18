# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/Challenge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Challenge(type):
    """Metaclass of message 'Challenge'."""

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
                'ariac_msgs.msg.Challenge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__challenge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__challenge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__challenge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__challenge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__challenge

            from ariac_msgs.msg import DroppedPartChallenge
            if DroppedPartChallenge.__class__._TYPE_SUPPORT is None:
                DroppedPartChallenge.__class__.__import_type_support__()

            from ariac_msgs.msg import FaultyPartChallenge
            if FaultyPartChallenge.__class__._TYPE_SUPPORT is None:
                FaultyPartChallenge.__class__.__import_type_support__()

            from ariac_msgs.msg import RobotMalfunctionChallenge
            if RobotMalfunctionChallenge.__class__._TYPE_SUPPORT is None:
                RobotMalfunctionChallenge.__class__.__import_type_support__()

            from ariac_msgs.msg import SensorBlackoutChallenge
            if SensorBlackoutChallenge.__class__._TYPE_SUPPORT is None:
                SensorBlackoutChallenge.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Challenge(metaclass=Metaclass_Challenge):
    """Message class 'Challenge'."""

    __slots__ = [
        '_type',
        '_faulty_part_challenge',
        '_dropped_part_challenge',
        '_sensor_blackout_challenge',
        '_robot_malfunction_challenge',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'faulty_part_challenge': 'ariac_msgs/FaultyPartChallenge',
        'dropped_part_challenge': 'ariac_msgs/DroppedPartChallenge',
        'sensor_blackout_challenge': 'ariac_msgs/SensorBlackoutChallenge',
        'robot_malfunction_challenge': 'ariac_msgs/RobotMalfunctionChallenge',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'FaultyPartChallenge'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'DroppedPartChallenge'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'SensorBlackoutChallenge'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'RobotMalfunctionChallenge'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        from ariac_msgs.msg import FaultyPartChallenge
        self.faulty_part_challenge = kwargs.get('faulty_part_challenge', FaultyPartChallenge())
        from ariac_msgs.msg import DroppedPartChallenge
        self.dropped_part_challenge = kwargs.get('dropped_part_challenge', DroppedPartChallenge())
        from ariac_msgs.msg import SensorBlackoutChallenge
        self.sensor_blackout_challenge = kwargs.get('sensor_blackout_challenge', SensorBlackoutChallenge())
        from ariac_msgs.msg import RobotMalfunctionChallenge
        self.robot_malfunction_challenge = kwargs.get('robot_malfunction_challenge', RobotMalfunctionChallenge())

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
        if self.type != other.type:
            return False
        if self.faulty_part_challenge != other.faulty_part_challenge:
            return False
        if self.dropped_part_challenge != other.dropped_part_challenge:
            return False
        if self.sensor_blackout_challenge != other.sensor_blackout_challenge:
            return False
        if self.robot_malfunction_challenge != other.robot_malfunction_challenge:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property
    def faulty_part_challenge(self):
        """Message field 'faulty_part_challenge'."""
        return self._faulty_part_challenge

    @faulty_part_challenge.setter
    def faulty_part_challenge(self, value):
        if __debug__:
            from ariac_msgs.msg import FaultyPartChallenge
            assert \
                isinstance(value, FaultyPartChallenge), \
                "The 'faulty_part_challenge' field must be a sub message of type 'FaultyPartChallenge'"
        self._faulty_part_challenge = value

    @property
    def dropped_part_challenge(self):
        """Message field 'dropped_part_challenge'."""
        return self._dropped_part_challenge

    @dropped_part_challenge.setter
    def dropped_part_challenge(self, value):
        if __debug__:
            from ariac_msgs.msg import DroppedPartChallenge
            assert \
                isinstance(value, DroppedPartChallenge), \
                "The 'dropped_part_challenge' field must be a sub message of type 'DroppedPartChallenge'"
        self._dropped_part_challenge = value

    @property
    def sensor_blackout_challenge(self):
        """Message field 'sensor_blackout_challenge'."""
        return self._sensor_blackout_challenge

    @sensor_blackout_challenge.setter
    def sensor_blackout_challenge(self, value):
        if __debug__:
            from ariac_msgs.msg import SensorBlackoutChallenge
            assert \
                isinstance(value, SensorBlackoutChallenge), \
                "The 'sensor_blackout_challenge' field must be a sub message of type 'SensorBlackoutChallenge'"
        self._sensor_blackout_challenge = value

    @property
    def robot_malfunction_challenge(self):
        """Message field 'robot_malfunction_challenge'."""
        return self._robot_malfunction_challenge

    @robot_malfunction_challenge.setter
    def robot_malfunction_challenge(self, value):
        if __debug__:
            from ariac_msgs.msg import RobotMalfunctionChallenge
            assert \
                isinstance(value, RobotMalfunctionChallenge), \
                "The 'robot_malfunction_challenge' field must be a sub message of type 'RobotMalfunctionChallenge'"
        self._robot_malfunction_challenge = value
