# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gsdf_msgs/BlackBoardQuery.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy

class BlackBoardQuery(genpy.Message):
  _md5sum = "e75d8a9b1cec0501e53c7955617b4403"
  _type = "gsdf_msgs/BlackBoardQuery"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 bb_id
int32 on_robot_id
string key
time timestamp
int32 robot_id
"""
  __slots__ = ['bb_id','on_robot_id','key','timestamp','robot_id']
  _slot_types = ['int32','int32','string','time','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       bb_id,on_robot_id,key,timestamp,robot_id

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(BlackBoardQuery, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.bb_id is None:
        self.bb_id = 0
      if self.on_robot_id is None:
        self.on_robot_id = 0
      if self.key is None:
        self.key = ''
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      if self.robot_id is None:
        self.robot_id = 0
    else:
      self.bb_id = 0
      self.on_robot_id = 0
      self.key = ''
      self.timestamp = genpy.Time()
      self.robot_id = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2i().pack(_x.bb_id, _x.on_robot_id))
      _x = self.key
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2Ii().pack(_x.timestamp.secs, _x.timestamp.nsecs, _x.robot_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.bb_id, _x.on_robot_id,) = _get_struct_2i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.key = str[start:end].decode('utf-8')
      else:
        self.key = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.timestamp.secs, _x.timestamp.nsecs, _x.robot_id,) = _get_struct_2Ii().unpack(str[start:end])
      self.timestamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2i().pack(_x.bb_id, _x.on_robot_id))
      _x = self.key
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_2Ii().pack(_x.timestamp.secs, _x.timestamp.nsecs, _x.robot_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.timestamp is None:
        self.timestamp = genpy.Time()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.bb_id, _x.on_robot_id,) = _get_struct_2i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.key = str[start:end].decode('utf-8')
      else:
        self.key = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.timestamp.secs, _x.timestamp.nsecs, _x.robot_id,) = _get_struct_2Ii().unpack(str[start:end])
      self.timestamp.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
_struct_2Ii = None
def _get_struct_2Ii():
    global _struct_2Ii
    if _struct_2Ii is None:
        _struct_2Ii = struct.Struct("<2Ii")
    return _struct_2Ii
