# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/Condition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Condition(type):
    """Metaclass of message 'Condition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TIME': 0,
        'PART_PLACE': 1,
        'SUBMISSION': 2,
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
                'ariac_msgs.msg.Condition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__condition
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__condition
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__condition
            cls._TYPE_SUPPORT = module.type_support_msg__msg__condition
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__condition

            from ariac_msgs.msg import PartPlaceCondition
            if PartPlaceCondition.__class__._TYPE_SUPPORT is None:
                PartPlaceCondition.__class__.__import_type_support__()

            from ariac_msgs.msg import SubmissionCondition
            if SubmissionCondition.__class__._TYPE_SUPPORT is None:
                SubmissionCondition.__class__.__import_type_support__()

            from ariac_msgs.msg import TimeCondition
            if TimeCondition.__class__._TYPE_SUPPORT is None:
                TimeCondition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TIME': cls.__constants['TIME'],
            'PART_PLACE': cls.__constants['PART_PLACE'],
            'SUBMISSION': cls.__constants['SUBMISSION'],
        }

    @property
    def TIME(self):
        """Message constant 'TIME'."""
        return Metaclass_Condition.__constants['TIME']

    @property
    def PART_PLACE(self):
        """Message constant 'PART_PLACE'."""
        return Metaclass_Condition.__constants['PART_PLACE']

    @property
    def SUBMISSION(self):
        """Message constant 'SUBMISSION'."""
        return Metaclass_Condition.__constants['SUBMISSION']


class Condition(metaclass=Metaclass_Condition):
    """
    Message class 'Condition'.

    Constants:
      TIME
      PART_PLACE
      SUBMISSION
    """

    __slots__ = [
        '_type',
        '_time_condition',
        '_part_place_condition',
        '_submission_condition',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'time_condition': 'ariac_msgs/TimeCondition',
        'part_place_condition': 'ariac_msgs/PartPlaceCondition',
        'submission_condition': 'ariac_msgs/SubmissionCondition',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'TimeCondition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'PartPlaceCondition'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'SubmissionCondition'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        from ariac_msgs.msg import TimeCondition
        self.time_condition = kwargs.get('time_condition', TimeCondition())
        from ariac_msgs.msg import PartPlaceCondition
        self.part_place_condition = kwargs.get('part_place_condition', PartPlaceCondition())
        from ariac_msgs.msg import SubmissionCondition
        self.submission_condition = kwargs.get('submission_condition', SubmissionCondition())

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
        if self.time_condition != other.time_condition:
            return False
        if self.part_place_condition != other.part_place_condition:
            return False
        if self.submission_condition != other.submission_condition:
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
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @property
    def time_condition(self):
        """Message field 'time_condition'."""
        return self._time_condition

    @time_condition.setter
    def time_condition(self, value):
        if __debug__:
            from ariac_msgs.msg import TimeCondition
            assert \
                isinstance(value, TimeCondition), \
                "The 'time_condition' field must be a sub message of type 'TimeCondition'"
        self._time_condition = value

    @property
    def part_place_condition(self):
        """Message field 'part_place_condition'."""
        return self._part_place_condition

    @part_place_condition.setter
    def part_place_condition(self, value):
        if __debug__:
            from ariac_msgs.msg import PartPlaceCondition
            assert \
                isinstance(value, PartPlaceCondition), \
                "The 'part_place_condition' field must be a sub message of type 'PartPlaceCondition'"
        self._part_place_condition = value

    @property
    def submission_condition(self):
        """Message field 'submission_condition'."""
        return self._submission_condition

    @submission_condition.setter
    def submission_condition(self, value):
        if __debug__:
            from ariac_msgs.msg import SubmissionCondition
            assert \
                isinstance(value, SubmissionCondition), \
                "The 'submission_condition' field must be a sub message of type 'SubmissionCondition'"
        self._submission_condition = value
