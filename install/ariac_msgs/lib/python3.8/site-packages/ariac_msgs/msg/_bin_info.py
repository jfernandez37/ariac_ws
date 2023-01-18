# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/BinInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BinInfo(type):
    """Metaclass of message 'BinInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BIN1': 1,
        'BIN2': 2,
        'BIN3': 3,
        'BIN4': 4,
        'BIN5': 5,
        'BIN6': 6,
        'BIN7': 7,
        'BIN8': 8,
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
                'ariac_msgs.msg.BinInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bin_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bin_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bin_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bin_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bin_info

            from ariac_msgs.msg import PartLot
            if PartLot.__class__._TYPE_SUPPORT is None:
                PartLot.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BIN1': cls.__constants['BIN1'],
            'BIN2': cls.__constants['BIN2'],
            'BIN3': cls.__constants['BIN3'],
            'BIN4': cls.__constants['BIN4'],
            'BIN5': cls.__constants['BIN5'],
            'BIN6': cls.__constants['BIN6'],
            'BIN7': cls.__constants['BIN7'],
            'BIN8': cls.__constants['BIN8'],
        }

    @property
    def BIN1(self):
        """Message constant 'BIN1'."""
        return Metaclass_BinInfo.__constants['BIN1']

    @property
    def BIN2(self):
        """Message constant 'BIN2'."""
        return Metaclass_BinInfo.__constants['BIN2']

    @property
    def BIN3(self):
        """Message constant 'BIN3'."""
        return Metaclass_BinInfo.__constants['BIN3']

    @property
    def BIN4(self):
        """Message constant 'BIN4'."""
        return Metaclass_BinInfo.__constants['BIN4']

    @property
    def BIN5(self):
        """Message constant 'BIN5'."""
        return Metaclass_BinInfo.__constants['BIN5']

    @property
    def BIN6(self):
        """Message constant 'BIN6'."""
        return Metaclass_BinInfo.__constants['BIN6']

    @property
    def BIN7(self):
        """Message constant 'BIN7'."""
        return Metaclass_BinInfo.__constants['BIN7']

    @property
    def BIN8(self):
        """Message constant 'BIN8'."""
        return Metaclass_BinInfo.__constants['BIN8']


class BinInfo(metaclass=Metaclass_BinInfo):
    """
    Message class 'BinInfo'.

    Constants:
      BIN1
      BIN2
      BIN3
      BIN4
      BIN5
      BIN6
      BIN7
      BIN8
    """

    __slots__ = [
        '_bin_number',
        '_parts',
    ]

    _fields_and_field_types = {
        'bin_number': 'uint8',
        'parts': 'sequence<ariac_msgs/PartLot>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'PartLot')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bin_number = kwargs.get('bin_number', int())
        self.parts = kwargs.get('parts', [])

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
        if self.bin_number != other.bin_number:
            return False
        if self.parts != other.parts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def bin_number(self):
        """Message field 'bin_number'."""
        return self._bin_number

    @bin_number.setter
    def bin_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bin_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bin_number' field must be an unsigned integer in [0, 255]"
        self._bin_number = value

    @property
    def parts(self):
        """Message field 'parts'."""
        return self._parts

    @parts.setter
    def parts(self, value):
        if __debug__:
            from ariac_msgs.msg import PartLot
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PartLot) for v in value) and
                 True), \
                "The 'parts' field must be a set or sequence and each value of type 'PartLot'"
        self._parts = value
