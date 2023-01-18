# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/KittingPart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KittingPart(type):
    """Metaclass of message 'KittingPart'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'QUADRANT1': 1,
        'QUADRANT2': 2,
        'QUADRANT3': 3,
        'QUADRANT4': 4,
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
                'ariac_msgs.msg.KittingPart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kitting_part
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kitting_part
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kitting_part
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kitting_part
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kitting_part

            from ariac_msgs.msg import Part
            if Part.__class__._TYPE_SUPPORT is None:
                Part.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'QUADRANT1': cls.__constants['QUADRANT1'],
            'QUADRANT2': cls.__constants['QUADRANT2'],
            'QUADRANT3': cls.__constants['QUADRANT3'],
            'QUADRANT4': cls.__constants['QUADRANT4'],
        }

    @property
    def QUADRANT1(self):
        """Message constant 'QUADRANT1'."""
        return Metaclass_KittingPart.__constants['QUADRANT1']

    @property
    def QUADRANT2(self):
        """Message constant 'QUADRANT2'."""
        return Metaclass_KittingPart.__constants['QUADRANT2']

    @property
    def QUADRANT3(self):
        """Message constant 'QUADRANT3'."""
        return Metaclass_KittingPart.__constants['QUADRANT3']

    @property
    def QUADRANT4(self):
        """Message constant 'QUADRANT4'."""
        return Metaclass_KittingPart.__constants['QUADRANT4']


class KittingPart(metaclass=Metaclass_KittingPart):
    """
    Message class 'KittingPart'.

    Constants:
      QUADRANT1
      QUADRANT2
      QUADRANT3
      QUADRANT4
    """

    __slots__ = [
        '_part',
        '_quadrant',
    ]

    _fields_and_field_types = {
        'part': 'ariac_msgs/Part',
        'quadrant': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Part'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ariac_msgs.msg import Part
        self.part = kwargs.get('part', Part())
        self.quadrant = kwargs.get('quadrant', int())

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
        if self.part != other.part:
            return False
        if self.quadrant != other.quadrant:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def part(self):
        """Message field 'part'."""
        return self._part

    @part.setter
    def part(self, value):
        if __debug__:
            from ariac_msgs.msg import Part
            assert \
                isinstance(value, Part), \
                "The 'part' field must be a sub message of type 'Part'"
        self._part = value

    @property
    def quadrant(self):
        """Message field 'quadrant'."""
        return self._quadrant

    @quadrant.setter
    def quadrant(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quadrant' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quadrant' field must be an unsigned integer in [0, 255]"
        self._quadrant = value
