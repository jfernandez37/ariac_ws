# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/AssemblyPart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AssemblyPart(type):
    """Metaclass of message 'AssemblyPart'."""

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
                'ariac_msgs.msg.AssemblyPart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__assembly_part
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__assembly_part
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__assembly_part
            cls._TYPE_SUPPORT = module.type_support_msg__msg__assembly_part
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__assembly_part

            from ariac_msgs.msg import Part
            if Part.__class__._TYPE_SUPPORT is None:
                Part.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AssemblyPart(metaclass=Metaclass_AssemblyPart):
    """Message class 'AssemblyPart'."""

    __slots__ = [
        '_part',
        '_assembled_pose',
        '_install_direction',
    ]

    _fields_and_field_types = {
        'part': 'ariac_msgs/Part',
        'assembled_pose': 'geometry_msgs/PoseStamped',
        'install_direction': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Part'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from ariac_msgs.msg import Part
        self.part = kwargs.get('part', Part())
        from geometry_msgs.msg import PoseStamped
        self.assembled_pose = kwargs.get('assembled_pose', PoseStamped())
        from geometry_msgs.msg import Vector3
        self.install_direction = kwargs.get('install_direction', Vector3())

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
        if self.assembled_pose != other.assembled_pose:
            return False
        if self.install_direction != other.install_direction:
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
    def assembled_pose(self):
        """Message field 'assembled_pose'."""
        return self._assembled_pose

    @assembled_pose.setter
    def assembled_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'assembled_pose' field must be a sub message of type 'PoseStamped'"
        self._assembled_pose = value

    @property
    def install_direction(self):
        """Message field 'install_direction'."""
        return self._install_direction

    @install_direction.setter
    def install_direction(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'install_direction' field must be a sub message of type 'Vector3'"
        self._install_direction = value
