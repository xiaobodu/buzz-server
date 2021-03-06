/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef mail_system_TYPES_H
#define mail_system_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct SystemMailChildType {
  enum type {
    MIN = 0,
    ACTOR_BEGIN = 0,
    ITEM_BEGIN = 100,
    SKILL_BEGIN = 200,
    BUFF_BEGIN = 300,
    SCENE_BEGIN = 400,
    SOU_BEGI = 500,
    TASK_BEGIN = 600,
    ATTR_BEGIN = 700,
    CHAT_BEGIN = 800,
    MAIL_BEGIN = 900,
    GUILD_BEGIN = 1000,
    GUILD_DISMISS = 1001,
    MAX = 1002
  };
};

extern const std::map<int, const char*> _SystemMailChildType_VALUES_TO_NAMES;

} // namespace

#endif
