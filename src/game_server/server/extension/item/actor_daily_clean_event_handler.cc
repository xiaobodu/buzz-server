//
// Summary: buzz source code.
//
// Author: LuXuefeng.
// Email: lxf@gmail.com.
// Last modify: 2014-02-22 03:35:01.
// File name: actor_daily_clean_event_handler.cc
//
// Description:
//

#include "game_server/server/extension/item/actor_daily_clean_event_handler.h"

#include <boost/bind.hpp>

#include "game_server/server/event/game_event_types.h"
#include "game_server/server/event/game_actor_event_types.h"
#include "game_server/server/game_actor_manager.h"
#include "game_server/server/extension/item/item_actor.h"
#include "game_server/server/extension/item/item_actor_manager.h"
#include "global/logging.h"

namespace game {

namespace server {

namespace item {

ActorDailyCleanEventHandler::ActorDailyCleanEventHandler() {}
ActorDailyCleanEventHandler::~ActorDailyCleanEventHandler() {}

bool ActorDailyCleanEventHandler::Initialize() {
  // Follow EVENT_ACTOR_DAILY_CLEAN
  this->connection_ = coresh::CommunicatorSingleton::GetInstance().Follow(
      event::EventType::EVENT_ACTOR_DAILY_CLEAN, coresh::Communicator::GetChannelAll(),
      event::ChannelType::CHANNEL_ACTOR, boost::bind(&ActorDailyCleanEventHandler::OnEvent,
        this, _1, _2, _3, _4));

  return true;
}

void ActorDailyCleanEventHandler::Finalize() {
  coresh::CommunicatorSingleton::GetInstance().Unfollow(this->connection_);
}

void ActorDailyCleanEventHandler::OnEvent(core::uint64 channel,
    core::uint8 channel_type, const void *message, size_t size) {
  if(message == NULL || size != sizeof(event::EventActorDailyClean) ||
      channel_type != event::ChannelType::CHANNEL_ACTOR) {
    LOG_ERROR("Invalid params.");
    return ;
  }

  event::EventActorDailyClean *event = (event::EventActorDailyClean *)message;
  if(event->__isset.actor_ == true) {
    // 清理单个玩家
    ItemActor *item_actor = ItemActorManager::GetInstance()->Get(event->actor_);
    if(item_actor == NULL) {
      LOG_ERROR("TaskActor(%lu) not exists.", event->actor_);
      return ;
    }
    item_actor->DailyClean(event->days_);
  } else {
    // 清理所有玩家
    ItemActorManager::GetInstance()->DailyClean(1);
  }
}

}  // namespace item

}  // namespace server

}  // namespace game

