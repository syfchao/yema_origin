// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: device_requset_upload.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "device_requset_upload.pb.h"

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

const ::google::protobuf::Descriptor* DeviceRequsetUploadMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DeviceRequsetUploadMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_device_5frequset_5fupload_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_device_5frequset_5fupload_2eproto() {
  protobuf_AddDesc_device_5frequset_5fupload_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "device_requset_upload.proto");
  GOOGLE_CHECK(file != NULL);
  DeviceRequsetUploadMessage_descriptor_ = file->message_type(0);
  static const int DeviceRequsetUploadMessage_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, device_upload_common_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, lon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, lat_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, file_name_),
  };
  DeviceRequsetUploadMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DeviceRequsetUploadMessage_descriptor_,
      DeviceRequsetUploadMessage::default_instance_,
      DeviceRequsetUploadMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(DeviceRequsetUploadMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DeviceRequsetUploadMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_device_5frequset_5fupload_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DeviceRequsetUploadMessage_descriptor_, &DeviceRequsetUploadMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_device_5frequset_5fupload_2eproto() {
  delete DeviceRequsetUploadMessage::default_instance_;
  delete DeviceRequsetUploadMessage_reflection_;
}

void protobuf_AddDesc_device_5frequset_5fupload_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_device_5frequset_5fupload_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_device_5fupload_5fcommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\033device_requset_upload.proto\032\032device_up"
    "load_common.proto\"\221\001\n\032DeviceRequsetUploa"
    "dMessage\0228\n\024device_upload_common\030\001 \001(\0132\032"
    ".DeviceUploadCommonMessage\022\013\n\003lon\030\002 \001(\001\022"
    "\013\n\003lat\030\004 \001(\001\022\014\n\004time\030\006 \001(\006\022\021\n\tfile_name\030"
    "\010 \001(\t", 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "device_requset_upload.proto", &protobuf_RegisterTypes);
  DeviceRequsetUploadMessage::default_instance_ = new DeviceRequsetUploadMessage();
  DeviceRequsetUploadMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_device_5frequset_5fupload_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_device_5frequset_5fupload_2eproto {
  StaticDescriptorInitializer_device_5frequset_5fupload_2eproto() {
    protobuf_AddDesc_device_5frequset_5fupload_2eproto();
  }
} static_descriptor_initializer_device_5frequset_5fupload_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DeviceRequsetUploadMessage::kDeviceUploadCommonFieldNumber;
const int DeviceRequsetUploadMessage::kLonFieldNumber;
const int DeviceRequsetUploadMessage::kLatFieldNumber;
const int DeviceRequsetUploadMessage::kTimeFieldNumber;
const int DeviceRequsetUploadMessage::kFileNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DeviceRequsetUploadMessage::DeviceRequsetUploadMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:DeviceRequsetUploadMessage)
}

void DeviceRequsetUploadMessage::InitAsDefaultInstance() {
  device_upload_common_ = const_cast< ::DeviceUploadCommonMessage*>(&::DeviceUploadCommonMessage::default_instance());
}

DeviceRequsetUploadMessage::DeviceRequsetUploadMessage(const DeviceRequsetUploadMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:DeviceRequsetUploadMessage)
}

void DeviceRequsetUploadMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  device_upload_common_ = NULL;
  lon_ = 0;
  lat_ = 0;
  time_ = GOOGLE_ULONGLONG(0);
  file_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DeviceRequsetUploadMessage::~DeviceRequsetUploadMessage() {
  // @@protoc_insertion_point(destructor:DeviceRequsetUploadMessage)
  SharedDtor();
}

void DeviceRequsetUploadMessage::SharedDtor() {
  file_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete device_upload_common_;
  }
}

void DeviceRequsetUploadMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DeviceRequsetUploadMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DeviceRequsetUploadMessage_descriptor_;
}

