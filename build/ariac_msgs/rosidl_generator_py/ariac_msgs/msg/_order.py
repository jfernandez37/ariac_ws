# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/Order.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Order(type):
    """Metaclass of message 'Order'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'KITTING': 0,
        'ASSEMBLY': 1,
        'COMBINED': 2,
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
                'ariac_msgs.msg.Order')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__order
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__order
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__order
            cls._TYPE_SUPPORT = module.type_support_msg__msg__order
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__order

            from ariac_msgs.msg import AssemblyTask
            if AssemblyTask.__class__._TYPE_SUPPORT is None:
                AssemblyTask.__class__.__import_type_support__()

            from ariac_msgs.msg import CombinedTask
            if CombinedTask.__class__._TYPE_SUPPORT is None:
                CombinedTask.__class__.__import_type_support__()

            from ariac_msgs.msg import KittingTask
            if KittingTask.__class__._TYPE_SUPPORT is None:
                KittingTask.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'KITTING': cls.__constants['KITTING'],
            'ASSEMBLY': cls.__constants['ASSEMBLY'],
            'COMBINED': cls.__constants['COMBINED'],
        }

    @property
    def KITTING(self):
        """Message constant 'KITTING'."""
        return Metaclass_Order.__constants['KITTING']

    @property
    def ASSEMBLY(self):
        """Message constant 'ASSEMBLY'."""
        return Metaclass_Order.__constants['ASSEMBLY']

    @property
    def COMBINED(self):
        """Message constant 'COMBINED'."""
        return Metaclass_Order.__constants['COMBINED']


class Order(metaclass=Metaclass_Order):
    """
    Message class 'Order'.

    Constants:
      KITTING
      ASSEMBLY
      COMBINED
    """

    __slots__ = [
        '_id',
        '_type',
        '_priority',
        '_kitting_task',
        '_assembly_task',
        '_combined_task',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'type': 'uint8',
        'priority': 'boolean',
        'kitting_task': 'ariac_msgs/KittingTask',
        'assembly_task': 'ariac_msgs/AssemblyTask',
        'combined_task': 'ariac_msgs/CombinedTask',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'KittingTask'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'AssemblyTask'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'CombinedTask'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.type = kwargs.get('type', int())
        self.priority = kwargs.get('priority', bool())
        from ariac_msgs.msg import KittingTask
        self.kitting_task = kwargs.get('kitting_task', KittingTask())
        from ariac_msgs.msg import AssemblyTask
        self.assembly_task = kwargs.get('assembly_task', AssemblyTask())
        from ariac_msgs.msg import CombinedTask
        self.combined_task = kwargs.get('combined_task', CombinedTask())

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
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.priority != other.priority:
            return False
        if self.kitting_task != other.kitting_task:
            return False
        if self.assembly_task != other.assembly_task:
            return False
        if self.combined_task != other.combined_task:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

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
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'priority' field must be of type 'bool'"
        self._priority = value

    @property
    def kitting_task(self):
        """Message field 'kitting_task'."""
        return self._kitting_task

    @kitting_task.setter
    def kitting_task(self, value):
        if __debug__:
            from ariac_msgs.msg import KittingTask
            assert \
                isinstance(value, KittingTask), \
                "The 'kitting_task' field must be a sub message of type 'KittingTask'"
        self._kitting_task = value

    @property
    def assembly_task(self):
        """Message field 'assembly_task'."""
        return self._assembly_task

    @assembly_task.setter
    def assembly_task(self, value):
        if __debug__:
            from ariac_msgs.msg import AssemblyTask
            assert \
                isinstance(value, AssemblyTask), \
                "The 'assembly_task' field must be a sub message of type 'AssemblyTask'"
        self._assembly_task = value

    @property
    def combined_task(self):
        """Message field 'combined_task'."""
        return self._combined_task

    @combined_task.setter
    def combined_task(self, value):
        if __debug__:
            from ariac_msgs.msg import CombinedTask
            assert \
                isinstance(value, CombinedTask), \
                "The 'combined_task' field must be a sub message of type 'CombinedTask'"
        self._combined_task = value
