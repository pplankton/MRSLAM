// Auto-generated. Do not edit!

// (in-package gsdf_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class BlackBoardPut {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.bb_id = null;
      this.on_robot_id = null;
      this.key = null;
      this.value = null;
      this.timestamp = null;
      this.robot_id = null;
    }
    else {
      if (initObj.hasOwnProperty('bb_id')) {
        this.bb_id = initObj.bb_id
      }
      else {
        this.bb_id = 0;
      }
      if (initObj.hasOwnProperty('on_robot_id')) {
        this.on_robot_id = initObj.on_robot_id
      }
      else {
        this.on_robot_id = 0;
      }
      if (initObj.hasOwnProperty('key')) {
        this.key = initObj.key
      }
      else {
        this.key = '';
      }
      if (initObj.hasOwnProperty('value')) {
        this.value = initObj.value
      }
      else {
        this.value = [];
      }
      if (initObj.hasOwnProperty('timestamp')) {
        this.timestamp = initObj.timestamp
      }
      else {
        this.timestamp = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('robot_id')) {
        this.robot_id = initObj.robot_id
      }
      else {
        this.robot_id = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type BlackBoardPut
    // Serialize message field [bb_id]
    bufferOffset = _serializer.int32(obj.bb_id, buffer, bufferOffset);
    // Serialize message field [on_robot_id]
    bufferOffset = _serializer.int32(obj.on_robot_id, buffer, bufferOffset);
    // Serialize message field [key]
    bufferOffset = _serializer.string(obj.key, buffer, bufferOffset);
    // Serialize message field [value]
    bufferOffset = _arraySerializer.uint8(obj.value, buffer, bufferOffset, null);
    // Serialize message field [timestamp]
    bufferOffset = _serializer.time(obj.timestamp, buffer, bufferOffset);
    // Serialize message field [robot_id]
    bufferOffset = _serializer.int32(obj.robot_id, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type BlackBoardPut
    let len;
    let data = new BlackBoardPut(null);
    // Deserialize message field [bb_id]
    data.bb_id = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [on_robot_id]
    data.on_robot_id = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [key]
    data.key = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [value]
    data.value = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [timestamp]
    data.timestamp = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [robot_id]
    data.robot_id = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.key.length;
    length += object.value.length;
    return length + 28;
  }

  static datatype() {
    // Returns string type for a message object
    return 'gsdf_msgs/BlackBoardPut';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '21fe3110556151fb76fd0bddb9325f46';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 bb_id
    int32 on_robot_id
    string key
    uint8[] value
    time timestamp
    int32 robot_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new BlackBoardPut(null);
    if (msg.bb_id !== undefined) {
      resolved.bb_id = msg.bb_id;
    }
    else {
      resolved.bb_id = 0
    }

    if (msg.on_robot_id !== undefined) {
      resolved.on_robot_id = msg.on_robot_id;
    }
    else {
      resolved.on_robot_id = 0
    }

    if (msg.key !== undefined) {
      resolved.key = msg.key;
    }
    else {
      resolved.key = ''
    }

    if (msg.value !== undefined) {
      resolved.value = msg.value;
    }
    else {
      resolved.value = []
    }

    if (msg.timestamp !== undefined) {
      resolved.timestamp = msg.timestamp;
    }
    else {
      resolved.timestamp = {secs: 0, nsecs: 0}
    }

    if (msg.robot_id !== undefined) {
      resolved.robot_id = msg.robot_id;
    }
    else {
      resolved.robot_id = 0
    }

    return resolved;
    }
};

module.exports = BlackBoardPut;
