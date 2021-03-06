/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef gateway_auction_protocol_TYPES_H
#define gateway_auction_protocol_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "auction_types.h"
#include "gateway_protocol_types.h"


namespace gateway { namespace protocol {

struct AuctionErrorCode {
  enum type {
    SUCCESS = 0,
    ITEM_NOT_EXIST = 1,
    OUTBIDDED = 2,
    ERROR_UNKNOWN = 3
  };
};

extern const std::map<int, const char*> _AuctionErrorCode_VALUES_TO_NAMES;

struct AuctionSellItemStatusType {
  enum type {
    OFF_SHELF = 0,
    ON_SELL = 1,
    SOLD = 2
  };
};

extern const std::map<int, const char*> _AuctionSellItemStatusType_VALUES_TO_NAMES;

struct AuctionBuyItemStatusType {
  enum type {
    HIGHEST_BID = 0,
    OUTBIDDED = 1,
    SOLD = 2,
    WON = 3
  };
};

extern const std::map<int, const char*> _AuctionBuyItemStatusType_VALUES_TO_NAMES;

struct AuctionSellItemOperateType {
  enum type {
    ADD = 0,
    REMOVE = 1,
    UPDATE = 2
  };
};

extern const std::map<int, const char*> _AuctionSellItemOperateType_VALUES_TO_NAMES;

struct AuctionBuyItemOperateType {
  enum type {
    ADD = 0,
    REMOVE = 1,
    UPDATE = 2
  };
};

extern const std::map<int, const char*> _AuctionBuyItemOperateType_VALUES_TO_NAMES;

struct AuctionHistoryOperateType {
  enum type {
    ADD = 0
  };
};

extern const std::map<int, const char*> _AuctionHistoryOperateType_VALUES_TO_NAMES;

typedef struct _AuctionItemData__isset {
  _AuctionItemData__isset() : item_template_id_(false), item_number_(false), item_extra_info_(false), left_time_(false), owner_name_(false), start_bid_price_(false), last_bid_price_(false), buyout_price_(false), auction_time_id_(false), my_bid_price_(false), status_(false) {}
  bool item_template_id_;
  bool item_number_;
  bool item_extra_info_;
  bool left_time_;
  bool owner_name_;
  bool start_bid_price_;
  bool last_bid_price_;
  bool buyout_price_;
  bool auction_time_id_;
  bool my_bid_price_;
  bool status_;
} _AuctionItemData__isset;

class AuctionItemData {
 public:

  static const char* ascii_fingerprint; // = "483FF17F660E263BB767F3221B8836D2";
  static const uint8_t binary_fingerprint[16]; // = {0x48,0x3F,0xF1,0x7F,0x66,0x0E,0x26,0x3B,0xB7,0x67,0xF3,0x22,0x1B,0x88,0x36,0xD2};

  AuctionItemData() : transaction_id_(), item_template_id_(0), item_number_(0), item_extra_info_(), left_time_(0), owner_name_(), start_bid_price_(0), last_bid_price_(0), buyout_price_(0), auction_time_id_(0), my_bid_price_(0), status_(0) {
  }

  virtual ~AuctionItemData() throw() {}

  std::string transaction_id_;
  int32_t item_template_id_;
  int32_t item_number_;
  std::string item_extra_info_;
  int32_t left_time_;
  std::string owner_name_;
  int32_t start_bid_price_;
  int32_t last_bid_price_;
  int32_t buyout_price_;
  int32_t auction_time_id_;
  int32_t my_bid_price_;
  int32_t status_;

  _AuctionItemData__isset __isset;

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
  }

  void __set_item_template_id_(const int32_t val) {
    item_template_id_ = val;
    __isset.item_template_id_ = true;
  }

  void __set_item_number_(const int32_t val) {
    item_number_ = val;
    __isset.item_number_ = true;
  }

  void __set_item_extra_info_(const std::string& val) {
    item_extra_info_ = val;
    __isset.item_extra_info_ = true;
  }

  void __set_left_time_(const int32_t val) {
    left_time_ = val;
    __isset.left_time_ = true;
  }

