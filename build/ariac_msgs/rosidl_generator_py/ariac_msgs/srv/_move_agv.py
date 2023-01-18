# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:srv/MoveAGV.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MoveAGV_Request(type):
    """Metaclass of message 'MoveAGV_Request'."""

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
                'ariac_msgs.srv.MoveAGV_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_agv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_agv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_agv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_agv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_agv__request

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
        return Metaclass_MoveAGV_Request.__constants['KITTING']

    @property
    def ASSEMBLY_FRONT(self):
        """Message constant 'ASSEMBLY_FRONT'."""
        return Metaclass_MoveAGV_Request.__constants['ASSEMBLY_FRONT']

    @property
    def ASSEMBLY_BACK(self):
        """Message constant 'ASSEMBLY_BACK'."""
        return Metaclass_MoveAGV_Request.__constants['ASSEMBLY_BACK']

    @property
    def WAREHOUSE(self):
        """Message constant 'WAREHOUSE'."""
        return Metaclass_MoveAGV_Request.__constants['WAREHOUSE']


class MoveAGV_Request(metaclass=Metaclass_MoveAGV_Request):
    """
    Message class 'MoveAGV_Request'.

    Constants:
      KITTING
      ASSEMBLY_FRONT
      ASSEMBLY_BACK
      WAREHOUSE
    """

    __slots__ = [
        '_location',
    ]

    _fields_and_field_types = {
        'location': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.location = kwargs.get('location', int())

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
        if self.location != other.location:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'location' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'location' field must be an integer in [-128, 127]"
        self._location = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MoveAGV_Response(type):
    """Metaclass of message 'MoveAGV_Response'."""

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
                'ariac_msgs.srv.MoveAGV_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move_agv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move_agv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move_agv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move_agv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move_agv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MoveAGV_Response(metaclass=Metaclass_MoveAGV_Response):
    """Message class 'MoveAGV_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_MoveAGV(type):
    """Metaclass of service 'MoveAGV'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ariac_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ariac_msgs.srv.MoveAGV')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move_agv

            from ariac_msgs.srv import _move_agv
            if _move_agv.Metaclass_MoveAGV_Request._TYPE_SUPPORT is None:
                _move_agv.Metaclass_MoveAGV_Request.__import_type_support__()
            if _move_agv.Metaclass_MoveAGV_Response._TYPE_SUPPORT is None:
                _move_agv.Metaclass_MoveAGV_Response.__import_type_support__()


class MoveAGV(metaclass=Metaclass_MoveAGV):
    from ariac_msgs.srv._move_agv import MoveAGV_Request as Request
    from ariac_msgs.srv._move_agv import MoveAGV_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
