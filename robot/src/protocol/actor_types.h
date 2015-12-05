/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef actor_TYPES_H
#define actor_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct ActorAoiFields {
  enum type {
    AOI_BEGIN = 0,
    GENDER = 0,
    APPEARANCE = 1,
    BROWN_NAME = 2,
    CURRENT_SWORD = 3,
    CURRENT_SPIRIT_FACADE = 4,
    VIP = 5,
    AOI_END = 6
  };
};

extern const std::map<int, const char*> _ActorAoiFields_VALUES_TO_NAMES;

struct ActorClientFields {
  enum type {
    CLIENT_BEGIN = 0,
    CURRENT_EXP = 0,
    NIMBUS = 1,
    GOLD = 2,
    FREEDOM_DOLLARS = 3,
    RESTRICT_DOLLARS = 4,
    HONOUR = 5,
    WAR_SOUL = 6,
    GEM_SHARD = 7,
    PACKET_CAPACITY = 8,
    STORAGE_CAPACITY = 9,
    PK_MODE = 10,
    FCM_TYPE = 11,
    FCM_STATUS = 12,
    JUSTICE = 13,
    MIRACLE_INTEGRAL = 14,
    LEGEND_INTEGRAL = 15,
    ARENA_INTEGRAL = 16,
    CLIENT_END = 17
  };
};

extern const std::map<int, const char*> _ActorClientFields_VALUES_TO_NAMES;

struct ActorServerFields {
  enum type {
    SERVER_BEGIN = 0,
    KILL_MOB_AND_ZAZEN_EXP_ADD_PERCENT = 0,
    KILL_MOB_AND_ZAZEN_NIMBUS_ADD_PERCENT = 1,
    SERVER_END = 2
  };
};

extern const std::map<int, const char*> _ActorServerFields_VALUES_TO_NAMES;

struct ActorPKModeType {
  enum type {
    PEACE = 0,
    ATTACK = 1,
    BATTLE = 2
  };
};

extern const std::map<int, const char*> _ActorPKModeType_VALUES_TO_NAMES;

struct ActorPKChooseType {
  enum type {
    SELF_DEFENSE = 1,
    NOT_ATTACK_TEAMMATE = 2,
    NOT_ATTACK_SAME_GUILD = 4,
    NOT_ATTACK_NO_BROWN_ACTOR = 8
  };
};

extern const std::map<int, const char*> _ActorPKChooseType_VALUES_TO_NAMES;

struct ReviveType {
  enum type {
    SPAWN_POINT = 0,
    STAY = 1
  };
};

extern const std::map<int, const char*> _ReviveType_VALUES_TO_NAMES;

struct FcmType {
  enum type {
    UNKNOWN = 0,
    MINOR = 1,
    ADULT = 2
  };
};

extern const std::map<int, const char*> _FcmType_VALUES_TO_NAMES;

struct FcmStatusType {
  enum type {
    NORMAL = 0,
    HALF_INCOME = 1,
    ZERO_INCOME = 2
  };
};

extern const std::map<int, const char*> _FcmStatusType_VALUES_TO_NAMES;


class ActorAoiField {
 public:

  static const char* ascii_fingerprint; // = "46A703A33337BED2F62F386FC66B2A5F";
  static const uint8_t binary_fingerprint[16]; // = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

  ActorAoiField() : field_((ActorAoiFields::type)0), value_(0) {
  }

  virtual ~ActorAoiField() throw() {}

  ActorAoiFields::type field_;
  int32_t value_;

  void __set_field_(const ActorAoiFields::type val) {
    field_ = val;
  }

  void __set_value_(const int32_t val) {
    value_ = val;
  }

  bool operator == (const ActorAoiField & rhs) const
  {
    if (!(field_ == rhs.field_))
      return false;
    if (!(value_ == rhs.value_))
      return false;
    return true;
  }
  bool operator != (const ActorAoiField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActorAoiField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ActorAoiField &a, ActorAoiField &b);


class ActorClientField {
 public:

  static const char* ascii_fingerprint; // = "46A703A33337BED2F62F386FC66B2A5F";
  static const uint8_t binary_fingerprint[16]; // = {0x46,0xA7,0x03,0xA3,0x33,0x37,0xBE,0xD2,0xF6,0x2F,0x38,0x6F,0xC6,0x6B,0x2A,0x5F};

  ActorClientField() : field_((ActorClientFields::type)0), value_(0) {
  }

  virtual ~ActorClientField() throw() {}

  ActorClientFields::type field_;
  int32_t value_;

  void __set_field_(const ActorClientFields::type val) {
    field_ = val;
  }

  void __set_value_(const int32_t val) {
    value_ = val;
  }

  bool operator == (const ActorClientField & rhs) const
  {
    if (!(field_ == rhs.field_))
      return false;
    if (!(value_ == rhs.value_))
      return false;
    return true;
  }
  bool operator != (const ActorClientField &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ActorClientField & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ActorClientField &a, ActorClientField &b);

} // namespace

#endif