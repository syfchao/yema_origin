// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: state_tyre.proto

#ifndef PROTOBUF_state_5ftyre_2eproto__INCLUDED
#define PROTOBUF_state_5ftyre_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_state_5ftyre_2eproto();
void protobuf_AssignDesc_state_5ftyre_2eproto();
void protobuf_ShutdownFile_state_5ftyre_2eproto();

class StateTyreMessage;

// ===================================================================

class StateTyreMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:StateTyreMessage) */ {
 public:
  StateTyreMessage();
  virtual ~StateTyreMessage();

  StateTyreMessage(const StateTyreMessage& from);

  inline StateTyreMessage& operator=(const StateTyreMessage& from) {
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
  static const StateTyreMessage& default_instance();

  void Swap(StateTyreMessage* other);

  // implements Message ----------------------------------------------

  inline StateTyreMessage* New() const { return New(NULL); }

  StateTyreMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StateTyreMessage& from);
  void MergeFrom(const StateTyreMessage& from);
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
  void InternalSwap(StateTyreMessage* other);
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

  // optional double tire_pressure_left_before = 1;
  bool has_tire_pressure_left_before() const;
  void clear_tire_pressure_left_before();
  static const int kTirePressureLeftBeforeFieldNumber = 1;
  double tire_pressure_left_before() const;
  void set_tire_pressure_left_before(double value);

  // optional double tire_pressure_right_before = 2;
  bool has_tire_pressure_right_before() const;
  void clear_tire_pressure_right_before();
  static const int kTirePressureRightBeforeFieldNumber = 2;
  double tire_pressure_right_before() const;
  void set_tire_pressure_right_before(double value);

  // optional double tire_pressure_right_back = 3;
  bool has_tire_pressure_right_back() const;
  void clear_tire_pressure_right_back();
  static const int kTirePressureRightBackFieldNumber = 3;
  double tire_pressure_right_back() const;
  void set_tire_pressure_right_back(double value);

  // optional double tire_pressure_left_back = 4;
  bool has_tire_pressure_left_back() const;
  void clear_tire_pressure_left_back();
  static const int kTirePressureLeftBackFieldNumber = 4;
  double tire_pressure_left_back() const;
  void set_tire_pressure_left_back(double value);

  // optional double tire_temperature_left_before = 5;
  bool has_tire_temperature_left_before() const;
  void clear_tire_temperature_left_before();
  static const int kTireTemperatureLeftBeforeFieldNumber = 5;
  double tire_temperature_left_before() const;
  void set_tire_temperature_left_before(double value);

  // optional double tire_temperature_right_before = 6;
  bool has_tire_temperature_right_before() const;
  void clear_tire_temperature_right_before();
  static const int kTireTemperatureRightBeforeFieldNumber = 6;
  double tire_temperature_right_before() const;
  void set_tire_temperature_right_before(double value);

  // optional double tire_temperature_right_back = 7;
  bool has_tire_temperature_right_back() const;
  void clear_tire_temperature_right_back();
  static const int kTireTemperatureRightBackFieldNumber = 7;
  double tire_temperature_right_back() const;
  void set_tire_temperature_right_back(double value);

  // optional double tire_temperature_left_back = 8;
  bool has_tire_temperature_left_back() const;
  void clear_tire_temperature_left_back();
  static const int kTireTemperatureLeftBackFieldNumber = 8;
  double tire_temperature_left_back() const;
  void set_tire_temperature_left_back(double value);

  // @@protoc_insertion_point(class_scope:StateTyreMessage)
 private:
  inline void set_has_tire_pressure_left_before();
  inline void clear_has_tire_pressure_left_before();
  inline void set_has_tire_pressure_right_before();
  inline void clear_has_tire_pressure_right_before();
  inline void set_has_tire_pressure_right_back();
  inline void clear_has_tire_pressure_right_back();
  inline void set_has_tire_pressure_left_back();
  inline void clear_has_tire_pressure_left_back();
  inline void set_has_tire_temperature_left_before();
  inline void clear_has_tire_temperature_left_before();
  inline void set_has_tire_temperature_right_before();
  inline void clear_has_tire_temperature_right_before();
  inline void set_has_tire_temperature_right_back();
  inline void clear_has_tire_temperature_right_back();
  inline void set_has_tire_temperature_left_back();
  inline void clear_has_tire_temperature_left_back();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double tire_pressure_left_before_;
  double tire_pressure_right_before_;
  double tire_pressure_right_back_;
  double tire_pressure_left_back_;
  double tire_temperature_left_before_;
  double tire_temperature_right_before_;
  double tire_temperature_right_back_;
  double tire_temperature_left_back_;
  friend void  protobuf_AddDesc_state_5ftyre_2eproto();
  friend void protobuf_AssignDesc_state_5ftyre_2eproto();
  friend void protobuf_ShutdownFile_state_5ftyre_2eproto();

  void InitAsDefaultInstance();
  static StateTyreMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StateTyreMessage

// optional double tire_pressure_left_before = 1;
inline bool StateTyreMessage::has_tire_pressure_left_before() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StateTyreMessage::set_has_tire_pressure_left_before() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StateTyreMessage::clear_has_tire_pressure_left_before() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StateTyreMessage::clear_tire_pressure_left_before() {
  tire_pressure_left_before_ = 0;
  clear_has_tire_pressure_left_before();
}
inline double StateTyreMessage::tire_pressure_left_before() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_pressure_left_before)
  return tire_pressure_left_before_;
}
inline void StateTyreMessage::set_tire_pressure_left_before(double value) {
  set_has_tire_pressure_left_before();
  tire_pressure_left_before_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_pressure_left_before)
}

