// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_top_windows.proto

#ifndef PROTOBUF_ctrl_5ftop_5fwindows_2eproto__INCLUDED
#define PROTOBUF_ctrl_5ftop_5fwindows_2eproto__INCLUDED

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
void protobuf_AddDesc_ctrl_5ftop_5fwindows_2eproto();
void protobuf_AssignDesc_ctrl_5ftop_5fwindows_2eproto();
void protobuf_ShutdownFile_ctrl_5ftop_5fwindows_2eproto();

class CtrlTopWindowsMessage;
class TopWindowsStateInfo;

// ===================================================================

class CtrlTopWindowsMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CtrlTopWindowsMessage) */ {
 public:
  CtrlTopWindowsMessage();
  virtual ~CtrlTopWindowsMessage();

  CtrlTopWindowsMessage(const CtrlTopWindowsMessage& from);

  inline CtrlTopWindowsMessage& operator=(const CtrlTopWindowsMessage& from) {
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
  static const CtrlTopWindowsMessage& default_instance();

  void Swap(CtrlTopWindowsMessage* other);

  // implements Message ----------------------------------------------

  inline CtrlTopWindowsMessage* New() const { return New(NULL); }

  CtrlTopWindowsMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlTopWindowsMessage& from);
  void MergeFrom(const CtrlTopWindowsMessage& from);
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
  void InternalSwap(CtrlTopWindowsMessage* other);
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

  // optional .CtrlCommonInfo top_windows_ctrl_info = 2;
  bool has_top_windows_ctrl_info() const;
  void clear_top_windows_ctrl_info();
  static const int kTopWindowsCtrlInfoFieldNumber = 2;
  const ::CtrlCommonInfo& top_windows_ctrl_info() const;
  ::CtrlCommonInfo* mutable_top_windows_ctrl_info();
  ::CtrlCommonInfo* release_top_windows_ctrl_info();
  void set_allocated_top_windows_ctrl_info(::CtrlCommonInfo* top_windows_ctrl_info);

  // optional .TopWindowsStateInfo top_windows_state_info = 3;
  bool has_top_windows_state_info() const;
  void clear_top_windows_state_info();
  static const int kTopWindowsStateInfoFieldNumber = 3;
  const ::TopWindowsStateInfo& top_windows_state_info() const;
  ::TopWindowsStateInfo* mutable_top_windows_state_info();
  ::TopWindowsStateInfo* release_top_windows_state_info();
  void set_allocated_top_windows_state_info(::TopWindowsStateInfo* top_windows_state_info);

  // @@protoc_insertion_point(class_scope:CtrlTopWindowsMessage)
 private:
  inline void set_has_common_param();
  inline void clear_has_common_param();
  inline void set_has_top_windows_ctrl_info();
  inline void clear_has_top_windows_ctrl_info();
  inline void set_has_top_windows_state_info();
  inline void clear_has_top_windows_state_info();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::CtrlCommonParamTbox* common_param_;
  ::CtrlCommonInfo* top_windows_ctrl_info_;
  ::TopWindowsStateInfo* top_windows_state_info_;
  friend void  protobuf_AddDesc_ctrl_5ftop_5fwindows_2eproto();
  friend void protobuf_AssignDesc_ctrl_5ftop_5fwindows_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5ftop_5fwindows_2eproto();

  void InitAsDefaultInstance();
  static CtrlTopWindowsMessage* default_instance_;
};
// -------------------------------------------------------------------

class TopWindowsStateInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TopWindowsStateInfo) */ {
 public:
  TopWindowsStateInfo();
  virtual ~TopWindowsStateInfo();

  TopWindowsStateInfo(const TopWindowsStateInfo& from);

  inline TopWindowsStateInfo& operator=(const TopWindowsStateInfo& from) {
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
  static const TopWindowsStateInfo& default_instance();

  void Swap(TopWindowsStateInfo* other);

  // implements Message ----------------------------------------------

  inline TopWindowsStateInfo* New() const { return New(NULL); }

  TopWindowsStateInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TopWindowsStateInfo& from);
  void MergeFrom(const TopWindowsStateInfo& from);
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
  void InternalSwap(TopWindowsStateInfo* other);
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

  // optional int32 sunroof_curtain = 1;
  bool has_sunroof_curtain() const;
  void clear_sunroof_curtain();
  static const int kSunroofCurtainFieldNumber = 1;
  ::google::protobuf::int32 sunroof_curtain() const;
  void set_sunroof_curtain(::google::protobuf::int32 value);

  // optional int32 sunroof_glass = 2;
  bool has_sunroof_glass() const;
  void clear_sunroof_glass();
  static const int kSunroofGlassFieldNumber = 2;
  ::google::protobuf::int32 sunroof_glass() const;
  void set_sunroof_glass(::google::protobuf::int32 value);

