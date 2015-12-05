/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "fight_score_types.h"

#include <algorithm>

namespace entity {

int _kFightScoreTypeValues[] = {
  FightScoreType::MIN,
  FightScoreType::AXE,
  FightScoreType::SHOOT,
  FightScoreType::MAGIC,
  FightScoreType::MAX
};
const char* _kFightScoreTypeNames[] = {
  "MIN",
  "AXE",
  "SHOOT",
  "MAGIC",
  "MAX"
};
const std::map<int, const char*> _FightScoreType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kFightScoreTypeValues, _kFightScoreTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kSubFightScoreTypeValues[] = {
  SubFightScoreType::MIN,
  SubFightScoreType::ACTOR_BASE,
  SubFightScoreType::SOUL,
  SubFightScoreType::SOUL_GROUP,
  SubFightScoreType::GUILD_SKILL,
  SubFightScoreType::GEM,
  SubFightScoreType::SPIRIT,
  SubFightScoreType::NOBLE,
  SubFightScoreType::ELEMENT,
  SubFightScoreType::SWORD,
  SubFightScoreType::LEGENDARY_WEAPON,
  SubFightScoreType::TASK_LAYER,
  SubFightScoreType::AXE_EQUIPMENT,
  SubFightScoreType::SHOOT_EQUIPMENT,
  SubFightScoreType::MAGIC_EQUIPMENT,
  SubFightScoreType::AXE_RUNE,
  SubFightScoreType::SHOOT_RUNE,
  SubFightScoreType::MAGIC_RUNE,
  SubFightScoreType::MAX
};
const char* _kSubFightScoreTypeNames[] = {
  "MIN",
  "ACTOR_BASE",
  "SOUL",
  "SOUL_GROUP",
  "GUILD_SKILL",
  "GEM",
  "SPIRIT",
  "NOBLE",
  "ELEMENT",
  "SWORD",
  "LEGENDARY_WEAPON",
  "TASK_LAYER",
  "AXE_EQUIPMENT",
  "SHOOT_EQUIPMENT",
  "MAGIC_EQUIPMENT",
  "AXE_RUNE",
  "SHOOT_RUNE",
  "MAGIC_RUNE",
  "MAX"
};
const std::map<int, const char*> _SubFightScoreType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(19, _kSubFightScoreTypeValues, _kSubFightScoreTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

} // namespace