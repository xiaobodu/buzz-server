/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "session_social_event_types.h"

#include <algorithm>

namespace session { namespace server { namespace event {

const char* EventSocialContactsInfoUpdate::ascii_fingerprint = "3FFB72D93EBB335FA197A8C5C0C9D973";
const uint8_t EventSocialContactsInfoUpdate::binary_fingerprint[16] = {0x3F,0xFB,0x72,0xD9,0x3E,0xBB,0x33,0x5F,0xA1,0x97,0xA8,0xC5,0xC0,0xC9,0xD9,0x73};

uint32_t EventSocialContactsInfoUpdate::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->online_);
          this->__isset.online_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->level_);
          this->__isset.level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->gender_ = ( ::entity::GenderType::type)ecast0;
          this->__isset.gender_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->vocation_ = ( ::entity::VocationType::type)ecast1;
          this->__isset.vocation_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->map_);
          this->__isset.map_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->last_logout_time_);
          this->__isset.last_logout_time_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->signature_);
          this->__isset.signature_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSocialContactsInfoUpdate::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSocialContactsInfoUpdate");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.online_) {
    xfer += oprot->writeFieldBegin("online_", ::apache::thrift::protocol::T_BOOL, 2);
    xfer += oprot->writeBool(this->online_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.level_) {
    xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32(this->level_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.gender_) {
    xfer += oprot->writeFieldBegin("gender_", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32((int32_t)this->gender_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vocation_) {
    xfer += oprot->writeFieldBegin("vocation_", ::apache::thrift::protocol::T_I32, 5);
    xfer += oprot->writeI32((int32_t)this->vocation_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.map_) {
    xfer += oprot->writeFieldBegin("map_", ::apache::thrift::protocol::T_I16, 6);
    xfer += oprot->writeI16(this->map_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.last_logout_time_) {
    xfer += oprot->writeFieldBegin("last_logout_time_", ::apache::thrift::protocol::T_STRING, 7);
    xfer += oprot->writeString(this->last_logout_time_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.signature_) {
    xfer += oprot->writeFieldBegin("signature_", ::apache::thrift::protocol::T_STRING, 8);
    xfer += oprot->writeString(this->signature_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSocialContactsInfoUpdate &a, EventSocialContactsInfoUpdate &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.online_, b.online_);
  swap(a.level_, b.level_);
  swap(a.gender_, b.gender_);
  swap(a.vocation_, b.vocation_);
  swap(a.map_, b.map_);
  swap(a.last_logout_time_, b.last_logout_time_);
  swap(a.signature_, b.signature_);
  swap(a.__isset, b.__isset);
}

const char* EventSocialEnemyInfoUpdate::ascii_fingerprint = "6E3CD7CBF006E236C2B836156F7CF038";
const uint8_t EventSocialEnemyInfoUpdate::binary_fingerprint[16] = {0x6E,0x3C,0xD7,0xCB,0xF0,0x06,0xE2,0x36,0xC2,0xB8,0x36,0x15,0x6F,0x7C,0xF0,0x38};

uint32_t EventSocialEnemyInfoUpdate::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->online_);
          this->__isset.online_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->level_);
          this->__isset.level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast2;
          xfer += iprot->readI32(ecast2);
          this->gender_ = ( ::entity::GenderType::type)ecast2;
          this->__isset.gender_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast3;
          xfer += iprot->readI32(ecast3);
          this->vocation_ = ( ::entity::VocationType::type)ecast3;
          this->__isset.vocation_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->map_);
          this->__isset.map_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventSocialEnemyInfoUpdate::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventSocialEnemyInfoUpdate");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.online_) {
    xfer += oprot->writeFieldBegin("online_", ::apache::thrift::protocol::T_BOOL, 2);
    xfer += oprot->writeBool(this->online_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.level_) {
    xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32(this->level_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.gender_) {
    xfer += oprot->writeFieldBegin("gender_", ::apache::thrift::protocol::T_I32, 4);
    xfer += oprot->writeI32((int32_t)this->gender_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.vocation_) {
    xfer += oprot->writeFieldBegin("vocation_", ::apache::thrift::protocol::T_I32, 5);
    xfer += oprot->writeI32((int32_t)this->vocation_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.map_) {
    xfer += oprot->writeFieldBegin("map_", ::apache::thrift::protocol::T_I16, 6);
    xfer += oprot->writeI16(this->map_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventSocialEnemyInfoUpdate &a, EventSocialEnemyInfoUpdate &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.online_, b.online_);
  swap(a.level_, b.level_);
  swap(a.gender_, b.gender_);
  swap(a.vocation_, b.vocation_);
  swap(a.map_, b.map_);
  swap(a.__isset, b.__isset);
}

const char* EventHomelandFriendInfoUpdate::ascii_fingerprint = "3B51D028A8CD2EC4A658BAE7819188D3";
const uint8_t EventHomelandFriendInfoUpdate::binary_fingerprint[16] = {0x3B,0x51,0xD0,0x28,0xA8,0xCD,0x2E,0xC4,0xA6,0x58,0xBA,0xE7,0x81,0x91,0x88,0xD3};

uint32_t EventHomelandFriendInfoUpdate::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->can_visit_);
          this->__isset.can_visit_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->tree_can_water_);
          this->__isset.tree_can_water_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->tree_can_steal_);
          this->__isset.tree_can_steal_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventHomelandFriendInfoUpdate::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventHomelandFriendInfoUpdate");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.can_visit_) {
    xfer += oprot->writeFieldBegin("can_visit_", ::apache::thrift::protocol::T_BOOL, 2);
    xfer += oprot->writeBool(this->can_visit_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.tree_can_water_) {
    xfer += oprot->writeFieldBegin("tree_can_water_", ::apache::thrift::protocol::T_BOOL, 3);
    xfer += oprot->writeBool(this->tree_can_water_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.tree_can_steal_) {
    xfer += oprot->writeFieldBegin("tree_can_steal_", ::apache::thrift::protocol::T_BOOL, 4);
    xfer += oprot->writeBool(this->tree_can_steal_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventHomelandFriendInfoUpdate &a, EventHomelandFriendInfoUpdate &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.can_visit_, b.can_visit_);
  swap(a.tree_can_water_, b.tree_can_water_);
  swap(a.tree_can_steal_, b.tree_can_steal_);
  swap(a.__isset, b.__isset);
}

const char* EventHomelandInvaderInfoUpdate::ascii_fingerprint = "A32764E5B9F7FF55C0C2C35F26922597";
const uint8_t EventHomelandInvaderInfoUpdate::binary_fingerprint[16] = {0xA3,0x27,0x64,0xE5,0xB9,0xF7,0xFF,0x55,0xC0,0xC2,0xC3,0x5F,0x26,0x92,0x25,0x97};

uint32_t EventHomelandInvaderInfoUpdate::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->level_);
          this->__isset.level_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->can_visit_);
          this->__isset.can_visit_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->can_strike_back_);
          this->__isset.can_strike_back_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t EventHomelandInvaderInfoUpdate::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("EventHomelandInvaderInfoUpdate");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.level_) {
    xfer += oprot->writeFieldBegin("level_", ::apache::thrift::protocol::T_I32, 2);
    xfer += oprot->writeI32(this->level_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.can_visit_) {
    xfer += oprot->writeFieldBegin("can_visit_", ::apache::thrift::protocol::T_BOOL, 3);
    xfer += oprot->writeBool(this->can_visit_);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.can_strike_back_) {
    xfer += oprot->writeFieldBegin("can_strike_back_", ::apache::thrift::protocol::T_BOOL, 4);
    xfer += oprot->writeBool(this->can_strike_back_);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(EventHomelandInvaderInfoUpdate &a, EventHomelandInvaderInfoUpdate &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.level_, b.level_);
  swap(a.can_visit_, b.can_visit_);
  swap(a.can_strike_back_, b.can_strike_back_);
  swap(a.__isset, b.__isset);
}

}}} // namespace
