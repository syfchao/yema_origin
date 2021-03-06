// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_private_information.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ctrl_private_information.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* CtrlPrivateInformationMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CtrlPrivateInformationMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* PrivateInfoStateInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PrivateInfoStateInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ctrl_5fprivate_5finformation_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_ctrl_5fprivate_5finformation_2eproto() {
  protobuf_AddDesc_ctrl_5fprivate_5finformation_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ctrl_private_information.proto");
  GOOGLE_CHECK(file != NULL);
  CtrlPrivateInformationMessage_descriptor_ = file->message_type(0);
  static const int CtrlPrivateInformationMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlPrivateInformationMessage, common_param_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlPrivateInformationMessage, private_info_ctrl_info_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlPrivateInformationMessage, private_info_state_info_),
  };
  CtrlPrivateInformationMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CtrlPrivateInformationMessage_descriptor_,
      CtrlPrivateInformationMessage::default_instance_,
      CtrlPrivateInformationMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlPrivateInformationMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(CtrlPrivateInformationMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlPrivateInformationMessage, _internal_metadata_),
      -1);
  PrivateInfoStateInfo_descriptor_ = file->message_type(1);
  static const int PrivateInfoStateInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrivateInfoStateInfo, lock_state_),
  };
  PrivateInfoStateInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PrivateInfoStateInfo_descriptor_,
      PrivateInfoStateInfo::default_instance_,
      PrivateInfoStateInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrivateInfoStateInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(PrivateInfoStateInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PrivateInfoStateInfo, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ctrl_5fprivate_5finformation_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CtrlPrivateInformationMessage_descriptor_, &CtrlPrivateInformationMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PrivateInfoStateInfo_descriptor_, &PrivateInfoStateInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ctrl_5fprivate_5finformation_2eproto() {
  delete CtrlPrivateInformationMessage::default_instance_;
  delete CtrlPrivateInformationMessage_reflection_;
  delete PrivateInfoStateInfo::default_instance_;
  delete PrivateInfoStateInfo_reflection_;
}

void protobuf_AddDesc_ctrl_5fprivate_5finformation_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_ctrl_5fprivate_5finformation_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_ctrl_5fcommon_5fparam_5ftbox_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\036ctrl_private_information.proto\032\034ctrl_c"
    "ommon_param_tbox.proto\"\264\001\n\035CtrlPrivateIn"
    "formationMessage\022*\n\014common_param\030\001 \001(\0132\024"
    ".CtrlCommonParamTbox\022/\n\026private_info_ctr"
    "l_info\030\002 \001(\0132\017.CtrlCommonInfo\0226\n\027private"
    "_info_state_info\030\003 \001(\0132\025.PrivateInfoStat"
    "eInfo\"*\n\024PrivateInfoStateInfo\022\022\n\nlock_st"
    "ate\030\001 \001(\005B:\n\034com.mx.server.remote.v2.bea"
    "nB\032CtrlPrivateInformationBean", 349);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ctrl_private_information.proto", &protobuf_RegisterTypes);
  CtrlPrivateInformationMessage::default_instance_ = new CtrlPrivateInformationMessage();
  PrivateInfoStateInfo::default_instance_ = new PrivateInfoStateInfo();
  CtrlPrivateInformationMessage::default_instance_->InitAsDefaultInstance();
  PrivateInfoStateInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ctrl_5fprivate_5finformation_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ctrl_5fprivate_5finformation_2eproto {
  StaticDescriptorInitializer_ctrl_5fprivate_5finformation_2eproto() {
    protobuf_AddDesc_ctrl_5fprivate_5finformation_2eproto();
  }
} static_descriptor_initializer_ctrl_5fprivate_5finformation_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CtrlPrivateInformationMessage::kCommonParamFieldNumber;
const int CtrlPrivateInformationMessage::kPrivateInfoCtrlInfoFieldNumber;
const int CtrlPrivateInformationMessage::kPrivateInfoStateInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CtrlPrivateInformationMessage::CtrlPrivateInformationMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CtrlPrivateInformationMessage)
}

