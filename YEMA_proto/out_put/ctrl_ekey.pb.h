// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_ekey.proto

#ifndef PROTOBUF_ctrl_5fekey_2eproto__INCLUDED
#define PROTOBUF_ctrl_5fekey_2eproto__INCLUDED

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
void protobuf_AddDesc_ctrl_5fekey_2eproto();
void protobuf_AssignDesc_ctrl_5fekey_2eproto();
void protobuf_ShutdownFile_ctrl_5fekey_2eproto();

class CtrlEkeyMessage;
class EkeyStateInfo;

// ===================================================================

class CtrlEkeyMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CtrlEkeyMessage) */ {
 public:
  CtrlEkeyMessage();
  virtual ~CtrlEkeyMessage();

  CtrlEkeyMessage(const CtrlEkeyMessage& from);

  inline CtrlEkeyMessage& operator=(const CtrlEkeyMessage& from) {
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
  static const CtrlEkeyMessage& default_instance();

  void Swap(CtrlEkeyMessage* other);

  // implements Message ----------------------------------------------

  inline CtrlEkeyMessage* New() const { return New(NULL); }

  CtrlEkeyMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlEkeyMessage& from);
  void MergeFrom(const CtrlEkeyMessage& from);
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
  void InternalSwap(CtrlEkeyMessage* other);
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

  // optional .CtrlCommonInfo ekey_ctrl_info = 2;
  bool has_ekey_ctrl_info() const;
  void clear_ekey_ctrl_info();
  static const int kEkeyCtrlInfoFieldNumber = 2;
  const ::CtrlCommonInfo& ekey_ctrl_info() const;
  ::CtrlCommonInfo* mutable_ekey_ctrl_info();
  ::CtrlCommonInfo* release_ekey_ctrl_info();
  void set_allocated_ekey_ctrl_info(::CtrlCommonInfo* ekey_ctrl_info);

  // optional .EkeyStateInfo ekey_state_info = 3;
  bool has_ekey_state_info() const;
  void clear_ekey_state_info();
  static const int kEkeyStateInfoFieldNumber = 3;
  const ::EkeyStateInfo& ekey_state_info() const;
  ::EkeyStateInfo* mutable_ekey_state_info();
  ::EkeyStateInfo* release_ekey_state_info();
  void set_allocated_ekey_state_info(::EkeyStateInfo* ekey_state_info);

  // @@protoc_insertion_point(class_scope:CtrlEkeyMessage)
 private:
  inline void set_has_common_param();
  inline void clear_has_common_param();
  inline void set_has_ekey_ctrl_info();
  inline void clear_has_ekey_ctrl_info();
  inline void set_has_ekey_state_info();
  inline void clear_has_ekey_state_info();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::CtrlCommonParamTbox* common_param_;
  ::CtrlCommonInfo* ekey_ctrl_info_;
  ::EkeyStateInfo* ekey_state_info_;
  friend void  protobuf_AddDesc_ctrl_5fekey_2eproto();
  friend void protobuf_AssignDesc_ctrl_5fekey_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5fekey_2eproto();

  void InitAsDefaultInstance();
  static CtrlEkeyMessage* default_instance_;
};
// -------------------------------------------------------------------

class EkeyStateInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:EkeyStateInfo) */ {
 public:
  EkeyStateInfo();
  virtual ~EkeyStateInfo();

  EkeyStateInfo(const EkeyStateInfo& from);

  inline EkeyStateInfo& operator=(const EkeyStateInfo& from) {
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
  static const EkeyStateInfo& default_instance();

  void Swap(EkeyStateInfo* other);

  // implements Message ----------------------------------------------

  inline EkeyStateInfo* New() const { return New(NULL); }

  EkeyStateInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EkeyStateInfo& from);
  void MergeFrom(const EkeyStateInfo& from);
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
  void InternalSwap(EkeyStateInfo* other);
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

  // optional int32 remote_enable = 1;
  bool has_remote_enable() const;
  void clear_remote_enable();
  static const int kRemoteEnableFieldNumber = 1;
  ::google::protobuf::int32 remote_enable() const;
  void set_remote_enable(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:EkeyStateInfo)
 private:
  inline void set_has_remote_enable();
  inline void clear_has_remote_enable();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 remote_enable_;
  friend void  protobuf_AddDesc_ctrl_5fekey_2eproto();
  friend void protobuf_AssignDesc_ctrl_5fekey_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5fekey_2eproto();

