// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_engine.proto

#ifndef PROTOBUF_ctrl_5fengine_2eproto__INCLUDED
#define PROTOBUF_ctrl_5fengine_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2007000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "ctrl_common_param_tbox.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ctrl_5fengine_2eproto();
void protobuf_AssignDesc_ctrl_5fengine_2eproto();
void protobuf_ShutdownFile_ctrl_5fengine_2eproto();

class CtrlEngineMessage;
class EngineStateInfo;

// ===================================================================

class CtrlEngineMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CtrlEngineMessage) */ {
 public:
  CtrlEngineMessage();
  virtual ~CtrlEngineMessage();

  CtrlEngineMessage(const CtrlEngineMessage& from);

  inline CtrlEngineMessage& operator=(const CtrlEngineMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CtrlEngineMessage& default_instance();

  void Swap(CtrlEngineMessage* other);

  // implements Message ----------------------------------------------

  inline CtrlEngineMessage* New() const { return New(NULL); }

  CtrlEngineMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlEngineMessage& from);
  void MergeFrom(const CtrlEngineMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CtrlEngineMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .CtrlCommonParamTbox common_param = 1;
  bool has_common_param() const;
  void clear_common_param();
  static const int kCommonParamFieldNumber = 1;
  const ::CtrlCommonParamTbox& common_param() const;
  ::CtrlCommonParamTbox* mutable_common_param();
  ::CtrlCommonParamTbox* release_common_param();
  void set_allocated_common_param(::CtrlCommonParamTbox* common_param);

  // optional .CtrlCommonInfo engine_ctrl_info = 2;
  bool has_engine_ctrl_info() const;
  void clear_engine_ctrl_info();
  static const int kEngineCtrlInfoFieldNumber = 2;
  const ::CtrlCommonInfo& engine_ctrl_info() const;
  ::CtrlCommonInfo* mutable_engine_ctrl_info();
  ::CtrlCommonInfo* release_engine_ctrl_info();
  void set_allocated_engine_ctrl_info(::CtrlCommonInfo* engine_ctrl_info);

  // optional .EngineStateInfo engine_state_info = 3;
  bool has_engine_state_info() const;
  void clear_engine_state_info();
  static const int kEngineStateInfoFieldNumber = 3;
  const ::EngineStateInfo& engine_state_info() const;
  ::EngineStateInfo* mutable_engine_state_info();
  ::EngineStateInfo* release_engine_state_info();
  void set_allocated_engine_state_info(::EngineStateInfo* engine_state_info);

  // @@protoc_insertion_point(class_scope:CtrlEngineMessage)
 private:
  inline void set_has_common_param();
  inline void clear_has_common_param();
  inline void set_has_engine_ctrl_info();
  inline void clear_has_engine_ctrl_info();
  inline void set_has_engine_state_info();
  inline void clear_has_engine_state_info();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::CtrlCommonParamTbox* common_param_;
  ::CtrlCommonInfo* engine_ctrl_info_;
  ::EngineStateInfo* engine_state_info_;
  friend void  protobuf_AddDesc_ctrl_5fengine_2eproto();
  friend void protobuf_AssignDesc_ctrl_5fengine_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5fengine_2eproto();

  void InitAsDefaultInstance();
  static CtrlEngineMessage* default_instance_;
};
// -------------------------------------------------------------------

class EngineStateInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:EngineStateInfo) */ {
 public:
  EngineStateInfo();
  virtual ~EngineStateInfo();

  EngineStateInfo(const EngineStateInfo& from);

