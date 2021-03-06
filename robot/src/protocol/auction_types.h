/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef auction_TYPES_H
#define auction_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct AuctionHistoryType {
  enum type {
    MIN = 0,
    BID_ITEM_SUCCESS = 0,
    BUYOUT_ITEM_SUCCESS = 1,
    SELL_ITEM_BID_SUCCESS = 2,
    SELL_ITEM_BUYOUT_SUCCESS = 3,
    BID_ITEM = 4,
    OUTBIDDED = 5,
    MAX = 6
  };
};

extern const std::map<int, const char*> _AuctionHistoryType_VALUES_TO_NAMES;

struct AuctionSearchSortType {
  enum type {
    MIN = 0,
    ITEM_TEMPLATE_ID = 0,
    ITEM_NUMBER = 1,
    LEFT_TIME = 2,
    BID_PRICE = 3,
    MAX = 4
  };
};

extern const std::map<int, const char*> _AuctionSearchSortType_VALUES_TO_NAMES;

} // namespace

#endif
