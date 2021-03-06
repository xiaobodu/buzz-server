/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef game_buff_request_TYPES_H
#define game_buff_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "game_request_types.h"
#include "entity_types.h"


namespace game { namespace server { namespace request {


class RequestBuffStart {
 public:

  static const char* ascii_fingerprint; // = "8F8E347B5834E39A5119A0202F7C5398";
  static const uint8_t binary_fingerprint[16]; // = {0x8F,0x8E,0x34,0x7B,0x58,0x34,0xE3,0x9A,0x51,0x19,0xA0,0x20,0x2F,0x7C,0x53,0x98};

  RequestBuffStart() : src_entity_type_(( ::entity::EntityType::type)0), src_entity_id_(0), dest_entity_type_(( ::entity::EntityType::type)0), dest_entity_id_(0), buff_id_(0), succeed_(0) {
  }

  virtual ~RequestBuffStart() throw() {}

   ::entity::EntityType::type src_entity_type_;
  int64_t src_entity_id_;
   ::entity::EntityType::type dest_entity_type_;
  int64_t dest_entity_id_;
  int32_t buff_id_;
  bool succeed_;

  void __set_src_entity_type_(const  ::entity::EntityType::type val) {
    src_entity_type_ = val;
  }

  void __set_src_entity_id_(const int64_t val) {
    src_entity_id_ = val;
  }

  void __set_dest_entity_type_(const  ::entity::EntityType::type val) {
    dest_entity_type_ = val;
  }

  void __set_dest_entity_id_(const int64_t val) {
    dest_entity_id_ = val;
  }

  void __set_buff_id_(const int32_t val) {
    buff_id_ = val;
  }

  void __set_succeed_(const bool val) {
    succeed_ = val;
  }

