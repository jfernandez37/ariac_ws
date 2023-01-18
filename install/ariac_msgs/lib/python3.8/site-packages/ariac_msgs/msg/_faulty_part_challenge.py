# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/FaultyPartChallenge.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FaultyPartChallenge(type):
    """Metaclass of message 'FaultyPartChallenge'."""

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
                'ariac_msgs.msg.FaultyPartChallenge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__faulty_part_challenge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__faulty_part_challenge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__faulty_part_challenge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__faulty_part_challenge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__faulty_part_challenge

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FaultyPartChallenge(metaclass=Metaclass_FaultyPartChallenge):
    """Message class 'FaultyPartChallenge'."""

    __slots__ = [
        '_order_id',
        '_quandrant1',
        '_quandrant2',
        '_quandrant3',
        '_quandrant4',
    ]

    _fields_and_field_types = {
        'order_id': 'string',
        'quandrant1': 'boolean',
        'quandrant2': 'boolean',
        'quandrant3': 'boolean',
        'quandrant4': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.order_id = kwargs.get('order_id', str())
        self.quandrant1 = kwargs.get('quandrant1', bool())
        self.quandrant2 = kwargs.get('quandrant2', bool())
        self.quandrant3 = kwargs.get('quandrant3', bool())
        self.quandrant4 = kwargs.get('quandrant4', bool())

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
        if self.order_id != other.order_id:
            return False
        if self.quandrant1 != other.quandrant1:
            return False
        if self.quandrant2 != other.quandrant2:
            return False
        if self.quandrant3 != other.quandrant3:
            return False
        if self.quandrant4 != other.quandrant4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def order_id(self):
        """Message field 'order_id'."""
        return self._order_id

    @order_id.setter
    def order_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'order_id' field must be of type 'str'"
        self._order_id = value

    @property
    def quandrant1(self):
        """Message field 'quandrant1'."""
        return self._quandrant1

    @quandrant1.setter
    def quandrant1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quandrant1' field must be of type 'bool'"
        self._quandrant1 = value

    @property
    def quandrant2(self):
        """Message field 'quandrant2'."""
        return self._quandrant2

    @quandrant2.setter
    def quandrant2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quandrant2' field must be of type 'bool'"
        self._quandrant2 = value

    @property
    def quandrant3(self):
        """Message field 'quandrant3'."""
        return self._quandrant3

    @quandrant3.setter
    def quandrant3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quandrant3' field must be of type 'bool'"
        self._quandrant3 = value

    @property
    def quandrant4(self):
        """Message field 'quandrant4'."""
        return self._quandrant4

    @quandrant4.setter
    def quandrant4(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'quandrant4' field must be of type 'bool'"
        self._quandrant4 = value
