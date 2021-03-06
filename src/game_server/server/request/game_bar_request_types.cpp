/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "game_bar_request_types.h"

#include <algorithm>

namespace game { namespace server { namespace request {

const char* RequestBarStart::ascii_fingerprint = "1436097DE98403ECF290FF7F19A88437";
const uint8_t RequestBarStart::binary_fingerprint[16] = {0x14,0x36,0x09,0x7D,0xE9,0x84,0x03,0xEC,0xF2,0x90,0xFF,0x7F,0x19,0xA8,0x84,0x37};

uint32_t RequestBarStart::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_actor_id_ = false;
  bool isset_bar_id_ = false;
  bool isset_type_ = false;

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
          xfer += iprot->readI32(this->bar_id_);
          isset_bar_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type_ = ( ::entity::BarModuleType::type)ecast0;
          isset_type_ = true;
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
  if (!isset_bar_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_type_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestBarStart::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestBarStart");

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("bar_id_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->bar_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type_", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->type_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestBarStart &a, RequestBarStart &b) {
  using ::std::swap;
  swap(a.actor_id_, b.actor_id_);
  swap(a.bar_id_, b.bar_id_);
  swap(a.type_, b.type_);
}

const char* RequestBarCheck::ascii_fingerprint = "9C2A05F173B50306037BDE9AE30E1B99";
const uint8_t RequestBarCheck::binary_fingerprint[16] = {0x9C,0x2A,0x05,0xF1,0x73,0xB5,0x03,0x06,0x03,0x7B,0xDE,0x9A,0xE3,0x0E,0x1B,0x99};

uint32_t RequestBarCheck::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_bar_id_ = false;
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
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->bar_id_);
          isset_bar_id_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->actor_id_);
          isset_actor_id_ = true;
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

  if (!isset_bar_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_actor_id_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t RequestBarCheck::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("RequestBarCheck");

  xfer += oprot->writeFieldBegin("bar_id_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->bar_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("actor_id_", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->actor_id_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RequestBarCheck &a, RequestBarCheck &b) {
  using ::std::swap;
  swap(a.bar_id_, b.bar_id_);
  swap(a.actor_id_, b.actor_id_);
}

}}} // namespace