  inline EngineStateInfo& operator=(const EngineStateInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EngineStateInfo& default_instance();

  void Swap(EngineStateInfo* other);

  // implements Message ----------------------------------------------

  inline EngineStateInfo* New() const { return New(NULL); }

  EngineStateInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EngineStateInfo& from);
  void MergeFrom(const EngineStateInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(EngineStateInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 engine_start_state = 1;
  bool has_engine_start_state() const;
  void clear_engine_start_state();
  static const int kEngineStartStateFieldNumber = 1;
  ::google::protobuf::int32 engine_start_state() const;
  void set_engine_start_state(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:EngineStateInfo)
 private:
  inline void set_has_engine_start_state();
  inline void clear_has_engine_start_state();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 engine_start_state_;
  friend void  protobuf_AddDesc_ctrl_5fengine_2eproto();
  friend void protobuf_AssignDesc_ctrl_5fengine_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5fengine_2eproto();

  void InitAsDefaultInstance();
  static EngineStateInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlEngineMessage

// optional .CtrlCommonParamTbox common_param = 1;
inline bool CtrlEngineMessage::has_common_param() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CtrlEngineMessage::set_has_common_param() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CtrlEngineMessage::clear_has_common_param() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CtrlEngineMessage::clear_common_param() {
  if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
  clear_has_common_param();
}
inline const ::CtrlCommonParamTbox& CtrlEngineMessage::common_param() const {
  // @@protoc_insertion_point(field_get:CtrlEngineMessage.common_param)
  return common_param_ != NULL ? *common_param_ : *default_instance_->common_param_;
}
inline ::CtrlCommonParamTbox* CtrlEngineMessage::mutable_common_param() {
  set_has_common_param();
  if (common_param_ == NULL) {
    common_param_ = new ::CtrlCommonParamTbox;
  }
  // @@protoc_insertion_point(field_mutable:CtrlEngineMessage.common_param)
  return common_param_;
}
inline ::CtrlCommonParamTbox* CtrlEngineMessage::release_common_param() {
  // @@protoc_insertion_point(field_release:CtrlEngineMessage.common_param)
  clear_has_common_param();
  ::CtrlCommonParamTbox* temp = common_param_;
  common_param_ = NULL;
  return temp;
}
inline void CtrlEngineMessage::set_allocated_common_param(::CtrlCommonParamTbox* common_param) {
  delete common_param_;
  common_param_ = common_param;
  if (common_param) {
    set_has_common_param();
  } else {
    clear_has_common_param();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlEngineMessage.common_param)
}

// optional .CtrlCommonInfo engine_ctrl_info = 2;
inline bool CtrlEngineMessage::has_engine_ctrl_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CtrlEngineMessage::set_has_engine_ctrl_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CtrlEngineMessage::clear_has_engine_ctrl_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CtrlEngineMessage::clear_engine_ctrl_info() {
  if (engine_ctrl_info_ != NULL) engine_ctrl_info_->::CtrlCommonInfo::Clear();
  clear_has_engine_ctrl_info();
}
inline const ::CtrlCommonInfo& CtrlEngineMessage::engine_ctrl_info() const {
  // @@protoc_insertion_point(field_get:CtrlEngineMessage.engine_ctrl_info)
  return engine_ctrl_info_ != NULL ? *engine_ctrl_info_ : *default_instance_->engine_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlEngineMessage::mutable_engine_ctrl_info() {
  set_has_engine_ctrl_info();
  if (engine_ctrl_info_ == NULL) {
    engine_ctrl_info_ = new ::CtrlCommonInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlEngineMessage.engine_ctrl_info)
  return engine_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlEngineMessage::release_engine_ctrl_info() {
  // @@protoc_insertion_point(field_release:CtrlEngineMessage.engine_ctrl_info)
  clear_has_engine_ctrl_info();
  ::CtrlCommonInfo* temp = engine_ctrl_info_;
  engine_ctrl_info_ = NULL;
  return temp;
}
inline void CtrlEngineMessage::set_allocated_engine_ctrl_info(::CtrlCommonInfo* engine_ctrl_info) {
  delete engine_ctrl_info_;
  engine_ctrl_info_ = engine_ctrl_info;
  if (engine_ctrl_info) {
    set_has_engine_ctrl_info();
  } else {
    clear_has_engine_ctrl_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlEngineMessage.engine_ctrl_info)
}

// optional .EngineStateInfo engine_state_info = 3;
inline bool CtrlEngineMessage::has_engine_state_info() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CtrlEngineMessage::set_has_engine_state_info() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CtrlEngineMessage::clear_has_engine_state_info() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CtrlEngineMessage::clear_engine_state_info() {
  if (engine_state_info_ != NULL) engine_state_info_->::EngineStateInfo::Clear();
  clear_has_engine_state_info();
}
inline const ::EngineStateInfo& CtrlEngineMessage::engine_state_info() const {
  // @@protoc_insertion_point(field_get:CtrlEngineMessage.engine_state_info)
  return engine_state_info_ != NULL ? *engine_state_info_ : *default_instance_->engine_state_info_;
}
inline ::EngineStateInfo* CtrlEngineMessage::mutable_engine_state_info() {
  set_has_engine_state_info();
  if (engine_state_info_ == NULL) {
    engine_state_info_ = new ::EngineStateInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlEngineMessage.engine_state_info)
  return engine_state_info_;
}
inline ::EngineStateInfo* CtrlEngineMessage::release_engine_state_info() {
  // @@protoc_insertion_point(field_release:CtrlEngineMessage.engine_state_info)
  clear_has_engine_state_info();
  ::EngineStateInfo* temp = engine_state_info_;
  engine_state_info_ = NULL;
  return temp;
}
inline void CtrlEngineMessage::set_allocated_engine_state_info(::EngineStateInfo* engine_state_info) {
  delete engine_state_info_;
  engine_state_info_ = engine_state_info;
  if (engine_state_info) {
    set_has_engine_state_info();
  } else {
    clear_has_engine_state_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlEngineMessage.engine_state_info)
}

// -------------------------------------------------------------------

// EngineStateInfo

// optional int32 engine_start_state = 1;
inline bool EngineStateInfo::has_engine_start_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EngineStateInfo::set_has_engine_start_state() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EngineStateInfo::clear_has_engine_start_state() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EngineStateInfo::clear_engine_start_state() {
  engine_start_state_ = 0;
  clear_has_engine_start_state();
}
inline ::google::protobuf::int32 EngineStateInfo::engine_start_state() const {
  // @@protoc_insertion_point(field_get:EngineStateInfo.engine_start_state)
  return engine_start_state_;
}
inline void EngineStateInfo::set_engine_start_state(::google::protobuf::int32 value) {
  set_has_engine_start_state();
  engine_start_state_ = value;
  // @@protoc_insertion_point(field_set:EngineStateInfo.engine_start_state)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ctrl_5fengine_2eproto__INCLUDED