  // optional int32 sunroof_possition = 3;
  bool has_sunroof_possition() const;
  void clear_sunroof_possition();
  static const int kSunroofPossitionFieldNumber = 3;
  ::google::protobuf::int32 sunroof_possition() const;
  void set_sunroof_possition(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TopWindowsStateInfo)
 private:
  inline void set_has_sunroof_curtain();
  inline void clear_has_sunroof_curtain();
  inline void set_has_sunroof_glass();
  inline void clear_has_sunroof_glass();
  inline void set_has_sunroof_possition();
  inline void clear_has_sunroof_possition();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 sunroof_curtain_;
  ::google::protobuf::int32 sunroof_glass_;
  ::google::protobuf::int32 sunroof_possition_;
  friend void  protobuf_AddDesc_ctrl_5ftop_5fwindows_2eproto();
  friend void protobuf_AssignDesc_ctrl_5ftop_5fwindows_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5ftop_5fwindows_2eproto();

  void InitAsDefaultInstance();
  static TopWindowsStateInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlTopWindowsMessage

// optional .CtrlCommonParamTbox common_param = 1;
inline bool CtrlTopWindowsMessage::has_common_param() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CtrlTopWindowsMessage::set_has_common_param() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CtrlTopWindowsMessage::clear_has_common_param() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CtrlTopWindowsMessage::clear_common_param() {
  if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
  clear_has_common_param();
}
inline const ::CtrlCommonParamTbox& CtrlTopWindowsMessage::common_param() const {
  // @@protoc_insertion_point(field_get:CtrlTopWindowsMessage.common_param)
  return common_param_ != NULL ? *common_param_ : *default_instance_->common_param_;
}
inline ::CtrlCommonParamTbox* CtrlTopWindowsMessage::mutable_common_param() {
  set_has_common_param();
  if (common_param_ == NULL) {
    common_param_ = new ::CtrlCommonParamTbox;
  }
  // @@protoc_insertion_point(field_mutable:CtrlTopWindowsMessage.common_param)
  return common_param_;
}
inline ::CtrlCommonParamTbox* CtrlTopWindowsMessage::release_common_param() {
  // @@protoc_insertion_point(field_release:CtrlTopWindowsMessage.common_param)
  clear_has_common_param();
  ::CtrlCommonParamTbox* temp = common_param_;
  common_param_ = NULL;
  return temp;
}
inline void CtrlTopWindowsMessage::set_allocated_common_param(::CtrlCommonParamTbox* common_param) {
  delete common_param_;
  common_param_ = common_param;
  if (common_param) {
    set_has_common_param();
  } else {
    clear_has_common_param();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlTopWindowsMessage.common_param)
}

// optional .CtrlCommonInfo top_windows_ctrl_info = 2;
inline bool CtrlTopWindowsMessage::has_top_windows_ctrl_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CtrlTopWindowsMessage::set_has_top_windows_ctrl_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CtrlTopWindowsMessage::clear_has_top_windows_ctrl_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CtrlTopWindowsMessage::clear_top_windows_ctrl_info() {
  if (top_windows_ctrl_info_ != NULL) top_windows_ctrl_info_->::CtrlCommonInfo::Clear();
  clear_has_top_windows_ctrl_info();
}
inline const ::CtrlCommonInfo& CtrlTopWindowsMessage::top_windows_ctrl_info() const {
  // @@protoc_insertion_point(field_get:CtrlTopWindowsMessage.top_windows_ctrl_info)
  return top_windows_ctrl_info_ != NULL ? *top_windows_ctrl_info_ : *default_instance_->top_windows_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlTopWindowsMessage::mutable_top_windows_ctrl_info() {
  set_has_top_windows_ctrl_info();
  if (top_windows_ctrl_info_ == NULL) {
    top_windows_ctrl_info_ = new ::CtrlCommonInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlTopWindowsMessage.top_windows_ctrl_info)
  return top_windows_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlTopWindowsMessage::release_top_windows_ctrl_info() {
  // @@protoc_insertion_point(field_release:CtrlTopWindowsMessage.top_windows_ctrl_info)
  clear_has_top_windows_ctrl_info();
  ::CtrlCommonInfo* temp = top_windows_ctrl_info_;
  top_windows_ctrl_info_ = NULL;
  return temp;
}
inline void CtrlTopWindowsMessage::set_allocated_top_windows_ctrl_info(::CtrlCommonInfo* top_windows_ctrl_info) {
  delete top_windows_ctrl_info_;
  top_windows_ctrl_info_ = top_windows_ctrl_info;
  if (top_windows_ctrl_info) {
    set_has_top_windows_ctrl_info();
  } else {
    clear_has_top_windows_ctrl_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlTopWindowsMessage.top_windows_ctrl_info)
}

// optional .TopWindowsStateInfo top_windows_state_info = 3;
inline bool CtrlTopWindowsMessage::has_top_windows_state_info() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CtrlTopWindowsMessage::set_has_top_windows_state_info() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CtrlTopWindowsMessage::clear_has_top_windows_state_info() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CtrlTopWindowsMessage::clear_top_windows_state_info() {
  if (top_windows_state_info_ != NULL) top_windows_state_info_->::TopWindowsStateInfo::Clear();
  clear_has_top_windows_state_info();
}
inline const ::TopWindowsStateInfo& CtrlTopWindowsMessage::top_windows_state_info() const {
  // @@protoc_insertion_point(field_get:CtrlTopWindowsMessage.top_windows_state_info)
  return top_windows_state_info_ != NULL ? *top_windows_state_info_ : *default_instance_->top_windows_state_info_;
}
inline ::TopWindowsStateInfo* CtrlTopWindowsMessage::mutable_top_windows_state_info() {
  set_has_top_windows_state_info();
  if (top_windows_state_info_ == NULL) {
    top_windows_state_info_ = new ::TopWindowsStateInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlTopWindowsMessage.top_windows_state_info)
  return top_windows_state_info_;
}
inline ::TopWindowsStateInfo* CtrlTopWindowsMessage::release_top_windows_state_info() {
  // @@protoc_insertion_point(field_release:CtrlTopWindowsMessage.top_windows_state_info)
  clear_has_top_windows_state_info();
  ::TopWindowsStateInfo* temp = top_windows_state_info_;
  top_windows_state_info_ = NULL;
  return temp;
}
inline void CtrlTopWindowsMessage::set_allocated_top_windows_state_info(::TopWindowsStateInfo* top_windows_state_info) {
  delete top_windows_state_info_;
  top_windows_state_info_ = top_windows_state_info;
  if (top_windows_state_info) {
    set_has_top_windows_state_info();
  } else {
    clear_has_top_windows_state_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlTopWindowsMessage.top_windows_state_info)
}

// -------------------------------------------------------------------

// TopWindowsStateInfo

// optional int32 sunroof_curtain = 1;
inline bool TopWindowsStateInfo::has_sunroof_curtain() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TopWindowsStateInfo::set_has_sunroof_curtain() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TopWindowsStateInfo::clear_has_sunroof_curtain() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TopWindowsStateInfo::clear_sunroof_curtain() {
  sunroof_curtain_ = 0;
  clear_has_sunroof_curtain();
}
inline ::google::protobuf::int32 TopWindowsStateInfo::sunroof_curtain() const {
  // @@protoc_insertion_point(field_get:TopWindowsStateInfo.sunroof_curtain)
  return sunroof_curtain_;
}
inline void TopWindowsStateInfo::set_sunroof_curtain(::google::protobuf::int32 value) {
  set_has_sunroof_curtain();
  sunroof_curtain_ = value;
  // @@protoc_insertion_point(field_set:TopWindowsStateInfo.sunroof_curtain)
}

// optional int32 sunroof_glass = 2;
inline bool TopWindowsStateInfo::has_sunroof_glass() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TopWindowsStateInfo::set_has_sunroof_glass() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TopWindowsStateInfo::clear_has_sunroof_glass() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TopWindowsStateInfo::clear_sunroof_glass() {
  sunroof_glass_ = 0;
  clear_has_sunroof_glass();
}
inline ::google::protobuf::int32 TopWindowsStateInfo::sunroof_glass() const {
  // @@protoc_insertion_point(field_get:TopWindowsStateInfo.sunroof_glass)
  return sunroof_glass_;
}
inline void TopWindowsStateInfo::set_sunroof_glass(::google::protobuf::int32 value) {
  set_has_sunroof_glass();
  sunroof_glass_ = value;
  // @@protoc_insertion_point(field_set:TopWindowsStateInfo.sunroof_glass)
}

// optional int32 sunroof_possition = 3;
inline bool TopWindowsStateInfo::has_sunroof_possition() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TopWindowsStateInfo::set_has_sunroof_possition() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TopWindowsStateInfo::clear_has_sunroof_possition() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TopWindowsStateInfo::clear_sunroof_possition() {
  sunroof_possition_ = 0;
  clear_has_sunroof_possition();
}
inline ::google::protobuf::int32 TopWindowsStateInfo::sunroof_possition() const {
  // @@protoc_insertion_point(field_get:TopWindowsStateInfo.sunroof_possition)
  return sunroof_possition_;
}
inline void TopWindowsStateInfo::set_sunroof_possition(::google::protobuf::int32 value) {
  set_has_sunroof_possition();
  sunroof_possition_ = value;
  // @@protoc_insertion_point(field_set:TopWindowsStateInfo.sunroof_possition)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ctrl_5ftop_5fwindows_2eproto__INCLUDED