const DeviceRequsetUploadMessage& DeviceRequsetUploadMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_device_5frequset_5fupload_2eproto();
  return *default_instance_;
}

DeviceRequsetUploadMessage* DeviceRequsetUploadMessage::default_instance_ = NULL;

DeviceRequsetUploadMessage* DeviceRequsetUploadMessage::New(::google::protobuf::Arena* arena) const {
  DeviceRequsetUploadMessage* n = new DeviceRequsetUploadMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DeviceRequsetUploadMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:DeviceRequsetUploadMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DeviceRequsetUploadMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DeviceRequsetUploadMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(lon_, time_);
    if (has_device_upload_common()) {
      if (device_upload_common_ != NULL) device_upload_common_->::DeviceUploadCommonMessage::Clear();
    }
    if (has_file_name()) {
      file_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool DeviceRequsetUploadMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:DeviceRequsetUploadMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .DeviceUploadCommonMessage device_upload_common = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_device_upload_common()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_lon;
        break;
      }

      // optional double lon = 2;
      case 2: {
        if (tag == 17) {
         parse_lon:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &lon_)));
          set_has_lon();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_lat;
        break;
      }

      // optional double lat = 4;
      case 4: {
        if (tag == 33) {
         parse_lat:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &lat_)));
          set_has_lat();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_time;
        break;
      }

      // optional fixed64 time = 6;
      case 6: {
        if (tag == 49) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_file_name;
        break;
      }

      // optional string file_name = 8;
      case 8: {
        if (tag == 66) {
         parse_file_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_file_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->file_name().data(), this->file_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "DeviceRequsetUploadMessage.file_name");
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
  // @@protoc_insertion_point(parse_success:DeviceRequsetUploadMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:DeviceRequsetUploadMessage)
  return false;
#undef DO_
}

void DeviceRequsetUploadMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:DeviceRequsetUploadMessage)
  // optional .DeviceUploadCommonMessage device_upload_common = 1;
  if (has_device_upload_common()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->device_upload_common_, output);
  }

  // optional double lon = 2;
  if (has_lon()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->lon(), output);
  }

  // optional double lat = 4;
  if (has_lat()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->lat(), output);
  }

  // optional fixed64 time = 6;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(6, this->time(), output);
  }

  // optional string file_name = 8;
  if (has_file_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->file_name().data(), this->file_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "DeviceRequsetUploadMessage.file_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->file_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:DeviceRequsetUploadMessage)
}

::google::protobuf::uint8* DeviceRequsetUploadMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:DeviceRequsetUploadMessage)
  // optional .DeviceUploadCommonMessage device_upload_common = 1;
  if (has_device_upload_common()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->device_upload_common_, false, target);
  }

  // optional double lon = 2;
  if (has_lon()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->lon(), target);
  }

  // optional double lat = 4;
  if (has_lat()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->lat(), target);
  }

  // optional fixed64 time = 6;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(6, this->time(), target);
  }

  // optional string file_name = 8;
  if (has_file_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->file_name().data(), this->file_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "DeviceRequsetUploadMessage.file_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->file_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DeviceRequsetUploadMessage)
  return target;
}

int DeviceRequsetUploadMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:DeviceRequsetUploadMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 31u) {
    // optional .DeviceUploadCommonMessage device_upload_common = 1;
    if (has_device_upload_common()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->device_upload_common_);
    }

    // optional double lon = 2;
    if (has_lon()) {
      total_size += 1 + 8;
    }

    // optional double lat = 4;
    if (has_lat()) {
      total_size += 1 + 8;
    }

    // optional fixed64 time = 6;
    if (has_time()) {
      total_size += 1 + 8;
    }

    // optional string file_name = 8;
    if (has_file_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->file_name());
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

void DeviceRequsetUploadMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:DeviceRequsetUploadMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DeviceRequsetUploadMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DeviceRequsetUploadMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:DeviceRequsetUploadMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:DeviceRequsetUploadMessage)
    MergeFrom(*source);
  }
}