  bool operator == (const RequestBuffStart & rhs) const
  {
    if (!(src_entity_type_ == rhs.src_entity_type_))
      return false;
    if (!(src_entity_id_ == rhs.src_entity_id_))
      return false;
    if (!(dest_entity_type_ == rhs.dest_entity_type_))
      return false;
    if (!(dest_entity_id_ == rhs.dest_entity_id_))
      return false;
    if (!(buff_id_ == rhs.buff_id_))
      return false;
    if (!(succeed_ == rhs.succeed_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffStart &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffStart & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffStart &a, RequestBuffStart &b);


class RequestBuffEnd {
 public:

  static const char* ascii_fingerprint; // = "729E45C97A0E730BDEEBC207E4F729D3";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

  RequestBuffEnd() : dest_entity_type_(( ::entity::EntityType::type)0), dest_entity_id_(0), buff_id_(0), succeed_(0) {
  }

  virtual ~RequestBuffEnd() throw() {}

   ::entity::EntityType::type dest_entity_type_;
  int64_t dest_entity_id_;
  int32_t buff_id_;
  bool succeed_;

  void __set_dest_entity_type_(const  ::entity::EntityType::type val) {
    dest_entity_type_ = val;
  }

  void __set_dest_entity_id_(const int64_t val) {
    dest_entity_id_ = val;
  }

  void __set_buff_id_(const int32_t val) {
    buff_id_ = val;
  }

  void __set_succeed_(const bool val) {
    succeed_ = val;
  }

  bool operator == (const RequestBuffEnd & rhs) const
  {
    if (!(dest_entity_type_ == rhs.dest_entity_type_))
      return false;
    if (!(dest_entity_id_ == rhs.dest_entity_id_))
      return false;
    if (!(buff_id_ == rhs.buff_id_))
      return false;
    if (!(succeed_ == rhs.succeed_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffEnd &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffEnd & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffEnd &a, RequestBuffEnd &b);


class RequestBuffClear {
 public:

  static const char* ascii_fingerprint; // = "729E45C97A0E730BDEEBC207E4F729D3";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

  RequestBuffClear() : type_(( ::entity::EntityType::type)0), id_(0), buff_id_(0), succeed_(0) {
  }

  virtual ~RequestBuffClear() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t buff_id_;
  bool succeed_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_buff_id_(const int32_t val) {
    buff_id_ = val;
  }

  void __set_succeed_(const bool val) {
    succeed_ = val;
  }

  bool operator == (const RequestBuffClear & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(buff_id_ == rhs.buff_id_))
      return false;
    if (!(succeed_ == rhs.succeed_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffClear &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffClear & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffClear &a, RequestBuffClear &b);


class RequestBuffClearGroup {
 public:

  static const char* ascii_fingerprint; // = "729E45C97A0E730BDEEBC207E4F729D3";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

  RequestBuffClearGroup() : type_(( ::entity::EntityType::type)0), id_(0), clear_group_(0), succeed_(0) {
  }

  virtual ~RequestBuffClearGroup() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t clear_group_;
  bool succeed_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_clear_group_(const int32_t val) {
    clear_group_ = val;
  }

  void __set_succeed_(const bool val) {
    succeed_ = val;
  }

  bool operator == (const RequestBuffClearGroup & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(clear_group_ == rhs.clear_group_))
      return false;
    if (!(succeed_ == rhs.succeed_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffClearGroup &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffClearGroup & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffClearGroup &a, RequestBuffClearGroup &b);


class RequestBuffSetForbidGroup {
 public:

  static const char* ascii_fingerprint; // = "729E45C97A0E730BDEEBC207E4F729D3";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

  RequestBuffSetForbidGroup() : type_(( ::entity::EntityType::type)0), id_(0), clear_group_(0), succeed_(0) {
  }

  virtual ~RequestBuffSetForbidGroup() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t clear_group_;
  bool succeed_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_clear_group_(const int32_t val) {
    clear_group_ = val;
  }

  void __set_succeed_(const bool val) {
    succeed_ = val;
  }

  bool operator == (const RequestBuffSetForbidGroup & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(clear_group_ == rhs.clear_group_))
      return false;
    if (!(succeed_ == rhs.succeed_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffSetForbidGroup &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffSetForbidGroup & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffSetForbidGroup &a, RequestBuffSetForbidGroup &b);


class RequestBuffResetForbidGroup {
 public:

  static const char* ascii_fingerprint; // = "729E45C97A0E730BDEEBC207E4F729D3";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

  RequestBuffResetForbidGroup() : type_(( ::entity::EntityType::type)0), id_(0), clear_group_(0), succeed_(0) {
  }

  virtual ~RequestBuffResetForbidGroup() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t clear_group_;
  bool succeed_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_clear_group_(const int32_t val) {
    clear_group_ = val;
  }

  void __set_succeed_(const bool val) {
    succeed_ = val;
  }

  bool operator == (const RequestBuffResetForbidGroup & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(clear_group_ == rhs.clear_group_))
      return false;
    if (!(succeed_ == rhs.succeed_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffResetForbidGroup &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffResetForbidGroup & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffResetForbidGroup &a, RequestBuffResetForbidGroup &b);


class RequestBuffGetExist {
 public:

  static const char* ascii_fingerprint; // = "729E45C97A0E730BDEEBC207E4F729D3";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x9E,0x45,0xC9,0x7A,0x0E,0x73,0x0B,0xDE,0xEB,0xC2,0x07,0xE4,0xF7,0x29,0xD3};

  RequestBuffGetExist() : type_(( ::entity::EntityType::type)0), id_(0), buff_id_(0), exist_(0) {
  }

  virtual ~RequestBuffGetExist() throw() {}

   ::entity::EntityType::type type_;
  int64_t id_;
  int32_t buff_id_;
  bool exist_;

  void __set_type_(const  ::entity::EntityType::type val) {
    type_ = val;
  }

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_buff_id_(const int32_t val) {
    buff_id_ = val;
  }

  void __set_exist_(const bool val) {
    exist_ = val;
  }

  bool operator == (const RequestBuffGetExist & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    if (!(buff_id_ == rhs.buff_id_))
      return false;
    if (!(exist_ == rhs.exist_))
      return false;
    return true;
  }
  bool operator != (const RequestBuffGetExist &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RequestBuffGetExist & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(RequestBuffGetExist &a, RequestBuffGetExist &b);

}}} // namespace

#endif
