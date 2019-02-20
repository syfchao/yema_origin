// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_light_horn.proto

#ifndef PROTOBUF_ctrl_5flight_5fhorn_2eproto__INCLUDED
#define PROTOBUF_ctrl_5flight_5fhorn_2eproto__INCLUDED

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
void protobuf_AddDesc_ctrl_5flight_5fhorn_2eproto();
void protobuf_AssignDesc_ctrl_5flight_5fhorn_2eproto();
void protobuf_ShutdownFile_ctrl_5flight_5fhorn_2eproto();

class CtrlLightHornMessage;

// ===================================================================

class CtrlLightHornMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CtrlLightHornMessage) */ {
 public:
  CtrlLightHornMessage();
  virtual ~CtrlLightHornMessage();

  CtrlLightHornMessage(const CtrlLightHornMessage& from);

  inline CtrlLightHornMessage& operator=(const CtrlLightHornMessage& from) {
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
  static const CtrlLightHornMessage& default_instance();

  void Swap(CtrlLightHornMessage* other);

  // implements Message ----------------------------------------------

  inline CtrlLightHornMessage* New() const { return New(NULL); }

  CtrlLightHornMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlLightHornMessage& from);
  void MergeFrom(const CtrlLightHornMessage& from);
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
  void InternalSwap(CtrlLightHornMessage* other);
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

  // optional .CtrlCommonInfo lighthorn_ctrl_info = 2;
  bool has_lighthorn_ctrl_info() const;
  void clear_lighthorn_ctrl_info();
  static const int kLighthornCtrlInfoFieldNumber = 2;
  const ::CtrlCommonInfo& lighthorn_ctrl_info() const;
  ::CtrlCommonInfo* mutable_lighthorn_ctrl_info();
  ::CtrlCommonInfo* release_lighthorn_ctrl_info();
  void set_allocated_lighthorn_ctrl_info(::CtrlCommonInfo* lighthorn_ctrl_info);

  // @@protoc_insertion_point(class_scope:CtrlLightHornMessage)
 private:
  inline void set_has_common_param();
  inline void clear_has_common_param();
  inline void set_has_lighthorn_ctrl_info();
  inline void clear_has_lighthorn_ctrl_info();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::CtrlCommonParamTbox* common_param_;
  ::CtrlCommonInfo* lighthorn_ctrl_info_;
  friend void  protobuf_AddDesc_ctrl_5flight_5fhorn_2eproto();
  friend void protobuf_AssignDesc_ctrl_5flight_5fhorn_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5flight_5fhorn_2eproto();

  void InitAsDefaultInstance();
  static CtrlLightHornMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlLightHornMessage

// optional .CtrlCommonParamTbox common_param = 1;
inline bool CtrlLightHornMessage::has_common_param() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CtrlLightHornMessage::set_has_common_param() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CtrlLightHornMessage::clear_has_common_param() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CtrlLightHornMessage::clear_common_param() {
  if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
  clear_has_common_param();
}
inline const ::CtrlCommonParamTbox& CtrlLightHornMessage::common_param() const {
  // @@protoc_insertion_point(field_get:CtrlLightHornMessage.common_param)
  return common_param_ != NULL ? *common_param_ : *default_instance_->common_param_;
}
inline ::CtrlCommonParamTbox* CtrlLightHornMessage::mutable_common_param() {
  set_has_common_param();
  if (common_param_ == NULL) {
    common_param_ = new ::CtrlCommonParamTbox;
  }
  // @@protoc_insertion_point(field_mutable:CtrlLightHornMessage.common_param)
  return common_param_;
}
inline ::CtrlCommonParamTbox* CtrlLightHornMessage::release_common_param() {
  // @@protoc_insertion_point(field_release:CtrlLightHornMessage.common_param)
  clear_has_common_param();
  ::CtrlCommonParamTbox* temp = common_param_;
  common_param_ = NULL;
  return temp;
}
inline void CtrlLightHornMessage::set_allocated_common_param(::CtrlCommonParamTbox* common_param) {
  delete common_param_;
  common_param_ = common_param;
  if (common_param) {
    set_has_common_param();
  } else {
    clear_has_common_param();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlLightHornMessage.common_param)
}

// optional .CtrlCommonInfo lighthorn_ctrl_info = 2;
inline bool CtrlLightHornMessage::has_lighthorn_ctrl_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CtrlLightHornMessage::set_has_lighthorn_ctrl_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CtrlLightHornMessage::clear_has_lighthorn_ctrl_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CtrlLightHornMessage::clear_lighthorn_ctrl_info() {
  if (lighthorn_ctrl_info_ != NULL) lighthorn_ctrl_info_->::CtrlCommonInfo::Clear();
  clear_has_lighthorn_ctrl_info();
}
inline const ::CtrlCommonInfo& CtrlLightHornMessage::lighthorn_ctrl_info() const {
  // @@protoc_insertion_point(field_get:CtrlLightHornMessage.lighthorn_ctrl_info)
  return lighthorn_ctrl_info_ != NULL ? *lighthorn_ctrl_info_ : *default_instance_->lighthorn_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlLightHornMessage::mutable_lighthorn_ctrl_info() {
  set_has_lighthorn_ctrl_info();
  if (lighthorn_ctrl_info_ == NULL) {
    lighthorn_ctrl_info_ = new ::CtrlCommonInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlLightHornMessage.lighthorn_ctrl_info)
  return lighthorn_ctrl_info_;
}
inline ::CtrlCommonInfo* CtrlLightHornMessage::release_lighthorn_ctrl_info() {
  // @@protoc_insertion_point(field_release:CtrlLightHornMessage.lighthorn_ctrl_info)
  clear_has_lighthorn_ctrl_info();
  ::CtrlCommonInfo* temp = lighthorn_ctrl_info_;
  lighthorn_ctrl_info_ = NULL;
  return temp;
}
inline void CtrlLightHornMessage::set_allocated_lighthorn_ctrl_info(::CtrlCommonInfo* lighthorn_ctrl_info) {
  delete lighthorn_ctrl_info_;
  lighthorn_ctrl_info_ = lighthorn_ctrl_info;
  if (lighthorn_ctrl_info) {
    set_has_lighthorn_ctrl_info();
  } else {
    clear_has_lighthorn_ctrl_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlLightHornMessage.lighthorn_ctrl_info)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ctrl_5flight_5fhorn_2eproto__INCLUDED