  void InitAsDefaultInstance();
  static EkeyStateInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlEkeyMessage

// optional .CtrlCommonParamTbox common_param = 1;
inline bool CtrlEkeyMessage::has_common_param() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CtrlEkeyMessage::set_has_common_param() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CtrlEkeyMessage::clear_has_common_param() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CtrlEkeyMessage::clear_common_param() {
  if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
  clear_has_common_param();
}
inline const ::CtrlCommonParamTbox& CtrlEkeyMessage::common_param() const {
  // @@protoc_insertion_point(field_get:CtrlEkeyMessage.common_param)
  return common_param_ != NULL ? *common_param_ : *default_instance_->common_param_;
}
inline ::CtrlCommonParamTbox* CtrlEkeyMessage::mutable_common_param() {
  set_has_common_param();
  if (common_param_ == NULL) {
    common_param_ = new ::CtrlCommonParamTbox;
  }
  // @@protoc_insertion_point(field_mutable:CtrlEkeyMessage.common_param)
  return common_param_;
}
inline ::CtrlCommonParamTbox* CtrlEkeyMessage::release_common_param() {
  // @@protoc_insertion_point(field_release:CtrlEkeyMessage.common_param)
  clear_has_common_param();
  ::CtrlCommonParamTbox* temp = common_param_;
  common_param_ = NULL;
  return temp;
}
inline void CtrlEkeyMessage::set_allocated_common_param(::CtrlCommonParamTbox* common_param) {
  delete common_param_;
  common_param_ = common_param;
  if (common_param) {
    set_has_common_param();
  } else {
    clear_has_common_param();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlEkeyMessage.common_param)
}

// optional .CtrlCommonInfo ekey_ctrl_info = 2;
inline bool CtrlEkeyMessage::has_ekey_ctrl_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CtrlEkeyMessage::set_has_ekey_ctrl_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CtrlEkeyMessage::clear_has_ekey_ctrl_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CtrlEkeyMessage::clear_ekey_ctrl_info() {
  if (ekey_ctrl_info_ != NULL) ekey_ctrl_info_->::CtrlCommonInfo::Clear();
  clear_has_ekey_ctrl_info();
}
inline const ::CtrlCommonInfo& CtrlEkeyMessage::ekey_ctrl_info() const {
  // @@protoc_insertion_point(field_get:CtrlEkeyMessage.ekey_ctrl_info)
  return ekey_ctrl_info_ != NULL ? *ekey_ctrl_info_ : *default_instance_->ekey_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlEkeyMessage::mutable_ekey_ctrl_info() {
  set_has_ekey_ctrl_info();
  if (ekey_ctrl_info_ == NULL) {
    ekey_ctrl_info_ = new ::CtrlCommonInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlEkeyMessage.ekey_ctrl_info)
  return ekey_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlEkeyMessage::release_ekey_ctrl_info() {
  // @@protoc_insertion_point(field_release:CtrlEkeyMessage.ekey_ctrl_info)
  clear_has_ekey_ctrl_info();
  ::CtrlCommonInfo* temp = ekey_ctrl_info_;
  ekey_ctrl_info_ = NULL;
  return temp;
}
inline void CtrlEkeyMessage::set_allocated_ekey_ctrl_info(::CtrlCommonInfo* ekey_ctrl_info) {
  delete ekey_ctrl_info_;
  ekey_ctrl_info_ = ekey_ctrl_info;
  if (ekey_ctrl_info) {
    set_has_ekey_ctrl_info();
  } else {
    clear_has_ekey_ctrl_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlEkeyMessage.ekey_ctrl_info)
}

// optional .EkeyStateInfo ekey_state_info = 3;
inline bool CtrlEkeyMessage::has_ekey_state_info() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CtrlEkeyMessage::set_has_ekey_state_info() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CtrlEkeyMessage::clear_has_ekey_state_info() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CtrlEkeyMessage::clear_ekey_state_info() {
  if (ekey_state_info_ != NULL) ekey_state_info_->::EkeyStateInfo::Clear();
  clear_has_ekey_state_info();
}
inline const ::EkeyStateInfo& CtrlEkeyMessage::ekey_state_info() const {
  // @@protoc_insertion_point(field_get:CtrlEkeyMessage.ekey_state_info)
  return ekey_state_info_ != NULL ? *ekey_state_info_ : *default_instance_->ekey_state_info_;
}
inline ::EkeyStateInfo* CtrlEkeyMessage::mutable_ekey_state_info() {
  set_has_ekey_state_info();
  if (ekey_state_info_ == NULL) {
    ekey_state_info_ = new ::EkeyStateInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlEkeyMessage.ekey_state_info)
  return ekey_state_info_;
}
inline ::EkeyStateInfo* CtrlEkeyMessage::release_ekey_state_info() {
  // @@protoc_insertion_point(field_release:CtrlEkeyMessage.ekey_state_info)
  clear_has_ekey_state_info();
  ::EkeyStateInfo* temp = ekey_state_info_;
  ekey_state_info_ = NULL;
  return temp;
}
inline void CtrlEkeyMessage::set_allocated_ekey_state_info(::EkeyStateInfo* ekey_state_info) {
  delete ekey_state_info_;
  ekey_state_info_ = ekey_state_info;
  if (ekey_state_info) {
    set_has_ekey_state_info();
  } else {
    clear_has_ekey_state_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlEkeyMessage.ekey_state_info)
}

// -------------------------------------------------------------------

// EkeyStateInfo

// optional int32 remote_enable = 1;
inline bool EkeyStateInfo::has_remote_enable() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EkeyStateInfo::set_has_remote_enable() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EkeyStateInfo::clear_has_remote_enable() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EkeyStateInfo::clear_remote_enable() {
  remote_enable_ = 0;
  clear_has_remote_enable();
}
inline ::google::protobuf::int32 EkeyStateInfo::remote_enable() const {
  // @@protoc_insertion_point(field_get:EkeyStateInfo.remote_enable)
  return remote_enable_;
}
inline void EkeyStateInfo::set_remote_enable(::google::protobuf::int32 value) {
  set_has_remote_enable();
  remote_enable_ = value;
  // @@protoc_insertion_point(field_set:EkeyStateInfo.remote_enable)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ctrl_5fekey_2eproto__INCLUDED
