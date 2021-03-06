/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef bar_TYPES_H
#define bar_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct BarEventType {
  enum type {
    MIX = 0,
    ACTOR_MOVE = 1,
    ACTOR_DIE = 2,
    ACTOR_HURT = 3,
    ACTOR_SKILL = 4,
    ACTOR_USE_ITEM = 5,
    MAX = 6
  };
};

extern const std::map<int, const char*> _BarEventType_VALUES_TO_NAMES;

struct BarModuleType {
  enum type {
    BAR_INVALID = 0,
    BAR_TYPE_GATHER = 1,
    BAR_TYPE_SPIRIT_TRANSFORMED = 2
  };
};

extern const std::map<int, const char*> _BarModuleType_VALUES_TO_NAMES;

} // namespace

#endif