void CtrlPrivateInformationMessage::InitAsDefaultInstance() {
  common_param_ = const_cast< ::CtrlCommonParamTbox*>(&::CtrlCommonParamTbox::default_instance());
  private_info_ctrl_info_ = const_cast< ::CtrlCommonInfo*>(&::CtrlCommonInfo::default_instance());
  private_info_state_info_ = const_cast< ::PrivateInfoStateInfo*>(&::PrivateInfoStateInfo::default_instance());
}

CtrlPrivateInformationMessage::CtrlPrivateInformationMessage(const CtrlPrivateInformationMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CtrlPrivateInformationMessage)
}

void CtrlPrivateInformationMessage::SharedCtor() {
  _cached_size_ = 0;
  common_param_ = NULL;
  private_info_ctrl_info_ = NULL;
  private_info_state_info_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CtrlPrivateInformationMessage::~CtrlPrivateInformationMessage() {
  // @@protoc_insertion_point(destructor:CtrlPrivateInformationMessage)
  SharedDtor();
}

void CtrlPrivateInformationMessage::SharedDtor() {
  if (this != default_instance_) {
    delete common_param_;
    delete private_info_ctrl_info_;
    delete private_info_state_info_;
  }
}

void CtrlPrivateInformationMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CtrlPrivateInformationMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CtrlPrivateInformationMessage_descriptor_;
}

const CtrlPrivateInformationMessage& CtrlPrivateInformationMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ctrl_5fprivate_5finformation_2eproto();
  return *default_instance_;
}

CtrlPrivateInformationMessage* CtrlPrivateInformationMessage::default_instance_ = NULL;

CtrlPrivateInformationMessage* CtrlPrivateInformationMessage::New(::google::protobuf::Arena* arena) const {
  CtrlPrivateInformationMessage* n = new CtrlPrivateInformationMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CtrlPrivateInformationMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:CtrlPrivateInformationMessage)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_common_param()) {
      if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
    }
    if (has_private_info_ctrl_info()) {
      if (private_info_ctrl_info_ != NULL) private_info_ctrl_info_->::CtrlCommonInfo::Clear();
    }
    if (has_private_info_state_info()) {
      if (private_info_state_info_ != NULL) private_info_state_info_->::PrivateInfoStateInfo::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool CtrlPrivateInformationMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CtrlPrivateInformationMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .CtrlCommonParamTbox common_param = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_common_param()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_private_info_ctrl_info;
        break;
      }

      // optional .CtrlCommonInfo private_info_ctrl_info = 2;
      case 2: {
        if (tag == 18) {
         parse_private_info_ctrl_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_private_info_ctrl_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_private_info_state_info;
        break;
      }

      // optional .PrivateInfoStateInfo private_info_state_info = 3;
      case 3: {
        if (tag == 26) {
         parse_private_info_state_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_private_info_state_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CtrlPrivateInformationMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CtrlPrivateInformationMessage)
  return false;
#undef DO_
}

void CtrlPrivateInformationMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CtrlPrivateInformationMessage)
  // optional .CtrlCommonParamTbox common_param = 1;
  if (has_common_param()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->common_param_, output);
  }

  // optional .CtrlCommonInfo private_info_ctrl_info = 2;
  if (has_private_info_ctrl_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->private_info_ctrl_info_, output);
  }

  // optional .PrivateInfoStateInfo private_info_state_info = 3;
  if (has_private_info_state_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->private_info_state_info_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CtrlPrivateInformationMessage)
}

::google::protobuf::uint8* CtrlPrivateInformationMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CtrlPrivateInformationMessage)
  // optional .CtrlCommonParamTbox common_param = 1;
  if (has_common_param()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->common_param_, false, target);
  }

  // optional .CtrlCommonInfo private_info_ctrl_info = 2;
  if (has_private_info_ctrl_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->private_info_ctrl_info_, false, target);
  }

  // optional .PrivateInfoStateInfo private_info_state_info = 3;
  if (has_private_info_state_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->private_info_state_info_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CtrlPrivateInformationMessage)
  return target;
}

int CtrlPrivateInformationMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:CtrlPrivateInformationMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional .CtrlCommonParamTbox common_param = 1;
    if (has_common_param()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->common_param_);
    }

    // optional .CtrlCommonInfo private_info_ctrl_info = 2;
    if (has_private_info_ctrl_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->private_info_ctrl_info_);
    }

    // optional .PrivateInfoStateInfo private_info_state_info = 3;
    if (has_private_info_state_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->private_info_state_info_);
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CtrlPrivateInformationMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CtrlPrivateInformationMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CtrlPrivateInformationMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CtrlPrivateInformationMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CtrlPrivateInformationMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CtrlPrivateInformationMessage)
    MergeFrom(*source);
  }
}

void CtrlPrivateInformationMessage::MergeFrom(const CtrlPrivateInformationMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CtrlPrivateInformationMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_common_param()) {
      mutable_common_param()->::CtrlCommonParamTbox::MergeFrom(from.common_param());
    }
    if (from.has_private_info_ctrl_info()) {
      mutable_private_info_ctrl_info()->::CtrlCommonInfo::MergeFrom(from.private_info_ctrl_info());
    }
    if (from.has_private_info_state_info()) {
      mutable_private_info_state_info()->::PrivateInfoStateInfo::MergeFrom(from.private_info_state_info());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void CtrlPrivateInformationMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CtrlPrivateInformationMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CtrlPrivateInformationMessage::CopyFrom(const CtrlPrivateInformationMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CtrlPrivateInformationMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CtrlPrivateInformationMessage::IsInitialized() const {

  return true;
}

void CtrlPrivateInformationMessage::Swap(CtrlPrivateInformationMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CtrlPrivateInformationMessage::InternalSwap(CtrlPrivateInformationMessage* other) {
  std::swap(common_param_, other->common_param_);
  std::swap(private_info_ctrl_info_, other->private_info_ctrl_info_);
  std::swap(private_info_state_info_, other->private_info_state_info_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CtrlPrivateInformationMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CtrlPrivateInformationMessage_descriptor_;
  metadata.reflection = CtrlPrivateInformationMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlPrivateInformationMessage

// optional .CtrlCommonParamTbox common_param = 1;
bool CtrlPrivateInformationMessage::has_common_param() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CtrlPrivateInformationMessage::set_has_common_param() {
  _has_bits_[0] |= 0x00000001u;
}
void CtrlPrivateInformationMessage::clear_has_common_param() {
  _has_bits_[0] &= ~0x00000001u;
}
void CtrlPrivateInformationMessage::clear_common_param() {
  if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
  clear_has_common_param();
}
const ::CtrlCommonParamTbox& CtrlPrivateInformationMessage::common_param() const {
  // @@protoc_insertion_point(field_get:CtrlPrivateInformationMessage.common_param)
  return common_param_ != NULL ? *common_param_ : *default_instance_->common_param_;
}
::CtrlCommonParamTbox* CtrlPrivateInformationMessage::mutable_common_param() {
  set_has_common_param();
  if (common_param_ == NULL) {
    common_param_ = new ::CtrlCommonParamTbox;
  }
  // @@protoc_insertion_point(field_mutable:CtrlPrivateInformationMessage.common_param)
  return common_param_;
}
::CtrlCommonParamTbox* CtrlPrivateInformationMessage::release_common_param() {
  // @@protoc_insertion_point(field_release:CtrlPrivateInformationMessage.common_param)
  clear_has_common_param();
  ::CtrlCommonParamTbox* temp = common_param_;
  common_param_ = NULL;
  return temp;
}
void CtrlPrivateInformationMessage::set_allocated_common_param(::CtrlCommonParamTbox* common_param) {
  delete common_param_;
  common_param_ = common_param;
  if (common_param) {
    set_has_common_param();
  } else {
    clear_has_common_param();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlPrivateInformationMessage.common_param)
}

// optional .CtrlCommonInfo private_info_ctrl_info = 2;
bool CtrlPrivateInformationMessage::has_private_info_ctrl_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CtrlPrivateInformationMessage::set_has_private_info_ctrl_info() {
  _has_bits_[0] |= 0x00000002u;
}
void CtrlPrivateInformationMessage::clear_has_private_info_ctrl_info() {
  _has_bits_[0] &= ~0x00000002u;
}
void CtrlPrivateInformationMessage::clear_private_info_ctrl_info() {
  if (private_info_ctrl_info_ != NULL) private_info_ctrl_info_->::CtrlCommonInfo::Clear();
  clear_has_private_info_ctrl_info();
}
const ::CtrlCommonInfo& CtrlPrivateInformationMessage::private_info_ctrl_info() const {
  // @@protoc_insertion_point(field_get:CtrlPrivateInformationMessage.private_info_ctrl_info)
  return private_info_ctrl_info_ != NULL ? *private_info_ctrl_info_ : *default_instance_->private_info_ctrl_info_;
}
::CtrlCommonInfo* CtrlPrivateInformationMessage::mutable_private_info_ctrl_info() {
  set_has_private_info_ctrl_info();
  if (private_info_ctrl_info_ == NULL) {
    private_info_ctrl_info_ = new ::CtrlCommonInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlPrivateInformationMessage.private_info_ctrl_info)
  return private_info_ctrl_info_;
}
::CtrlCommonInfo* CtrlPrivateInformationMessage::release_private_info_ctrl_info() {
  // @@protoc_insertion_point(field_release:CtrlPrivateInformationMessage.private_info_ctrl_info)
  clear_has_private_info_ctrl_info();
  ::CtrlCommonInfo* temp = private_info_ctrl_info_;
  private_info_ctrl_info_ = NULL;
  return temp;
}
void CtrlPrivateInformationMessage::set_allocated_private_info_ctrl_info(::CtrlCommonInfo* private_info_ctrl_info) {
  delete private_info_ctrl_info_;
  private_info_ctrl_info_ = private_info_ctrl_info;
  if (private_info_ctrl_info) {
    set_has_private_info_ctrl_info();
  } else {
    clear_has_private_info_ctrl_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlPrivateInformationMessage.private_info_ctrl_info)
}

// optional .PrivateInfoStateInfo private_info_state_info = 3;
bool CtrlPrivateInformationMessage::has_private_info_state_info() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CtrlPrivateInformationMessage::set_has_private_info_state_info() {
  _has_bits_[0] |= 0x00000004u;
}
void CtrlPrivateInformationMessage::clear_has_private_info_state_info() {
  _has_bits_[0] &= ~0x00000004u;
}
void CtrlPrivateInformationMessage::clear_private_info_state_info() {
  if (private_info_state_info_ != NULL) private_info_state_info_->::PrivateInfoStateInfo::Clear();
  clear_has_private_info_state_info();
}
const ::PrivateInfoStateInfo& CtrlPrivateInformationMessage::private_info_state_info() const {
  // @@protoc_insertion_point(field_get:CtrlPrivateInformationMessage.private_info_state_info)
  return private_info_state_info_ != NULL ? *private_info_state_info_ : *default_instance_->private_info_state_info_;
}
::PrivateInfoStateInfo* CtrlPrivateInformationMessage::mutable_private_info_state_info() {
  set_has_private_info_state_info();
  if (private_info_state_info_ == NULL) {
    private_info_state_info_ = new ::PrivateInfoStateInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlPrivateInformationMessage.private_info_state_info)
  return private_info_state_info_;
}
::PrivateInfoStateInfo* CtrlPrivateInformationMessage::release_private_info_state_info() {
  // @@protoc_insertion_point(field_release:CtrlPrivateInformationMessage.private_info_state_info)
  clear_has_private_info_state_info();
  ::PrivateInfoStateInfo* temp = private_info_state_info_;
  private_info_state_info_ = NULL;
  return temp;
}
void CtrlPrivateInformationMessage::set_allocated_private_info_state_info(::PrivateInfoStateInfo* private_info_state_info) {
  delete private_info_state_info_;
  private_info_state_info_ = private_info_state_info;
  if (private_info_state_info) {
    set_has_private_info_state_info();
  } else {
    clear_has_private_info_state_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlPrivateInformationMessage.private_info_state_info)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PrivateInfoStateInfo::kLockStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PrivateInfoStateInfo::PrivateInfoStateInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PrivateInfoStateInfo)
}

void PrivateInfoStateInfo::InitAsDefaultInstance() {
}

PrivateInfoStateInfo::PrivateInfoStateInfo(const PrivateInfoStateInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PrivateInfoStateInfo)
}

void PrivateInfoStateInfo::SharedCtor() {
  _cached_size_ = 0;
  lock_state_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PrivateInfoStateInfo::~PrivateInfoStateInfo() {
  // @@protoc_insertion_point(destructor:PrivateInfoStateInfo)
  SharedDtor();
}

void PrivateInfoStateInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PrivateInfoStateInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PrivateInfoStateInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PrivateInfoStateInfo_descriptor_;
}

const PrivateInfoStateInfo& PrivateInfoStateInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ctrl_5fprivate_5finformation_2eproto();
  return *default_instance_;
}

PrivateInfoStateInfo* PrivateInfoStateInfo::default_instance_ = NULL;

PrivateInfoStateInfo* PrivateInfoStateInfo::New(::google::protobuf::Arena* arena) const {
  PrivateInfoStateInfo* n = new PrivateInfoStateInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PrivateInfoStateInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:PrivateInfoStateInfo)
  lock_state_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PrivateInfoStateInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PrivateInfoStateInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 lock_state = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &lock_state_)));
          set_has_lock_state();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PrivateInfoStateInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PrivateInfoStateInfo)
  return false;
