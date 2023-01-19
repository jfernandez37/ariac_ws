# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/Trial.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trial(type):
    """Metaclass of message 'Trial'."""

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
                'ariac_msgs.msg.Trial')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trial
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trial
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trial
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trial
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trial

            from ariac_msgs.msg import Challenge
            if Challenge.__class__._TYPE_SUPPORT is None:
                Challenge.__class__.__import_type_support__()

            from ariac_msgs.msg import Order
            if Order.__class__._TYPE_SUPPORT is None:
                Order.__class__.__import_type_support__()

            from ariac_msgs.msg import OrderCondition
            if OrderCondition.__class__._TYPE_SUPPORT is None:
                OrderCondition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trial(metaclass=Metaclass_Trial):
    """Message class 'Trial'."""

    __slots__ = [
        '_time_limit',
        '_trial_name',
        '_orders',
        '_order_conditions',
        '_challenges',
    ]

    _fields_and_field_types = {
        'time_limit': 'float',
        'trial_name': 'string',
        'orders': 'sequence<ariac_msgs/Order>',
        'order_conditions': 'sequence<ariac_msgs/OrderCondition>',
        'challenges': 'sequence<ariac_msgs/Challenge>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Order')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'OrderCondition')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Challenge')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_limit = kwargs.get('time_limit', float())
        self.trial_name = kwargs.get('trial_name', str())
        self.orders = kwargs.get('orders', [])
        self.order_conditions = kwargs.get('order_conditions', [])
        self.challenges = kwargs.get('challenges', [])

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
        if self.time_limit != other.time_limit:
            return False
        if self.trial_name != other.trial_name:
            return False
        if self.orders != other.orders:
            return False
        if self.order_conditions != other.order_conditions:
            return False
        if self.challenges != other.challenges:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time_limit(self):
        """Message field 'time_limit'."""
        return self._time_limit

    @time_limit.setter
    def time_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_limit' field must be of type 'float'"
        self._time_limit = value

    @property
    def trial_name(self):
        """Message field 'trial_name'."""
        return self._trial_name

    @trial_name.setter
    def trial_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'trial_name' field must be of type 'str'"
        self._trial_name = value

    @property
    def orders(self):
        """Message field 'orders'."""
        return self._orders

    @orders.setter
    def orders(self, value):
        if __debug__:
            from ariac_msgs.msg import Order
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
                 all(isinstance(v, Order) for v in value) and
                 True), \
                "The 'orders' field must be a set or sequence and each value of type 'Order'"
        self._orders = value

    @property
    def order_conditions(self):
        """Message field 'order_conditions'."""
        return self._order_conditions

    @order_conditions.setter
    def order_conditions(self, value):
        if __debug__:
            from ariac_msgs.msg import OrderCondition
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
                 all(isinstance(v, OrderCondition) for v in value) and
                 True), \
                "The 'order_conditions' field must be a set or sequence and each value of type 'OrderCondition'"
        self._order_conditions = value

    @property
    def challenges(self):
        """Message field 'challenges'."""
        return self._challenges

    @challenges.setter
    def challenges(self, value):
        if __debug__:
            from ariac_msgs.msg import Challenge
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
                 all(isinstance(v, Challenge) for v in value) and
                 True), \
                "The 'challenges' field must be a set or sequence and each value of type 'Challenge'"
        self._challenges = value