  void __set_owner_name_(const std::string& val) {
    owner_name_ = val;
    __isset.owner_name_ = true;
  }

  void __set_start_bid_price_(const int32_t val) {
    start_bid_price_ = val;
    __isset.start_bid_price_ = true;
  }

  void __set_last_bid_price_(const int32_t val) {
    last_bid_price_ = val;
    __isset.last_bid_price_ = true;
  }

  void __set_buyout_price_(const int32_t val) {
    buyout_price_ = val;
    __isset.buyout_price_ = true;
  }

  void __set_auction_time_id_(const int32_t val) {
    auction_time_id_ = val;
    __isset.auction_time_id_ = true;
  }

  void __set_my_bid_price_(const int32_t val) {
    my_bid_price_ = val;
    __isset.my_bid_price_ = true;
  }

  void __set_status_(const int32_t val) {
    status_ = val;
    __isset.status_ = true;
  }

  bool operator == (const AuctionItemData & rhs) const
  {
    if (!(transaction_id_ == rhs.transaction_id_))
      return false;
    if (__isset.item_template_id_ != rhs.__isset.item_template_id_)
      return false;
    else if (__isset.item_template_id_ && !(item_template_id_ == rhs.item_template_id_))
      return false;
    if (__isset.item_number_ != rhs.__isset.item_number_)
      return false;
    else if (__isset.item_number_ && !(item_number_ == rhs.item_number_))
      return false;
    if (__isset.item_extra_info_ != rhs.__isset.item_extra_info_)
      return false;
    else if (__isset.item_extra_info_ && !(item_extra_info_ == rhs.item_extra_info_))
      return false;
    if (__isset.left_time_ != rhs.__isset.left_time_)
      return false;
    else if (__isset.left_time_ && !(left_time_ == rhs.left_time_))
      return false;
    if (__isset.owner_name_ != rhs.__isset.owner_name_)
      return false;
    else if (__isset.owner_name_ && !(owner_name_ == rhs.owner_name_))
      return false;
    if (__isset.start_bid_price_ != rhs.__isset.start_bid_price_)
      return false;
    else if (__isset.start_bid_price_ && !(start_bid_price_ == rhs.start_bid_price_))
      return false;
    if (__isset.last_bid_price_ != rhs.__isset.last_bid_price_)
      return false;
    else if (__isset.last_bid_price_ && !(last_bid_price_ == rhs.last_bid_price_))
      return false;
    if (__isset.buyout_price_ != rhs.__isset.buyout_price_)
      return false;
    else if (__isset.buyout_price_ && !(buyout_price_ == rhs.buyout_price_))
      return false;
    if (__isset.auction_time_id_ != rhs.__isset.auction_time_id_)
      return false;
    else if (__isset.auction_time_id_ && !(auction_time_id_ == rhs.auction_time_id_))
      return false;
    if (__isset.my_bid_price_ != rhs.__isset.my_bid_price_)
      return false;
    else if (__isset.my_bid_price_ && !(my_bid_price_ == rhs.my_bid_price_))
      return false;
    if (__isset.status_ != rhs.__isset.status_)
      return false;
    else if (__isset.status_ && !(status_ == rhs.status_))
      return false;
    return true;
  }
  bool operator != (const AuctionItemData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuctionItemData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AuctionItemData &a, AuctionItemData &b);


class AuctionHistoryData {
 public:

  static const char* ascii_fingerprint; // = "D121591FCC85D0E17C727CA264A5F46D";
  static const uint8_t binary_fingerprint[16]; // = {0xD1,0x21,0x59,0x1F,0xCC,0x85,0xD0,0xE1,0x7C,0x72,0x7C,0xA2,0x64,0xA5,0xF4,0x6D};

  AuctionHistoryData() : type_(( ::entity::AuctionHistoryType::type)0), timestamp_() {
  }

  virtual ~AuctionHistoryData() throw() {}

   ::entity::AuctionHistoryType::type type_;
  std::string timestamp_;
  std::vector<std::string>  vars_;

  void __set_type_(const  ::entity::AuctionHistoryType::type val) {
    type_ = val;
  }

  void __set_timestamp_(const std::string& val) {
    timestamp_ = val;
  }