#undef DO_
}

void PrivateInfoStateInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PrivateInfoStateInfo)
  // optional int32 lock_state = 1;
  if (has_lock_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->lock_state(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PrivateInfoStateInfo)
}

::google::protobuf::uint8* PrivateInfoStateInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PrivateInfoStateInfo)
  // optional int32 lock_state = 1;
  if (has_lock_state()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->lock_state(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PrivateInfoStateInfo)
  return target;
}

int PrivateInfoStateInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:PrivateInfoStateInfo)
  int total_size = 0;

  // optional int32 lock_state = 1;
  if (has_lock_state()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->lock_state());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PrivateInfoStateInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PrivateInfoStateInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PrivateInfoStateInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PrivateInfoStateInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PrivateInfoStateInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PrivateInfoStateInfo)
    MergeFrom(*source);
  }
}

void PrivateInfoStateInfo::MergeFrom(const PrivateInfoStateInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PrivateInfoStateInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_lock_state()) {
      set_lock_state(from.lock_state());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PrivateInfoStateInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PrivateInfoStateInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PrivateInfoStateInfo::CopyFrom(const PrivateInfoStateInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PrivateInfoStateInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PrivateInfoStateInfo::IsInitialized() const {

  return true;
}

void PrivateInfoStateInfo::Swap(PrivateInfoStateInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PrivateInfoStateInfo::InternalSwap(PrivateInfoStateInfo* other) {
  std::swap(lock_state_, other->lock_state_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PrivateInfoStateInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PrivateInfoStateInfo_descriptor_;
  metadata.reflection = PrivateInfoStateInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PrivateInfoStateInfo

// optional int32 lock_state = 1;
bool PrivateInfoStateInfo::has_lock_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PrivateInfoStateInfo::set_has_lock_state() {
  _has_bits_[0] |= 0x00000001u;
}
void PrivateInfoStateInfo::clear_has_lock_state() {
  _has_bits_[0] &= ~0x00000001u;
}
void PrivateInfoStateInfo::clear_lock_state() {
  lock_state_ = 0;
  clear_has_lock_state();
}
 ::google::protobuf::int32 PrivateInfoStateInfo::lock_state() const {
  // @@protoc_insertion_point(field_get:PrivateInfoStateInfo.lock_state)
  return lock_state_;
}
 void PrivateInfoStateInfo::set_lock_state(::google::protobuf::int32 value) {
  set_has_lock_state();
  lock_state_ = value;
  // @@protoc_insertion_point(field_set:PrivateInfoStateInfo.lock_state)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
