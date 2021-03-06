/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef storage_actor_online_TYPES_H
#define storage_actor_online_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace database { namespace protocol {


class StorageActorOnlineRequest {
 public:

  static const char* ascii_fingerprint; // = "F33135321253DAEB67B0E79E416CA831";
  static const uint8_t binary_fingerprint[16]; // = {0xF3,0x31,0x35,0x32,0x12,0x53,0xDA,0xEB,0x67,0xB0,0xE7,0x9E,0x41,0x6C,0xA8,0x31};

  StorageActorOnlineRequest() : id_(0), sequence_(0) {
  }

  virtual ~StorageActorOnlineRequest() throw() {}

  int64_t id_;
  int64_t sequence_;

  void __set_id_(const int64_t val) {
    id_ = val;
  }

  void __set_sequence_(const int64_t val) {
    sequence_ = val;
  }

  bool operator == (const StorageActorOnlineRequest & rhs) const
  {
    if (!(id_ == rhs.id_))
      return false;
    if (!(sequence_ == rhs.sequence_))
      return false;
    return true;
  }
  bool operator != (const StorageActorOnlineRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageActorOnlineRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageActorOnlineRequest &a, StorageActorOnlineRequest &b);


class StorageActorOnlineResponse {
 public:

  static const char* ascii_fingerprint; // = "A7D440367E85134EBDBAA7BCA01056D0";
  static const uint8_t binary_fingerprint[16]; // = {0xA7,0xD4,0x40,0x36,0x7E,0x85,0x13,0x4E,0xBD,0xBA,0xA7,0xBC,0xA0,0x10,0x56,0xD0};

  StorageActorOnlineResponse() : online_(0) {
  }

  virtual ~StorageActorOnlineResponse() throw() {}

  int8_t online_;

  void __set_online_(const int8_t val) {
    online_ = val;
  }

  bool operator == (const StorageActorOnlineResponse & rhs) const
  {
    if (!(online_ == rhs.online_))
      return false;
    return true;
  }
  bool operator != (const StorageActorOnlineResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StorageActorOnlineResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StorageActorOnlineResponse &a, StorageActorOnlineResponse &b);

}} // namespace

#endif