void DeviceRequsetUploadMessage::MergeFrom(const DeviceRequsetUploadMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:DeviceRequsetUploadMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_device_upload_common()) {
      mutable_device_upload_common()->::DeviceUploadCommonMessage::MergeFrom(from.device_upload_common());
    }
    if (from.has_lon()) {
      set_lon(from.lon());
    }
    if (from.has_lat()) {
      set_lat(from.lat());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_file_name()) {
      set_has_file_name();
      file_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_name_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void DeviceRequsetUploadMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:DeviceRequsetUploadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DeviceRequsetUploadMessage::CopyFrom(const DeviceRequsetUploadMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DeviceRequsetUploadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DeviceRequsetUploadMessage::IsInitialized() const {

  return true;
}

void DeviceRequsetUploadMessage::Swap(DeviceRequsetUploadMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DeviceRequsetUploadMessage::InternalSwap(DeviceRequsetUploadMessage* other) {
  std::swap(device_upload_common_, other->device_upload_common_);
  std::swap(lon_, other->lon_);
  std::swap(lat_, other->lat_);
  std::swap(time_, other->time_);
  file_name_.Swap(&other->file_name_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DeviceRequsetUploadMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DeviceRequsetUploadMessage_descriptor_;
  metadata.reflection = DeviceRequsetUploadMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DeviceRequsetUploadMessage

// optional .DeviceUploadCommonMessage device_upload_common = 1;
bool DeviceRequsetUploadMessage::has_device_upload_common() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void DeviceRequsetUploadMessage::set_has_device_upload_common() {
  _has_bits_[0] |= 0x00000001u;
}
void DeviceRequsetUploadMessage::clear_has_device_upload_common() {
  _has_bits_[0] &= ~0x00000001u;
}
void DeviceRequsetUploadMessage::clear_device_upload_common() {
  if (device_upload_common_ != NULL) device_upload_common_->::DeviceUploadCommonMessage::Clear();
  clear_has_device_upload_common();
}
const ::DeviceUploadCommonMessage& DeviceRequsetUploadMessage::device_upload_common() const {
  // @@protoc_insertion_point(field_get:DeviceRequsetUploadMessage.device_upload_common)
  return device_upload_common_ != NULL ? *device_upload_common_ : *default_instance_->device_upload_common_;
}
::DeviceUploadCommonMessage* DeviceRequsetUploadMessage::mutable_device_upload_common() {
  set_has_device_upload_common();
  if (device_upload_common_ == NULL) {
    device_upload_common_ = new ::DeviceUploadCommonMessage;
  }
  // @@protoc_insertion_point(field_mutable:DeviceRequsetUploadMessage.device_upload_common)
  return device_upload_common_;
}
::DeviceUploadCommonMessage* DeviceRequsetUploadMessage::release_device_upload_common() {
  // @@protoc_insertion_point(field_release:DeviceRequsetUploadMessage.device_upload_common)
  clear_has_device_upload_common();
  ::DeviceUploadCommonMessage* temp = device_upload_common_;
  device_upload_common_ = NULL;
  return temp;
}
void DeviceRequsetUploadMessage::set_allocated_device_upload_common(::DeviceUploadCommonMessage* device_upload_common) {
  delete device_upload_common_;
  device_upload_common_ = device_upload_common;
  if (device_upload_common) {
    set_has_device_upload_common();
  } else {
    clear_has_device_upload_common();
  }
  // @@protoc_insertion_point(field_set_allocated:DeviceRequsetUploadMessage.device_upload_common)
}

// optional double lon = 2;
bool DeviceRequsetUploadMessage::has_lon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void DeviceRequsetUploadMessage::set_has_lon() {
  _has_bits_[0] |= 0x00000002u;
}
void DeviceRequsetUploadMessage::clear_has_lon() {
  _has_bits_[0] &= ~0x00000002u;
}
void DeviceRequsetUploadMessage::clear_lon() {
  lon_ = 0;
  clear_has_lon();
}
 double DeviceRequsetUploadMessage::lon() const {
  // @@protoc_insertion_point(field_get:DeviceRequsetUploadMessage.lon)
  return lon_;
}
 void DeviceRequsetUploadMessage::set_lon(double value) {
  set_has_lon();
  lon_ = value;
  // @@protoc_insertion_point(field_set:DeviceRequsetUploadMessage.lon)
}

// optional double lat = 4;
bool DeviceRequsetUploadMessage::has_lat() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void DeviceRequsetUploadMessage::set_has_lat() {
  _has_bits_[0] |= 0x00000004u;
}
void DeviceRequsetUploadMessage::clear_has_lat() {
  _has_bits_[0] &= ~0x00000004u;
}
void DeviceRequsetUploadMessage::clear_lat() {
  lat_ = 0;
  clear_has_lat();
}
 double DeviceRequsetUploadMessage::lat() const {
  // @@protoc_insertion_point(field_get:DeviceRequsetUploadMessage.lat)
  return lat_;
}
 void DeviceRequsetUploadMessage::set_lat(double value) {
  set_has_lat();
  lat_ = value;
  // @@protoc_insertion_point(field_set:DeviceRequsetUploadMessage.lat)
}

// optional fixed64 time = 6;
bool DeviceRequsetUploadMessage::has_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void DeviceRequsetUploadMessage::set_has_time() {
  _has_bits_[0] |= 0x00000008u;
}
void DeviceRequsetUploadMessage::clear_has_time() {
  _has_bits_[0] &= ~0x00000008u;
}
void DeviceRequsetUploadMessage::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
 ::google::protobuf::uint64 DeviceRequsetUploadMessage::time() const {
  // @@protoc_insertion_point(field_get:DeviceRequsetUploadMessage.time)
  return time_;
}
 void DeviceRequsetUploadMessage::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:DeviceRequsetUploadMessage.time)
}

// optional string file_name = 8;
bool DeviceRequsetUploadMessage::has_file_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void DeviceRequsetUploadMessage::set_has_file_name() {
  _has_bits_[0] |= 0x00000010u;
}
void DeviceRequsetUploadMessage::clear_has_file_name() {
  _has_bits_[0] &= ~0x00000010u;
}
void DeviceRequsetUploadMessage::clear_file_name() {
  file_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_file_name();
}
 const ::std::string& DeviceRequsetUploadMessage::file_name() const {
  // @@protoc_insertion_point(field_get:DeviceRequsetUploadMessage.file_name)
  return file_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceRequsetUploadMessage::set_file_name(const ::std::string& value) {
  set_has_file_name();
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:DeviceRequsetUploadMessage.file_name)
}
 void DeviceRequsetUploadMessage::set_file_name(const char* value) {
  set_has_file_name();
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:DeviceRequsetUploadMessage.file_name)
}
 void DeviceRequsetUploadMessage::set_file_name(const char* value, size_t size) {
  set_has_file_name();
  file_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:DeviceRequsetUploadMessage.file_name)
}
 ::std::string* DeviceRequsetUploadMessage::mutable_file_name() {
  set_has_file_name();
  // @@protoc_insertion_point(field_mutable:DeviceRequsetUploadMessage.file_name)
  return file_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DeviceRequsetUploadMessage::release_file_name() {
  // @@protoc_insertion_point(field_release:DeviceRequsetUploadMessage.file_name)
  clear_has_file_name();
  return file_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DeviceRequsetUploadMessage::set_allocated_file_name(::std::string* file_name) {
  if (file_name != NULL) {
    set_has_file_name();
  } else {
    clear_has_file_name();
  }
  file_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_name);
  // @@protoc_insertion_point(field_set_allocated:DeviceRequsetUploadMessage.file_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