// optional double tire_pressure_right_before = 2;
inline bool StateTyreMessage::has_tire_pressure_right_before() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void StateTyreMessage::set_has_tire_pressure_right_before() {
  _has_bits_[0] |= 0x00000002u;
}
inline void StateTyreMessage::clear_has_tire_pressure_right_before() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void StateTyreMessage::clear_tire_pressure_right_before() {
  tire_pressure_right_before_ = 0;
  clear_has_tire_pressure_right_before();
}
inline double StateTyreMessage::tire_pressure_right_before() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_pressure_right_before)
  return tire_pressure_right_before_;
}
inline void StateTyreMessage::set_tire_pressure_right_before(double value) {
  set_has_tire_pressure_right_before();
  tire_pressure_right_before_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_pressure_right_before)
}

// optional double tire_pressure_right_back = 3;
inline bool StateTyreMessage::has_tire_pressure_right_back() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void StateTyreMessage::set_has_tire_pressure_right_back() {
  _has_bits_[0] |= 0x00000004u;
}
inline void StateTyreMessage::clear_has_tire_pressure_right_back() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void StateTyreMessage::clear_tire_pressure_right_back() {
  tire_pressure_right_back_ = 0;
  clear_has_tire_pressure_right_back();
}
inline double StateTyreMessage::tire_pressure_right_back() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_pressure_right_back)
  return tire_pressure_right_back_;
}
inline void StateTyreMessage::set_tire_pressure_right_back(double value) {
  set_has_tire_pressure_right_back();
  tire_pressure_right_back_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_pressure_right_back)
}

// optional double tire_pressure_left_back = 4;
inline bool StateTyreMessage::has_tire_pressure_left_back() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void StateTyreMessage::set_has_tire_pressure_left_back() {
  _has_bits_[0] |= 0x00000008u;
}
inline void StateTyreMessage::clear_has_tire_pressure_left_back() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void StateTyreMessage::clear_tire_pressure_left_back() {
  tire_pressure_left_back_ = 0;
  clear_has_tire_pressure_left_back();
}
inline double StateTyreMessage::tire_pressure_left_back() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_pressure_left_back)
  return tire_pressure_left_back_;
}
inline void StateTyreMessage::set_tire_pressure_left_back(double value) {
  set_has_tire_pressure_left_back();
  tire_pressure_left_back_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_pressure_left_back)
}

// optional double tire_temperature_left_before = 5;
inline bool StateTyreMessage::has_tire_temperature_left_before() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void StateTyreMessage::set_has_tire_temperature_left_before() {
  _has_bits_[0] |= 0x00000010u;
}
inline void StateTyreMessage::clear_has_tire_temperature_left_before() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void StateTyreMessage::clear_tire_temperature_left_before() {
  tire_temperature_left_before_ = 0;
  clear_has_tire_temperature_left_before();
}
inline double StateTyreMessage::tire_temperature_left_before() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_temperature_left_before)
  return tire_temperature_left_before_;
}
inline void StateTyreMessage::set_tire_temperature_left_before(double value) {
  set_has_tire_temperature_left_before();
  tire_temperature_left_before_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_temperature_left_before)
}

// optional double tire_temperature_right_before = 6;
inline bool StateTyreMessage::has_tire_temperature_right_before() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void StateTyreMessage::set_has_tire_temperature_right_before() {
  _has_bits_[0] |= 0x00000020u;
}
inline void StateTyreMessage::clear_has_tire_temperature_right_before() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void StateTyreMessage::clear_tire_temperature_right_before() {
  tire_temperature_right_before_ = 0;
  clear_has_tire_temperature_right_before();
}
inline double StateTyreMessage::tire_temperature_right_before() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_temperature_right_before)
  return tire_temperature_right_before_;
}
inline void StateTyreMessage::set_tire_temperature_right_before(double value) {
  set_has_tire_temperature_right_before();
  tire_temperature_right_before_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_temperature_right_before)
}

// optional double tire_temperature_right_back = 7;
inline bool StateTyreMessage::has_tire_temperature_right_back() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void StateTyreMessage::set_has_tire_temperature_right_back() {
  _has_bits_[0] |= 0x00000040u;
}
inline void StateTyreMessage::clear_has_tire_temperature_right_back() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void StateTyreMessage::clear_tire_temperature_right_back() {
  tire_temperature_right_back_ = 0;
  clear_has_tire_temperature_right_back();
}
inline double StateTyreMessage::tire_temperature_right_back() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_temperature_right_back)
  return tire_temperature_right_back_;
}
inline void StateTyreMessage::set_tire_temperature_right_back(double value) {
  set_has_tire_temperature_right_back();
  tire_temperature_right_back_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_temperature_right_back)
}

// optional double tire_temperature_left_back = 8;
inline bool StateTyreMessage::has_tire_temperature_left_back() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void StateTyreMessage::set_has_tire_temperature_left_back() {
  _has_bits_[0] |= 0x00000080u;
}
inline void StateTyreMessage::clear_has_tire_temperature_left_back() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void StateTyreMessage::clear_tire_temperature_left_back() {
  tire_temperature_left_back_ = 0;
  clear_has_tire_temperature_left_back();
}
inline double StateTyreMessage::tire_temperature_left_back() const {
  // @@protoc_insertion_point(field_get:StateTyreMessage.tire_temperature_left_back)
  return tire_temperature_left_back_;
}
inline void StateTyreMessage::set_tire_temperature_left_back(double value) {
  set_has_tire_temperature_left_back();
  tire_temperature_left_back_ = value;
  // @@protoc_insertion_point(field_set:StateTyreMessage.tire_temperature_left_back)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_state_5ftyre_2eproto__INCLUDED
