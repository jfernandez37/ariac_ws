# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:srv/PerformQualityCheck.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PerformQualityCheck_Request(type):
    """Metaclass of message 'PerformQualityCheck_Request'."""

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
                'ariac_msgs.srv.PerformQualityCheck_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__perform_quality_check__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__perform_quality_check__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__perform_quality_check__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__perform_quality_check__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__perform_quality_check__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerformQualityCheck_Request(metaclass=Metaclass_PerformQualityCheck_Request):
    """Message class 'PerformQualityCheck_Request'."""

    __slots__ = [
        '_task_id',
    ]

    _fields_and_field_types = {
        'task_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', str())

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
        if self.task_id != other.task_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_id' field must be of type 'str'"
        self._task_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_PerformQualityCheck_Response(type):
    """Metaclass of message 'PerformQualityCheck_Response'."""

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
                'ariac_msgs.srv.PerformQualityCheck_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__perform_quality_check__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__perform_quality_check__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__perform_quality_check__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__perform_quality_check__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__perform_quality_check__response

            from ariac_msgs.msg import QualityIssue
            if QualityIssue.__class__._TYPE_SUPPORT is None:
                QualityIssue.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PerformQualityCheck_Response(metaclass=Metaclass_PerformQualityCheck_Response):
    """Message class 'PerformQualityCheck_Response'."""

    __slots__ = [
        '_valid_id',
        '_all_passed',
        '_incorrect_tray',
        '_quadrant1',
        '_quadrant2',
        '_quadrant3',
        '_quadrant4',
    ]

    _fields_and_field_types = {
        'valid_id': 'boolean',
        'all_passed': 'boolean',
        'incorrect_tray': 'boolean',
        'quadrant1': 'ariac_msgs/QualityIssue',
        'quadrant2': 'ariac_msgs/QualityIssue',
        'quadrant3': 'ariac_msgs/QualityIssue',
        'quadrant4': 'ariac_msgs/QualityIssue',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'QualityIssue'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'QualityIssue'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'QualityIssue'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'QualityIssue'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.valid_id = kwargs.get('valid_id', bool())
        self.all_passed = kwargs.get('all_passed', bool())
        self.incorrect_tray = kwargs.get('incorrect_tray', bool())
        from ariac_msgs.msg import QualityIssue
        self.quadrant1 = kwargs.get('quadrant1', QualityIssue())
        from ariac_msgs.msg import QualityIssue
        self.quadrant2 = kwargs.get('quadrant2', QualityIssue())
        from ariac_msgs.msg import QualityIssue
        self.quadrant3 = kwargs.get('quadrant3', QualityIssue())
        from ariac_msgs.msg import QualityIssue
        self.quadrant4 = kwargs.get('quadrant4', QualityIssue())

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
        if self.valid_id != other.valid_id:
            return False
        if self.all_passed != other.all_passed:
            return False
        if self.incorrect_tray != other.incorrect_tray:
            return False
        if self.quadrant1 != other.quadrant1:
            return False
        if self.quadrant2 != other.quadrant2:
            return False
        if self.quadrant3 != other.quadrant3:
            return False
        if self.quadrant4 != other.quadrant4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def valid_id(self):
        """Message field 'valid_id'."""
        return self._valid_id

    @valid_id.setter
    def valid_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_id' field must be of type 'bool'"
        self._valid_id = value

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
    def incorrect_tray(self):
        """Message field 'incorrect_tray'."""
        return self._incorrect_tray

    @incorrect_tray.setter
    def incorrect_tray(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'incorrect_tray' field must be of type 'bool'"
        self._incorrect_tray = value

    @property
    def quadrant1(self):
        """Message field 'quadrant1'."""
        return self._quadrant1

    @quadrant1.setter
    def quadrant1(self, value):
        if __debug__:
            from ariac_msgs.msg import QualityIssue
            assert \
                isinstance(value, QualityIssue), \
                "The 'quadrant1' field must be a sub message of type 'QualityIssue'"
        self._quadrant1 = value

    @property
    def quadrant2(self):
        """Message field 'quadrant2'."""
        return self._quadrant2

    @quadrant2.setter
    def quadrant2(self, value):
        if __debug__:
            from ariac_msgs.msg import QualityIssue
            assert \
                isinstance(value, QualityIssue), \
                "The 'quadrant2' field must be a sub message of type 'QualityIssue'"
        self._quadrant2 = value

    @property
    def quadrant3(self):
        """Message field 'quadrant3'."""
        return self._quadrant3

    @quadrant3.setter
    def quadrant3(self, value):
        if __debug__:
            from ariac_msgs.msg import QualityIssue
            assert \
                isinstance(value, QualityIssue), \
                "The 'quadrant3' field must be a sub message of type 'QualityIssue'"
        self._quadrant3 = value

    @property
    def quadrant4(self):
        """Message field 'quadrant4'."""
        return self._quadrant4

    @quadrant4.setter
    def quadrant4(self, value):
        if __debug__:
            from ariac_msgs.msg import QualityIssue
            assert \
                isinstance(value, QualityIssue), \
                "The 'quadrant4' field must be a sub message of type 'QualityIssue'"
        self._quadrant4 = value


class Metaclass_PerformQualityCheck(type):
    """Metaclass of service 'PerformQualityCheck'."""

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
                'ariac_msgs.srv.PerformQualityCheck')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__perform_quality_check

            from ariac_msgs.srv import _perform_quality_check
            if _perform_quality_check.Metaclass_PerformQualityCheck_Request._TYPE_SUPPORT is None:
                _perform_quality_check.Metaclass_PerformQualityCheck_Request.__import_type_support__()
            if _perform_quality_check.Metaclass_PerformQualityCheck_Response._TYPE_SUPPORT is None:
                _perform_quality_check.Metaclass_PerformQualityCheck_Response.__import_type_support__()


class PerformQualityCheck(metaclass=Metaclass_PerformQualityCheck):
    from ariac_msgs.srv._perform_quality_check import PerformQualityCheck_Request as Request
    from ariac_msgs.srv._perform_quality_check import PerformQualityCheck_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
