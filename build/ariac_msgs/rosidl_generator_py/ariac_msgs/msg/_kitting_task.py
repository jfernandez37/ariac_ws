# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/KittingTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_KittingTask(type):
    """Metaclass of message 'KittingTask'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KITTING': 0,
        'ASSEMBLY_FRONT': 1,
        'ASSEMBLY_BACK': 2,
        'WAREHOUSE': 3,
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
                'ariac_msgs.msg.KittingTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kitting_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kitting_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kitting_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kitting_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kitting_task

            from ariac_msgs.msg import KittingPart
            if KittingPart.__class__._TYPE_SUPPORT is None:
                KittingPart.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KITTING': cls.__constants['KITTING'],
            'ASSEMBLY_FRONT': cls.__constants['ASSEMBLY_FRONT'],
            'ASSEMBLY_BACK': cls.__constants['ASSEMBLY_BACK'],
            'WAREHOUSE': cls.__constants['WAREHOUSE'],
        }

    @property
    def KITTING(self):
        """Message constant 'KITTING'."""
        return Metaclass_KittingTask.__constants['KITTING']

    @property
    def ASSEMBLY_FRONT(self):
        """Message constant 'ASSEMBLY_FRONT'."""
        return Metaclass_KittingTask.__constants['ASSEMBLY_FRONT']

    @property
    def ASSEMBLY_BACK(self):
        """Message constant 'ASSEMBLY_BACK'."""
        return Metaclass_KittingTask.__constants['ASSEMBLY_BACK']

    @property
    def WAREHOUSE(self):
        """Message constant 'WAREHOUSE'."""
        return Metaclass_KittingTask.__constants['WAREHOUSE']


class KittingTask(metaclass=Metaclass_KittingTask):
    """
    Message class 'KittingTask'.

    Constants:
      KITTING
      ASSEMBLY_FRONT
      ASSEMBLY_BACK
      WAREHOUSE
    """

    __slots__ = [
        '_agv_number',
        '_tray_id',
        '_destination',
        '_parts',
    ]

    _fields_and_field_types = {
        'agv_number': 'uint8',
        'tray_id': 'int8',
        'destination': 'uint8',
        'parts': 'sequence<ariac_msgs/KittingPart>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'KittingPart')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.agv_number = kwargs.get('agv_number', int())
        self.tray_id = kwargs.get('tray_id', int())
        self.destination = kwargs.get('destination', int())
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
        if self.agv_number != other.agv_number:
            return False
        if self.tray_id != other.tray_id:
            return False
        if self.destination != other.destination:
            return False
        if self.parts != other.parts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def agv_number(self):
        """Message field 'agv_number'."""
        return self._agv_number

    @agv_number.setter
    def agv_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'agv_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'agv_number' field must be an unsigned integer in [0, 255]"
        self._agv_number = value

    @property
    def tray_id(self):
        """Message field 'tray_id'."""
        return self._tray_id

    @tray_id.setter
    def tray_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tray_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'tray_id' field must be an integer in [-128, 127]"
        self._tray_id = value

    @property
    def destination(self):
        """Message field 'destination'."""
        return self._destination

    @destination.setter
    def destination(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'destination' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'destination' field must be an unsigned integer in [0, 255]"
        self._destination = value

    @property
    def parts(self):
        """Message field 'parts'."""
        return self._parts

    @parts.setter
    def parts(self, value):
        if __debug__:
            from ariac_msgs.msg import KittingPart
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
                 all(isinstance(v, KittingPart) for v in value) and
                 True), \
                "The 'parts' field must be a set or sequence and each value of type 'KittingPart'"
        self._parts = value
