/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef async_request_TYPES_H
#define async_request_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "server_type_types.h"
#include "database_storage_types.h"


namespace database { namespace protocol {


class TerminalKey {
 public:

  static const char* ascii_fingerprint; // = "46A703A33337BED2F62F386FC66B2A5F";
  static const uint8_t binary_fingerprint[16]; // = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

  TerminalKey() : type_(( ::global::protocol::ServerType::type)0), id_(0) {
  }

  virtual ~TerminalKey() throw() {}

   ::global::protocol::ServerType::type type_;
  int32_t id_;

  void __set_type_(const  ::global::protocol::ServerType::type val) {
    type_ = val;
  }

  void __set_id_(const int32_t val) {
    id_ = val;
  }

  bool operator == (const TerminalKey & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(id_ == rhs.id_))
      return false;
    return true;
  }
  bool operator != (const TerminalKey &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TerminalKey & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(TerminalKey &a, TerminalKey &b);


class AsyncRequestMessage {
 public:

  static const char* ascii_fingerprint; // = "14EFC92A196B9DF9F10760997ADFFB95";
  static const uint8_t binary_fingerprint[16]; // = {0x14,0xEF,0xC9,0x2A,0x19,0x6B,0x9D,0xF9,0xF1,0x07,0x60,0x99,0x7A,0xDF,0xFB,0x95};

  AsyncRequestMessage() : type_(( ::database::protocol::StorageType::type)0), message_(), channel_(0) {
  }

  virtual ~AsyncRequestMessage() throw() {}

   ::database::protocol::StorageType::type type_;
  std::string message_;
  int64_t channel_;
  TerminalKey terminal_key_;

  void __set_type_(const  ::database::protocol::StorageType::type val) {
    type_ = val;
  }

  void __set_message_(const std::string& val) {
    message_ = val;
  }

  void __set_channel_(const int64_t val) {
    channel_ = val;
  }

  void __set_terminal_key_(const TerminalKey& val) {
    terminal_key_ = val;
  }

  bool operator == (const AsyncRequestMessage & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(message_ == rhs.message_))
      return false;
    if (!(channel_ == rhs.channel_))
      return false;
    if (!(terminal_key_ == rhs.terminal_key_))
      return false;
    return true;
  }
  bool operator != (const AsyncRequestMessage &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AsyncRequestMessage & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AsyncRequestMessage &a, AsyncRequestMessage &b);

}} // namespace

#endif