  void __set_vars_(const std::vector<std::string> & val) {
    vars_ = val;
  }

  bool operator == (const AuctionHistoryData & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(timestamp_ == rhs.timestamp_))
      return false;
    if (!(vars_ == rhs.vars_))
      return false;
    return true;
  }
  bool operator != (const AuctionHistoryData &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const AuctionHistoryData & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(AuctionHistoryData &a, AuctionHistoryData &b);


class MessageAuctionInitialize {
 public:

  static const char* ascii_fingerprint; // = "A3C1EE95CC9CAF8A820BEC9D43AF9ED9";
  static const uint8_t binary_fingerprint[16]; // = {0xA3,0xC1,0xEE,0x95,0xCC,0x9C,0xAF,0x8A,0x82,0x0B,0xEC,0x9D,0x43,0xAF,0x9E,0xD9};

  MessageAuctionInitialize() {
  }

  virtual ~MessageAuctionInitialize() throw() {}

  std::vector<AuctionItemData>  sell_items_;
  std::vector<AuctionItemData>  buy_items_;
  std::vector<AuctionHistoryData>  history_;

  void __set_sell_items_(const std::vector<AuctionItemData> & val) {
    sell_items_ = val;
  }

  void __set_buy_items_(const std::vector<AuctionItemData> & val) {
    buy_items_ = val;
  }

  void __set_history_(const std::vector<AuctionHistoryData> & val) {
    history_ = val;
  }

  bool operator == (const MessageAuctionInitialize & rhs) const
  {
    if (!(sell_items_ == rhs.sell_items_))
      return false;
    if (!(buy_items_ == rhs.buy_items_))
      return false;
    if (!(history_ == rhs.history_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionInitialize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionInitialize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionInitialize &a, MessageAuctionInitialize &b);


class MessageAuctionSellItemSynchronize {
 public:

  static const char* ascii_fingerprint; // = "12CEBF6BA57D7EE7053EE7C9219B9360";
  static const uint8_t binary_fingerprint[16]; // = {0x12,0xCE,0xBF,0x6B,0xA5,0x7D,0x7E,0xE7,0x05,0x3E,0xE7,0xC9,0x21,0x9B,0x93,0x60};

  MessageAuctionSellItemSynchronize() : type_((AuctionSellItemOperateType::type)0) {
  }

  virtual ~MessageAuctionSellItemSynchronize() throw() {}

  AuctionSellItemOperateType::type type_;
  AuctionItemData data_;

  void __set_type_(const AuctionSellItemOperateType::type val) {
    type_ = val;
  }

  void __set_data_(const AuctionItemData& val) {
    data_ = val;
  }

  bool operator == (const MessageAuctionSellItemSynchronize & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionSellItemSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionSellItemSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionSellItemSynchronize &a, MessageAuctionSellItemSynchronize &b);


class MessageAuctionBuyItemSynchronize {
 public:

  static const char* ascii_fingerprint; // = "12CEBF6BA57D7EE7053EE7C9219B9360";
  static const uint8_t binary_fingerprint[16]; // = {0x12,0xCE,0xBF,0x6B,0xA5,0x7D,0x7E,0xE7,0x05,0x3E,0xE7,0xC9,0x21,0x9B,0x93,0x60};

  MessageAuctionBuyItemSynchronize() : type_((AuctionBuyItemOperateType::type)0) {
  }

  virtual ~MessageAuctionBuyItemSynchronize() throw() {}

  AuctionBuyItemOperateType::type type_;
  AuctionItemData data_;

  void __set_type_(const AuctionBuyItemOperateType::type val) {
    type_ = val;
  }

  void __set_data_(const AuctionItemData& val) {
    data_ = val;
  }

  bool operator == (const MessageAuctionBuyItemSynchronize & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionBuyItemSynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionBuyItemSynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionBuyItemSynchronize &a, MessageAuctionBuyItemSynchronize &b);


class MessageAuctionHistorySynchronize {
 public:

  static const char* ascii_fingerprint; // = "69CFAA92E04882F6EA54F81504CDEB9C";
  static const uint8_t binary_fingerprint[16]; // = {0x69,0xCF,0xAA,0x92,0xE0,0x48,0x82,0xF6,0xEA,0x54,0xF8,0x15,0x04,0xCD,0xEB,0x9C};

  MessageAuctionHistorySynchronize() : type_((AuctionHistoryOperateType::type)0) {
  }

  virtual ~MessageAuctionHistorySynchronize() throw() {}

  AuctionHistoryOperateType::type type_;
  AuctionHistoryData data_;

  void __set_type_(const AuctionHistoryOperateType::type val) {
    type_ = val;
  }

  void __set_data_(const AuctionHistoryData& val) {
    data_ = val;
  }

  bool operator == (const MessageAuctionHistorySynchronize & rhs) const
  {
    if (!(type_ == rhs.type_))
      return false;
    if (!(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionHistorySynchronize &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionHistorySynchronize & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionHistorySynchronize &a, MessageAuctionHistorySynchronize &b);


class MessageAuctionQueryTransactionRequest {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageAuctionQueryTransactionRequest() : transaction_id_() {
  }

  virtual ~MessageAuctionQueryTransactionRequest() throw() {}

  std::string transaction_id_;

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
  }

  bool operator == (const MessageAuctionQueryTransactionRequest & rhs) const
  {
    if (!(transaction_id_ == rhs.transaction_id_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionQueryTransactionRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionQueryTransactionRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionQueryTransactionRequest &a, MessageAuctionQueryTransactionRequest &b);

typedef struct _MessageAuctionQueryTransactionResponse__isset {
  _MessageAuctionQueryTransactionResponse__isset() : data_(false) {}
  bool data_;
} _MessageAuctionQueryTransactionResponse__isset;

class MessageAuctionQueryTransactionResponse {
 public:

  static const char* ascii_fingerprint; // = "0A5346B72F2E978C15158CDB829D41C8";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x53,0x46,0xB7,0x2F,0x2E,0x97,0x8C,0x15,0x15,0x8C,0xDB,0x82,0x9D,0x41,0xC8};

  MessageAuctionQueryTransactionResponse() : result_(0) {
  }

  virtual ~MessageAuctionQueryTransactionResponse() throw() {}

  bool result_;
  AuctionItemData data_;

  _MessageAuctionQueryTransactionResponse__isset __isset;

  void __set_result_(const bool val) {
    result_ = val;
  }

  void __set_data_(const AuctionItemData& val) {
    data_ = val;
    __isset.data_ = true;
  }

  bool operator == (const MessageAuctionQueryTransactionResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (__isset.data_ != rhs.__isset.data_)
      return false;
    else if (__isset.data_ && !(data_ == rhs.data_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionQueryTransactionResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionQueryTransactionResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionQueryTransactionResponse &a, MessageAuctionQueryTransactionResponse &b);

typedef struct _MessageAuctionSearchRequest__isset {
  _MessageAuctionSearchRequest__isset() : item_template_ids_(false), item_type_(false) {}
  bool item_template_ids_;
  bool item_type_;
} _MessageAuctionSearchRequest__isset;

class MessageAuctionSearchRequest {
 public:

  static const char* ascii_fingerprint; // = "A9890A1F741082A25B7518F6CE313ADC";
  static const uint8_t binary_fingerprint[16]; // = {0xA9,0x89,0x0A,0x1F,0x74,0x10,0x82,0xA2,0x5B,0x75,0x18,0xF6,0xCE,0x31,0x3A,0xDC};

  MessageAuctionSearchRequest() : item_type_(0), sort_type_(( ::entity::AuctionSearchSortType::type)0), page_(0) {
  }

  virtual ~MessageAuctionSearchRequest() throw() {}

  std::vector<int32_t>  item_template_ids_;
  int32_t item_type_;
   ::entity::AuctionSearchSortType::type sort_type_;
  int32_t page_;

  _MessageAuctionSearchRequest__isset __isset;

  void __set_item_template_ids_(const std::vector<int32_t> & val) {
    item_template_ids_ = val;
    __isset.item_template_ids_ = true;
  }

  void __set_item_type_(const int32_t val) {
    item_type_ = val;
    __isset.item_type_ = true;
  }

  void __set_sort_type_(const  ::entity::AuctionSearchSortType::type val) {
    sort_type_ = val;
  }

  void __set_page_(const int32_t val) {
    page_ = val;
  }

  bool operator == (const MessageAuctionSearchRequest & rhs) const
  {
    if (__isset.item_template_ids_ != rhs.__isset.item_template_ids_)
      return false;
    else if (__isset.item_template_ids_ && !(item_template_ids_ == rhs.item_template_ids_))
      return false;
    if (__isset.item_type_ != rhs.__isset.item_type_)
      return false;
    else if (__isset.item_type_ && !(item_type_ == rhs.item_type_))
      return false;
    if (!(sort_type_ == rhs.sort_type_))
      return false;
    if (!(page_ == rhs.page_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionSearchRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionSearchRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionSearchRequest &a, MessageAuctionSearchRequest &b);

typedef struct _MessageAuctionSearchResponse__isset {
  _MessageAuctionSearchResponse__isset() : items_(false), page_(false), total_page_(false) {}
  bool items_;
  bool page_;
  bool total_page_;
} _MessageAuctionSearchResponse__isset;

class MessageAuctionSearchResponse {
 public:

  static const char* ascii_fingerprint; // = "9E66040F53FA8132ECAEB49B888A93C3";
  static const uint8_t binary_fingerprint[16]; // = {0x9E,0x66,0x04,0x0F,0x53,0xFA,0x81,0x32,0xEC,0xAE,0xB4,0x9B,0x88,0x8A,0x93,0xC3};

  MessageAuctionSearchResponse() : result_(0), page_(0), total_page_(0) {
  }

  virtual ~MessageAuctionSearchResponse() throw() {}

  bool result_;
  std::vector<AuctionItemData>  items_;
  int32_t page_;
  int32_t total_page_;

  _MessageAuctionSearchResponse__isset __isset;

  void __set_result_(const bool val) {
    result_ = val;
  }

  void __set_items_(const std::vector<AuctionItemData> & val) {
    items_ = val;
    __isset.items_ = true;
  }

  void __set_page_(const int32_t val) {
    page_ = val;
    __isset.page_ = true;
  }

  void __set_total_page_(const int32_t val) {
    total_page_ = val;
    __isset.total_page_ = true;
  }

  bool operator == (const MessageAuctionSearchResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    if (__isset.items_ != rhs.__isset.items_)
      return false;
    else if (__isset.items_ && !(items_ == rhs.items_))
      return false;
    if (__isset.page_ != rhs.__isset.page_)
      return false;
    else if (__isset.page_ && !(page_ == rhs.page_))
      return false;
    if (__isset.total_page_ != rhs.__isset.total_page_)
      return false;
    else if (__isset.total_page_ && !(total_page_ == rhs.total_page_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionSearchResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionSearchResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionSearchResponse &a, MessageAuctionSearchResponse &b);

typedef struct _MessageAuctionSellRequest__isset {
  _MessageAuctionSellRequest__isset() : item_id_(false), item_template_id_(false), item_number_(false), transaction_id_(false), start_bid_price_(false), buyout_price_(false), auction_time_id_(false) {}
  bool item_id_;
  bool item_template_id_;
  bool item_number_;
  bool transaction_id_;
  bool start_bid_price_;
  bool buyout_price_;
  bool auction_time_id_;
} _MessageAuctionSellRequest__isset;

class MessageAuctionSellRequest {
 public:

  static const char* ascii_fingerprint; // = "95F60733EFFE97F80C4D6A0571940F8F";
  static const uint8_t binary_fingerprint[16]; // = {0x95,0xF6,0x07,0x33,0xEF,0xFE,0x97,0xF8,0x0C,0x4D,0x6A,0x05,0x71,0x94,0x0F,0x8F};

  MessageAuctionSellRequest() : item_id_(), item_template_id_(0), item_number_(0), transaction_id_(), start_bid_price_(0), buyout_price_(0), auction_time_id_(0) {
  }

  virtual ~MessageAuctionSellRequest() throw() {}

  std::string item_id_;
  int32_t item_template_id_;
  int32_t item_number_;
  std::string transaction_id_;
  int32_t start_bid_price_;
  int32_t buyout_price_;
  int32_t auction_time_id_;

  _MessageAuctionSellRequest__isset __isset;

  void __set_item_id_(const std::string& val) {
    item_id_ = val;
    __isset.item_id_ = true;
  }

  void __set_item_template_id_(const int32_t val) {
    item_template_id_ = val;
    __isset.item_template_id_ = true;
  }

  void __set_item_number_(const int32_t val) {
    item_number_ = val;
    __isset.item_number_ = true;
  }

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
    __isset.transaction_id_ = true;
  }

  void __set_start_bid_price_(const int32_t val) {
    start_bid_price_ = val;
    __isset.start_bid_price_ = true;
  }

  void __set_buyout_price_(const int32_t val) {
    buyout_price_ = val;
    __isset.buyout_price_ = true;
  }

  void __set_auction_time_id_(const int32_t val) {
    auction_time_id_ = val;
    __isset.auction_time_id_ = true;
  }

  bool operator == (const MessageAuctionSellRequest & rhs) const
  {
    if (__isset.item_id_ != rhs.__isset.item_id_)
      return false;
    else if (__isset.item_id_ && !(item_id_ == rhs.item_id_))
      return false;
    if (__isset.item_template_id_ != rhs.__isset.item_template_id_)
      return false;
    else if (__isset.item_template_id_ && !(item_template_id_ == rhs.item_template_id_))
      return false;
    if (__isset.item_number_ != rhs.__isset.item_number_)
      return false;
    else if (__isset.item_number_ && !(item_number_ == rhs.item_number_))
      return false;
    if (__isset.transaction_id_ != rhs.__isset.transaction_id_)
      return false;
    else if (__isset.transaction_id_ && !(transaction_id_ == rhs.transaction_id_))
      return false;
    if (__isset.start_bid_price_ != rhs.__isset.start_bid_price_)
      return false;
    else if (__isset.start_bid_price_ && !(start_bid_price_ == rhs.start_bid_price_))
      return false;
    if (__isset.buyout_price_ != rhs.__isset.buyout_price_)
      return false;
    else if (__isset.buyout_price_ && !(buyout_price_ == rhs.buyout_price_))
      return false;
    if (__isset.auction_time_id_ != rhs.__isset.auction_time_id_)
      return false;
    else if (__isset.auction_time_id_ && !(auction_time_id_ == rhs.auction_time_id_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionSellRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionSellRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionSellRequest &a, MessageAuctionSellRequest &b);


class MessageAuctionSellResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageAuctionSellResponse() : result_(0) {
  }

  virtual ~MessageAuctionSellResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessageAuctionSellResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionSellResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionSellResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionSellResponse &a, MessageAuctionSellResponse &b);


class MessageAuctionCancelSellRequest {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageAuctionCancelSellRequest() : transaction_id_() {
  }

  virtual ~MessageAuctionCancelSellRequest() throw() {}

  std::string transaction_id_;

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
  }

  bool operator == (const MessageAuctionCancelSellRequest & rhs) const
  {
    if (!(transaction_id_ == rhs.transaction_id_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionCancelSellRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionCancelSellRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionCancelSellRequest &a, MessageAuctionCancelSellRequest &b);


class MessageAuctionCancelSellResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageAuctionCancelSellResponse() : result_(0) {
  }

  virtual ~MessageAuctionCancelSellResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessageAuctionCancelSellResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionCancelSellResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionCancelSellResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionCancelSellResponse &a, MessageAuctionCancelSellResponse &b);


class MessageAuctionBidRequest {
 public:

  static const char* ascii_fingerprint; // = "EEBC915CE44901401D881E6091423036";
  static const uint8_t binary_fingerprint[16]; // = {0xEE,0xBC,0x91,0x5C,0xE4,0x49,0x01,0x40,0x1D,0x88,0x1E,0x60,0x91,0x42,0x30,0x36};

  MessageAuctionBidRequest() : transaction_id_(), bid_price_(0) {
  }

  virtual ~MessageAuctionBidRequest() throw() {}

  std::string transaction_id_;
  int32_t bid_price_;

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
  }

  void __set_bid_price_(const int32_t val) {
    bid_price_ = val;
  }

  bool operator == (const MessageAuctionBidRequest & rhs) const
  {
    if (!(transaction_id_ == rhs.transaction_id_))
      return false;
    if (!(bid_price_ == rhs.bid_price_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionBidRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionBidRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionBidRequest &a, MessageAuctionBidRequest &b);


class MessageAuctionBidResponse {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  MessageAuctionBidResponse() : result_((AuctionErrorCode::type)0) {
  }

  virtual ~MessageAuctionBidResponse() throw() {}

  AuctionErrorCode::type result_;

  void __set_result_(const AuctionErrorCode::type val) {
    result_ = val;
  }

  bool operator == (const MessageAuctionBidResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionBidResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionBidResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionBidResponse &a, MessageAuctionBidResponse &b);


class MessageAuctionBuyoutRequest {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageAuctionBuyoutRequest() : transaction_id_() {
  }

  virtual ~MessageAuctionBuyoutRequest() throw() {}

  std::string transaction_id_;

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
  }

  bool operator == (const MessageAuctionBuyoutRequest & rhs) const
  {
    if (!(transaction_id_ == rhs.transaction_id_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionBuyoutRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionBuyoutRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionBuyoutRequest &a, MessageAuctionBuyoutRequest &b);


class MessageAuctionBuyoutResponse {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  MessageAuctionBuyoutResponse() : result_((AuctionErrorCode::type)0) {
  }

  virtual ~MessageAuctionBuyoutResponse() throw() {}

  AuctionErrorCode::type result_;

  void __set_result_(const AuctionErrorCode::type val) {
    result_ = val;
  }

  bool operator == (const MessageAuctionBuyoutResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionBuyoutResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionBuyoutResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionBuyoutResponse &a, MessageAuctionBuyoutResponse &b);


class MessageAuctionWithdrawRequest {
 public:

  static const char* ascii_fingerprint; // = "EFB929595D312AC8F305D5A794CFEDA1";
  static const uint8_t binary_fingerprint[16]; // = {0xEF,0xB9,0x29,0x59,0x5D,0x31,0x2A,0xC8,0xF3,0x05,0xD5,0xA7,0x94,0xCF,0xED,0xA1};

  MessageAuctionWithdrawRequest() : transaction_id_() {
  }

  virtual ~MessageAuctionWithdrawRequest() throw() {}

  std::string transaction_id_;

  void __set_transaction_id_(const std::string& val) {
    transaction_id_ = val;
  }

  bool operator == (const MessageAuctionWithdrawRequest & rhs) const
  {
    if (!(transaction_id_ == rhs.transaction_id_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionWithdrawRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionWithdrawRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionWithdrawRequest &a, MessageAuctionWithdrawRequest &b);


class MessageAuctionWithdrawResponse {
 public:

  static const char* ascii_fingerprint; // = "5892306F7B861249AE8E27C8ED619593";
  static const uint8_t binary_fingerprint[16]; // = {0x58,0x92,0x30,0x6F,0x7B,0x86,0x12,0x49,0xAE,0x8E,0x27,0xC8,0xED,0x61,0x95,0x93};

  MessageAuctionWithdrawResponse() : result_(0) {
  }

  virtual ~MessageAuctionWithdrawResponse() throw() {}

  bool result_;

  void __set_result_(const bool val) {
    result_ = val;
  }

  bool operator == (const MessageAuctionWithdrawResponse & rhs) const
  {
    if (!(result_ == rhs.result_))
      return false;
    return true;
  }
  bool operator != (const MessageAuctionWithdrawResponse &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageAuctionWithdrawResponse & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(MessageAuctionWithdrawResponse &a, MessageAuctionWithdrawResponse &b);

}} // namespace

#endif
