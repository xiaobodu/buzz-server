/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "achieve_types.h"

#include <algorithm>

namespace entity {

int _kAchieveConditionTypeValues[] = {
  AchieveConditionType::MIN,
  AchieveConditionType::SOUL_UNLOCK,
  AchieveConditionType::SOUL_UPGRAGE_LEVEL,
  AchieveConditionType::SKILL_USE,
  AchieveConditionType::FUNCTIONALITY_OPEN,
  AchieveConditionType::SPIRIT_UPGRADE_LEVEL,
  AchieveConditionType::SPIRIT_COLLECT_SHAPE,
  AchieveConditionType::KILL_ROLE,
  AchieveConditionType::BAG_EXPAND,
  AchieveConditionType::KILLED_SELF,
  AchieveConditionType::EQUIP_STRENGTH,
  AchieveConditionType::WEAR_EQUIP,
  AchieveConditionType::GEM_OPT,
  AchieveConditionType::GEM_STRENGTH,
  AchieveConditionType::RELIVE_WAY,
  AchieveConditionType::VOCATION_SET,
  AchieveConditionType::SOUL_SCHEME,
  AchieveConditionType::SWORD_UPGRADE,
  AchieveConditionType::SWORD_STRENGTH,
  AchieveConditionType::HOMELAND_BUILDING_UPGRADE,
  AchieveConditionType::HOMELAND_REVENUE,
  AchieveConditionType::HOMELAND_USE,
  AchieveConditionType::HOMELAND_WATER,
  AchieveConditionType::HOMELAND_OPT,
  AchieveConditionType::HOMELAND_ATTACK_NUM,
  AchieveConditionType::CORPS_OPT,
  AchieveConditionType::CORPS_JOB,
  AchieveConditionType::CORPS_GET_HOLY_CITY,
  AchieveConditionType::TO_SENCE,
  AchieveConditionType::NOLIBITY_GET_LEVEL,
  AchieveConditionType::USE_ITEM,
  AchieveConditionType::RESOURCE,
  AchieveConditionType::ACTOR_GET_VALUE,
  AchieveConditionType::PASS_STORY_COPY,
  AchieveConditionType::SELF_KILLED_SKILL,
  AchieveConditionType::KILLED_SELF_ACTOR_FIGHTING,
  AchieveConditionType::KILLED_SELF_ACTOR_LEVEL,
  AchieveConditionType::KILLED_SELF_ACTOR_APPEAR,
  AchieveConditionType::KILL_ACTOR_FIGHTING,
  AchieveConditionType::KILL_ACTOR_LEVEL,
  AchieveConditionType::KILL_ACTOR_APPEAR,
  AchieveConditionType::KILL_ACTOR_SEX,
  AchieveConditionType::VIP_STATUS,
  AchieveConditionType::MAX
};
const char* _kAchieveConditionTypeNames[] = {
  "MIN",
  "SOUL_UNLOCK",
  "SOUL_UPGRAGE_LEVEL",
  "SKILL_USE",
  "FUNCTIONALITY_OPEN",
  "SPIRIT_UPGRADE_LEVEL",
  "SPIRIT_COLLECT_SHAPE",
  "KILL_ROLE",
  "BAG_EXPAND",
  "KILLED_SELF",
  "EQUIP_STRENGTH",
  "WEAR_EQUIP",
  "GEM_OPT",
  "GEM_STRENGTH",
  "RELIVE_WAY",
  "VOCATION_SET",
  "SOUL_SCHEME",
  "SWORD_UPGRADE",
  "SWORD_STRENGTH",
  "HOMELAND_BUILDING_UPGRADE",
  "HOMELAND_REVENUE",
  "HOMELAND_USE",
  "HOMELAND_WATER",
  "HOMELAND_OPT",
  "HOMELAND_ATTACK_NUM",
  "CORPS_OPT",
  "CORPS_JOB",
  "CORPS_GET_HOLY_CITY",
  "TO_SENCE",
  "NOLIBITY_GET_LEVEL",
  "USE_ITEM",
  "RESOURCE",
  "ACTOR_GET_VALUE",
  "PASS_STORY_COPY",
  "SELF_KILLED_SKILL",
  "KILLED_SELF_ACTOR_FIGHTING",
  "KILLED_SELF_ACTOR_LEVEL",
  "KILLED_SELF_ACTOR_APPEAR",
  "KILL_ACTOR_FIGHTING",
  "KILL_ACTOR_LEVEL",
  "KILL_ACTOR_APPEAR",
  "KILL_ACTOR_SEX",
  "VIP_STATUS",
  "MAX"
};
const std::map<int, const char*> _AchieveConditionType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(44, _kAchieveConditionTypeValues, _kAchieveConditionTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveSkillUseTypeValues[] = {
  AchieveSkillUseType::ID,
  AchieveSkillUseType::TYPE
};
const char* _kAchieveSkillUseTypeNames[] = {
  "ID",
  "TYPE"
};
const std::map<int, const char*> _AchieveSkillUseType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveSkillUseTypeValues, _kAchieveSkillUseTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveKillRoleTypeValues[] = {
  AchieveKillRoleType::ANY_WAY,
  AchieveKillRoleType::APPEAR_STATUS,
  AchieveKillRoleType::BEAST_STATUS,
  AchieveKillRoleType::WING_STATUS
};
const char* _kAchieveKillRoleTypeNames[] = {
  "ANY_WAY",
  "APPEAR_STATUS",
  "BEAST_STATUS",
  "WING_STATUS"
};
const std::map<int, const char*> _AchieveKillRoleType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kAchieveKillRoleTypeValues, _kAchieveKillRoleTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveKilledSelfTypeValues[] = {
  AchieveKilledSelfType::ACTOR,
  AchieveKilledSelfType::ANY_WAY,
  AchieveKilledSelfType::ANY_NPC,
  AchieveKilledSelfType::SPECIALLY_NPC
};
const char* _kAchieveKilledSelfTypeNames[] = {
  "ACTOR",
  "ANY_WAY",
  "ANY_NPC",
  "SPECIALLY_NPC"
};
const std::map<int, const char*> _AchieveKilledSelfType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kAchieveKilledSelfTypeValues, _kAchieveKilledSelfTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveEquipStrengthTypeValues[] = {
  AchieveEquipStrengthType::SUCCESS,
  AchieveEquipStrengthType::FAILED
};
const char* _kAchieveEquipStrengthTypeNames[] = {
  "SUCCESS",
  "FAILED"
};
const std::map<int, const char*> _AchieveEquipStrengthType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveEquipStrengthTypeValues, _kAchieveEquipStrengthTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveWearEquipTypeValues[] = {
  AchieveWearEquipType::QUALITY,
  AchieveWearEquipType::STRENGTH_LEVEL
};
const char* _kAchieveWearEquipTypeNames[] = {
  "QUALITY",
  "STRENGTH_LEVEL"
};
const std::map<int, const char*> _AchieveWearEquipType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveWearEquipTypeValues, _kAchieveWearEquipTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveGemOptTypeValues[] = {
  AchieveGemOptType::INLAY,
  AchieveGemOptType::DOWN
};
const char* _kAchieveGemOptTypeNames[] = {
  "INLAY",
  "DOWN"
};
const std::map<int, const char*> _AchieveGemOptType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveGemOptTypeValues, _kAchieveGemOptTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveReliveTypeValues[] = {
  AchieveReliveType::CITY,
  AchieveReliveType::SLOT
};
const char* _kAchieveReliveTypeNames[] = {
  "CITY",
  "SLOT"
};
const std::map<int, const char*> _AchieveReliveType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveReliveTypeValues, _kAchieveReliveTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveHomelandRenenueTypeValues[] = {
  AchieveHomelandRenenueType::GOLDSTONE,
  AchieveHomelandRenenueType::IMPOSE
};
const char* _kAchieveHomelandRenenueTypeNames[] = {
  "GOLDSTONE",
  "IMPOSE"
};
const std::map<int, const char*> _AchieveHomelandRenenueType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveHomelandRenenueTypeValues, _kAchieveHomelandRenenueTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveHomelandUseTypeValues[] = {
  AchieveHomelandUseType::GOLDSTONE,
  AchieveHomelandUseType::IMPOSE
};
const char* _kAchieveHomelandUseTypeNames[] = {
  "GOLDSTONE",
  "IMPOSE"
};
const std::map<int, const char*> _AchieveHomelandUseType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveHomelandUseTypeValues, _kAchieveHomelandUseTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveHomelandWaterTypeValues[] = {
  AchieveHomelandWaterType::SELF,
  AchieveHomelandWaterType::OTHER
};
const char* _kAchieveHomelandWaterTypeNames[] = {
  "SELF",
  "OTHER"
};
const std::map<int, const char*> _AchieveHomelandWaterType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveHomelandWaterTypeValues, _kAchieveHomelandWaterTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveHomelandOptTypeValues[] = {
  AchieveHomelandOptType::TREE,
  AchieveHomelandOptType::VISIT_HOMELAND,
  AchieveHomelandOptType::ASSITANCE
};
const char* _kAchieveHomelandOptTypeNames[] = {
  "TREE",
  "VISIT_HOMELAND",
  "ASSITANCE"
};
const std::map<int, const char*> _AchieveHomelandOptType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kAchieveHomelandOptTypeValues, _kAchieveHomelandOptTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveAttackTypeValues[] = {
  AchieveAttackType::SUM,
  AchieveAttackType::DAY
};
const char* _kAchieveAttackTypeNames[] = {
  "SUM",
  "DAY"
};
const std::map<int, const char*> _AchieveAttackType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveAttackTypeValues, _kAchieveAttackTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveCopsActionTypeValues[] = {
  AchieveCopsActionType::ENTER,
  AchieveCopsActionType::LEAVE,
  AchieveCopsActionType::CREATE
};
const char* _kAchieveCopsActionTypeNames[] = {
  "ENTER",
  "LEAVE",
  "CREATE"
};
const std::map<int, const char*> _AchieveCopsActionType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kAchieveCopsActionTypeValues, _kAchieveCopsActionTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveResourceTypeValues[] = {
  AchieveResourceType::SPEND,
  AchieveResourceType::GET
};
const char* _kAchieveResourceTypeNames[] = {
  "SPEND",
  "GET"
};
const std::map<int, const char*> _AchieveResourceType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveResourceTypeValues, _kAchieveResourceTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveActorAttrTypeValues[] = {
  AchieveActorAttrType::LEVEL,
  AchieveActorAttrType::FIGHTING
};
const char* _kAchieveActorAttrTypeNames[] = {
  "LEVEL",
  "FIGHTING"
};
const std::map<int, const char*> _AchieveActorAttrType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(2, _kAchieveActorAttrTypeValues, _kAchieveActorAttrTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchievePassTalkFightingTypeValues[] = {
  AchievePassTalkFightingType::PASS
};
const char* _kAchievePassTalkFightingTypeNames[] = {
  "PASS"
};
const std::map<int, const char*> _AchievePassTalkFightingType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(1, _kAchievePassTalkFightingTypeValues, _kAchievePassTalkFightingTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveSelfKilledTypeValues[] = {
  AchieveSelfKilledType::FIGHTING,
  AchieveSelfKilledType::LEVEL,
  AchieveSelfKilledType::APPEAR_STATUS
};
const char* _kAchieveSelfKilledTypeNames[] = {
  "FIGHTING",
  "LEVEL",
  "APPEAR_STATUS"
};
const std::map<int, const char*> _AchieveSelfKilledType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kAchieveSelfKilledTypeValues, _kAchieveSelfKilledTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kAchieveKillActorTypeValues[] = {
  AchieveKillActorType::FIGHTING,
  AchieveKillActorType::LEVEL,
  AchieveKillActorType::APPEAR_STATUS,
  AchieveKillActorType::SEX
};
const char* _kAchieveKillActorTypeNames[] = {
  "FIGHTING",
  "LEVEL",
  "APPEAR_STATUS",
  "SEX"
};
const std::map<int, const char*> _AchieveKillActorType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kAchieveKillActorTypeValues, _kAchieveKillActorTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

} // namespace
