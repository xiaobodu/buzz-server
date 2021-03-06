/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_mail_affix_state_TYPES_H
#define storage_mail_affix_state_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "mail_types.h"


namespace database { namespace protocol {


class StorageMailAffixStateRequest {
 public:

  static const char* ascii_fingerprint; // = "1436097DE98403ECF290FF7F19A88437";
  static const uint8_t binary_fingerprint[16]; // = {0x14,0x36,0x09,0x7D,0xE9,0x84,0x03,0xEC,0xF2,0x90,0xFF,0x7F,0x19,0xA8,0x84,0x37};

  StorageMailAffixStateRequest() : id_(0), mail_id_(0), type_(( ::entity::MailAffixType::type)0) {
  }

  virtual ~StorageMailAffixStateRequest() throw() {}

  int64_t id_;
  int32_t mail_id_;
   ::entity::MailAffixType::type type_;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_mail_id_(const int32_t val) {
    mail_id_ = val;
  }

  void __set_type_(const  ::entity::MailAffixType::type val) {
    type_ = val;
  }

  bool operator == (const StorageMailAffixStateRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(mail_id_ == rhs.mail_id_))
      return false;
    if (!(type_ == rhs.type_))
      return false;
    return true;
  }
  bool operator != (const StorageMailAffixStateRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageMailAffixStateRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageMailAffixStateRequest &a, StorageMailAffixStateRequest &b);


class StorageMailAffixStateResponse {
 public:

  static const char* ascii_fingerprint; // = "99914B932BD37A50B983C5E7C90AE93B";
  static const uint8_t binary_fingerprint[16]; // = {0x99,0x91,0x4B,0x93,0x2B,0xD3,0x7A,0x50,0xB9,0x83,0xC5,0xE7,0xC9,0x0A,0xE9,0x3B};

  StorageMailAffixStateResponse() {
  }

  virtual ~StorageMailAffixStateResponse() throw() {}


  bool operator == (const StorageMailAffixStateResponse & /* rhs */) const
  {
    return true;
  }
  bool operator != (const StorageMailAffixStateResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageMailAffixStateResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageMailAffixStateResponse &a, StorageMailAffixStateResponse &b);

}} // namespace

#endif
