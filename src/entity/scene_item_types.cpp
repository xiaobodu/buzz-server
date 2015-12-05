/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "scene_item_types.h"

#include <algorithm>

namespace entity {

int _kSceneItemAoiFieldsValues[] = {
  SceneItemAoiFields::AOI_BEGIN,
  SceneItemAoiFields::TYPE,
  SceneItemAoiFields::TEMPLATE,
  SceneItemAoiFields::BIND,
  SceneItemAoiFields::NUMBER,
  SceneItemAoiFields::AOI_END
};
const char* _kSceneItemAoiFieldsNames[] = {
  "AOI_BEGIN",
  "TYPE",
  "TEMPLATE",
  "BIND",
  "NUMBER",
  "AOI_END"
};
const std::map<int, const char*> _SceneItemAoiFields_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kSceneItemAoiFieldsValues, _kSceneItemAoiFieldsNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

const char* SceneItemAoiField::ascii_fingerprint = "46A703A33337BED2F62F386FC66B2A5F";
const uint8_t SceneItemAoiField::binary_fingerprint[16] = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

uint32_t SceneItemAoiField::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_field_ = false;
  bool isset_value_ = false;

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
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->field_ = (SceneItemAoiFields::type)ecast0;
          isset_field_ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->value_);
          isset_value_ = true;
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

  if (!isset_field_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value_)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t SceneItemAoiField::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("SceneItemAoiField");

  xfer += oprot->writeFieldBegin("field_", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->field_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value_", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->value_);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SceneItemAoiField &a, SceneItemAoiField &b) {
  using ::std::swap;
  swap(a.field_, b.field_);
  swap(a.value_, b.value_);
}

} // namespace