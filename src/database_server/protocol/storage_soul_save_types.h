/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_soul_save_TYPES_H
#define storage_soul_save_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "storage_soul_login_types.h"


namespace database { namespace protocol {


class StorageSoulSaveRequest {
 public:

  static const char* ascii_fingerprint; // = "2C9C1B1EED5B713A886A7A1CAF56B04B";
  static const uint8_t binary_fingerprint[16]; // = {0x2C,0x9C,0x1B,0x1E,0xED,0x5B,0x71,0x3A,0x88,0x6A,0x7A,0x1C,0xAF,0x56,0xB0,0x4B};

  StorageSoulSaveRequest() : id_(0) {
  }

  virtual ~StorageSoulSaveRequest() throw() {}

  int64_t id_;
  std::vector< ::database::protocol::StorageSoulField>  fields_;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_fields_(const std::vector< ::database::protocol::StorageSoulField> & val) {
    fields_ = val;
  }

  bool operator == (const StorageSoulSaveRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(fields_ == rhs.fields_))
      return false;
    return true;
  }
  bool operator != (const StorageSoulSaveRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSoulSaveRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSoulSaveRequest &a, StorageSoulSaveRequest &b);


class StorageSoulSaveResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  StorageSoulSaveResponse() : result_(0) {
  }

  virtual ~StorageSoulSaveResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const StorageSoulSaveResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const StorageSoulSaveResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageSoulSaveResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageSoulSaveResponse &a, StorageSoulSaveResponse &b);

}} // namespace

#endif
