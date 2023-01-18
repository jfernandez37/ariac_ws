# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/QualityIssue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QualityIssue(type):
    """Metaclass of message 'QualityIssue'."""

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
                'ariac_msgs.msg.QualityIssue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__quality_issue
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__quality_issue
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__quality_issue
            cls._TYPE_SUPPORT = module.type_support_msg__msg__quality_issue
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__quality_issue

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class QualityIssue(metaclass=Metaclass_QualityIssue):
    """Message class 'QualityIssue'."""

    __slots__ = [
        '_all_passed',
        '_missing_part',
        '_flipped_part',
        '_faulty_part',
        '_incorrect_part_type',
        '_incorrect_part_color',
    ]

    _fields_and_field_types = {
        'all_passed': 'boolean',
        'missing_part': 'boolean',
        'flipped_part': 'boolean',
        'faulty_part': 'boolean',
        'incorrect_part_type': 'boolean',
        'incorrect_part_color': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_passed = kwargs.get('all_passed', bool())
        self.missing_part = kwargs.get('missing_part', bool())
        self.flipped_part = kwargs.get('flipped_part', bool())
        self.faulty_part = kwargs.get('faulty_part', bool())
        self.incorrect_part_type = kwargs.get('incorrect_part_type', bool())
        self.incorrect_part_color = kwargs.get('incorrect_part_color', bool())

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
        if self.all_passed != other.all_passed:
            return False
        if self.missing_part != other.missing_part:
            return False
        if self.flipped_part != other.flipped_part:
            return False
        if self.faulty_part != other.faulty_part:
            return False
        if self.incorrect_part_type != other.incorrect_part_type:
            return False
        if self.incorrect_part_color != other.incorrect_part_color:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def all_passed(self):
        """Message field 'all_passed'."""
        return self._all_passed

    @all_passed.setter
    def all_passed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'all_passed' field must be of type 'bool'"
        self._all_passed = value

    @property
    def missing_part(self):
        """Message field 'missing_part'."""
        return self._missing_part

    @missing_part.setter
    def missing_part(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'missing_part' field must be of type 'bool'"
        self._missing_part = value

    @property
    def flipped_part(self):
        """Message field 'flipped_part'."""
        return self._flipped_part

    @flipped_part.setter
    def flipped_part(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flipped_part' field must be of type 'bool'"
        self._flipped_part = value

    @property
    def faulty_part(self):
        """Message field 'faulty_part'."""
        return self._faulty_part

    @faulty_part.setter
    def faulty_part(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'faulty_part' field must be of type 'bool'"
        self._faulty_part = value

    @property
    def incorrect_part_type(self):
        """Message field 'incorrect_part_type'."""
        return self._incorrect_part_type

    @incorrect_part_type.setter
    def incorrect_part_type(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'incorrect_part_type' field must be of type 'bool'"
        self._incorrect_part_type = value

    @property
    def incorrect_part_color(self):
        """Message field 'incorrect_part_color'."""
        return self._incorrect_part_color

    @incorrect_part_color.setter
    def incorrect_part_color(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'incorrect_part_color' field must be of type 'bool'"
        self._incorrect_part_color = value
