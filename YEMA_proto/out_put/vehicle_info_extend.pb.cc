// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vehicle_info_extend.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vehicle_info_extend.pb.h"

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

const ::google::protobuf::Descriptor* VehicleInfoExtendMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  VehicleInfoExtendMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_vehicle_5finfo_5fextend_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_vehicle_5finfo_5fextend_2eproto() {
  protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "vehicle_info_extend.proto");
  GOOGLE_CHECK(file != NULL);
  VehicleInfoExtendMessage_descriptor_ = file->message_type(0);
  static const int VehicleInfoExtendMessage_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, rechargemileage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, vehicledirection_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, brakepedalposition_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, brakepedalstatusvalidity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, brakepedalpositionvalidity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, accelerationpedalpositionvalidity_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, locationoffsetinfo_),
  };
  VehicleInfoExtendMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      VehicleInfoExtendMessage_descriptor_,
      VehicleInfoExtendMessage::default_instance_,
      VehicleInfoExtendMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(VehicleInfoExtendMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleInfoExtendMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_vehicle_5finfo_5fextend_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      VehicleInfoExtendMessage_descriptor_, &VehicleInfoExtendMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_vehicle_5finfo_5fextend_2eproto() {
  delete VehicleInfoExtendMessage::default_instance_;
  delete VehicleInfoExtendMessage_reflection_;
}

void protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_location_5foffset_5finfo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031vehicle_info_extend.proto\032\032location_of"
    "fset_info.proto\"\213\002\n\030VehicleInfoExtendMes"
    "sage\022\027\n\017rechargeMileage\030\001 \001(\r\022\030\n\020vehicle"
    "Direction\030\002 \001(\r\022\032\n\022brakePedalPosition\030\003 "
    "\001(\r\022 \n\030brakePedalStatusValidity\030\004 \001(\r\022\"\n"
    "\032brakePedalPositionValidity\030\005 \001(\r\022)\n!acc"
    "elerationPedalPositionValidity\030\006 \001(\r\022/\n\022"
    "locationOffsetInfo\030\007 \001(\0132\023.LocationOffse"
    "tInfo", 325);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vehicle_info_extend.proto", &protobuf_RegisterTypes);
  VehicleInfoExtendMessage::default_instance_ = new VehicleInfoExtendMessage();
  VehicleInfoExtendMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_vehicle_5finfo_5fextend_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_vehicle_5finfo_5fextend_2eproto {
  StaticDescriptorInitializer_vehicle_5finfo_5fextend_2eproto() {
    protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto();
  }
} static_descriptor_initializer_vehicle_5finfo_5fextend_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VehicleInfoExtendMessage::kRechargeMileageFieldNumber;
const int VehicleInfoExtendMessage::kVehicleDirectionFieldNumber;
const int VehicleInfoExtendMessage::kBrakePedalPositionFieldNumber;
const int VehicleInfoExtendMessage::kBrakePedalStatusValidityFieldNumber;
const int VehicleInfoExtendMessage::kBrakePedalPositionValidityFieldNumber;
const int VehicleInfoExtendMessage::kAccelerationPedalPositionValidityFieldNumber;
const int VehicleInfoExtendMessage::kLocationOffsetInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VehicleInfoExtendMessage::VehicleInfoExtendMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:VehicleInfoExtendMessage)
}

void VehicleInfoExtendMessage::InitAsDefaultInstance() {
  locationoffsetinfo_ = const_cast< ::LocationOffsetInfo*>(&::LocationOffsetInfo::default_instance());
}

VehicleInfoExtendMessage::VehicleInfoExtendMessage(const VehicleInfoExtendMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:VehicleInfoExtendMessage)
}

void VehicleInfoExtendMessage::SharedCtor() {
  _cached_size_ = 0;
  rechargemileage_ = 0u;
  vehicledirection_ = 0u;
  brakepedalposition_ = 0u;
  brakepedalstatusvalidity_ = 0u;
  brakepedalpositionvalidity_ = 0u;
  accelerationpedalpositionvalidity_ = 0u;
  locationoffsetinfo_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

VehicleInfoExtendMessage::~VehicleInfoExtendMessage() {
  // @@protoc_insertion_point(destructor:VehicleInfoExtendMessage)
  SharedDtor();
}

void VehicleInfoExtendMessage::SharedDtor() {
  if (this != default_instance_) {
    delete locationoffsetinfo_;
  }
}

void VehicleInfoExtendMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VehicleInfoExtendMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return VehicleInfoExtendMessage_descriptor_;
}

const VehicleInfoExtendMessage& VehicleInfoExtendMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto();
  return *default_instance_;
}

VehicleInfoExtendMessage* VehicleInfoExtendMessage::default_instance_ = NULL;

VehicleInfoExtendMessage* VehicleInfoExtendMessage::New(::google::protobuf::Arena* arena) const {
  VehicleInfoExtendMessage* n = new VehicleInfoExtendMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VehicleInfoExtendMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:VehicleInfoExtendMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(VehicleInfoExtendMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<VehicleInfoExtendMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 127u) {
    ZR_(rechargemileage_, accelerationpedalpositionvalidity_);
    if (has_locationoffsetinfo()) {
      if (locationoffsetinfo_ != NULL) locationoffsetinfo_->::LocationOffsetInfo::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool VehicleInfoExtendMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:VehicleInfoExtendMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 rechargeMileage = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &rechargemileage_)));
          set_has_rechargemileage();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_vehicleDirection;
        break;
      }

      // optional uint32 vehicleDirection = 2;
      case 2: {
        if (tag == 16) {
         parse_vehicleDirection:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &vehicledirection_)));
          set_has_vehicledirection();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_brakePedalPosition;
        break;
      }

      // optional uint32 brakePedalPosition = 3;
      case 3: {
        if (tag == 24) {
         parse_brakePedalPosition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &brakepedalposition_)));
          set_has_brakepedalposition();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_brakePedalStatusValidity;
        break;
      }

      // optional uint32 brakePedalStatusValidity = 4;
      case 4: {
        if (tag == 32) {
         parse_brakePedalStatusValidity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &brakepedalstatusvalidity_)));
          set_has_brakepedalstatusvalidity();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_brakePedalPositionValidity;
        break;
      }

      // optional uint32 brakePedalPositionValidity = 5;
      case 5: {
        if (tag == 40) {
         parse_brakePedalPositionValidity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &brakepedalpositionvalidity_)));
          set_has_brakepedalpositionvalidity();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_accelerationPedalPositionValidity;
        break;
      }

      // optional uint32 accelerationPedalPositionValidity = 6;
      case 6: {
        if (tag == 48) {
         parse_accelerationPedalPositionValidity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &accelerationpedalpositionvalidity_)));
          set_has_accelerationpedalpositionvalidity();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_locationOffsetInfo;
        break;
      }

      // optional .LocationOffsetInfo locationOffsetInfo = 7;
      case 7: {
        if (tag == 58) {
         parse_locationOffsetInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_locationoffsetinfo()));
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
  // @@protoc_insertion_point(parse_success:VehicleInfoExtendMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:VehicleInfoExtendMessage)
  return false;
#undef DO_
}

void VehicleInfoExtendMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:VehicleInfoExtendMessage)
  // optional uint32 rechargeMileage = 1;
  if (has_rechargemileage()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->rechargemileage(), output);
  }

  // optional uint32 vehicleDirection = 2;
  if (has_vehicledirection()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->vehicledirection(), output);
  }

  // optional uint32 brakePedalPosition = 3;
  if (has_brakepedalposition()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->brakepedalposition(), output);
  }

  // optional uint32 brakePedalStatusValidity = 4;
  if (has_brakepedalstatusvalidity()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->brakepedalstatusvalidity(), output);
  }

  // optional uint32 brakePedalPositionValidity = 5;
  if (has_brakepedalpositionvalidity()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->brakepedalpositionvalidity(), output);
  }

  // optional uint32 accelerationPedalPositionValidity = 6;
  if (has_accelerationpedalpositionvalidity()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->accelerationpedalpositionvalidity(), output);
  }

  // optional .LocationOffsetInfo locationOffsetInfo = 7;
  if (has_locationoffsetinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->locationoffsetinfo_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:VehicleInfoExtendMessage)
}

::google::protobuf::uint8* VehicleInfoExtendMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:VehicleInfoExtendMessage)
  // optional uint32 rechargeMileage = 1;
  if (has_rechargemileage()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->rechargemileage(), target);
  }

  // optional uint32 vehicleDirection = 2;
  if (has_vehicledirection()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->vehicledirection(), target);
  }

  // optional uint32 brakePedalPosition = 3;
  if (has_brakepedalposition()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->brakepedalposition(), target);
  }

  // optional uint32 brakePedalStatusValidity = 4;
  if (has_brakepedalstatusvalidity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->brakepedalstatusvalidity(), target);
  }

  // optional uint32 brakePedalPositionValidity = 5;
  if (has_brakepedalpositionvalidity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->brakepedalpositionvalidity(), target);
  }

  // optional uint32 accelerationPedalPositionValidity = 6;
  if (has_accelerationpedalpositionvalidity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->accelerationpedalpositionvalidity(), target);
  }

  // optional .LocationOffsetInfo locationOffsetInfo = 7;
  if (has_locationoffsetinfo()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->locationoffsetinfo_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:VehicleInfoExtendMessage)
  return target;
}

int VehicleInfoExtendMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:VehicleInfoExtendMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 127u) {
    // optional uint32 rechargeMileage = 1;
    if (has_rechargemileage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->rechargemileage());
    }

    // optional uint32 vehicleDirection = 2;
    if (has_vehicledirection()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->vehicledirection());
    }

    // optional uint32 brakePedalPosition = 3;
    if (has_brakepedalposition()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->brakepedalposition());
    }

    // optional uint32 brakePedalStatusValidity = 4;
    if (has_brakepedalstatusvalidity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->brakepedalstatusvalidity());
    }

    // optional uint32 brakePedalPositionValidity = 5;
    if (has_brakepedalpositionvalidity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->brakepedalpositionvalidity());
    }

    // optional uint32 accelerationPedalPositionValidity = 6;
    if (has_accelerationpedalpositionvalidity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->accelerationpedalpositionvalidity());
    }

    // optional .LocationOffsetInfo locationOffsetInfo = 7;
    if (has_locationoffsetinfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->locationoffsetinfo_);
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

void VehicleInfoExtendMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:VehicleInfoExtendMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const VehicleInfoExtendMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const VehicleInfoExtendMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:VehicleInfoExtendMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:VehicleInfoExtendMessage)
    MergeFrom(*source);
  }
}

void VehicleInfoExtendMessage::MergeFrom(const VehicleInfoExtendMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:VehicleInfoExtendMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_rechargemileage()) {
      set_rechargemileage(from.rechargemileage());
    }
    if (from.has_vehicledirection()) {
      set_vehicledirection(from.vehicledirection());
    }
    if (from.has_brakepedalposition()) {
      set_brakepedalposition(from.brakepedalposition());
    }
    if (from.has_brakepedalstatusvalidity()) {
      set_brakepedalstatusvalidity(from.brakepedalstatusvalidity());
    }
    if (from.has_brakepedalpositionvalidity()) {
      set_brakepedalpositionvalidity(from.brakepedalpositionvalidity());
    }
    if (from.has_accelerationpedalpositionvalidity()) {
      set_accelerationpedalpositionvalidity(from.accelerationpedalpositionvalidity());
    }
    if (from.has_locationoffsetinfo()) {
      mutable_locationoffsetinfo()->::LocationOffsetInfo::MergeFrom(from.locationoffsetinfo());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void VehicleInfoExtendMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:VehicleInfoExtendMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleInfoExtendMessage::CopyFrom(const VehicleInfoExtendMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:VehicleInfoExtendMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleInfoExtendMessage::IsInitialized() const {

  if (has_locationoffsetinfo()) {
    if (!this->locationoffsetinfo_->IsInitialized()) return false;
  }
  return true;
}

void VehicleInfoExtendMessage::Swap(VehicleInfoExtendMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VehicleInfoExtendMessage::InternalSwap(VehicleInfoExtendMessage* other) {
  std::swap(rechargemileage_, other->rechargemileage_);
  std::swap(vehicledirection_, other->vehicledirection_);
  std::swap(brakepedalposition_, other->brakepedalposition_);
  std::swap(brakepedalstatusvalidity_, other->brakepedalstatusvalidity_);
  std::swap(brakepedalpositionvalidity_, other->brakepedalpositionvalidity_);
  std::swap(accelerationpedalpositionvalidity_, other->accelerationpedalpositionvalidity_);
  std::swap(locationoffsetinfo_, other->locationoffsetinfo_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VehicleInfoExtendMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = VehicleInfoExtendMessage_descriptor_;
  metadata.reflection = VehicleInfoExtendMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleInfoExtendMessage

// optional uint32 rechargeMileage = 1;
bool VehicleInfoExtendMessage::has_rechargemileage() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void VehicleInfoExtendMessage::set_has_rechargemileage() {
  _has_bits_[0] |= 0x00000001u;
}
void VehicleInfoExtendMessage::clear_has_rechargemileage() {
  _has_bits_[0] &= ~0x00000001u;
}
void VehicleInfoExtendMessage::clear_rechargemileage() {
  rechargemileage_ = 0u;
  clear_has_rechargemileage();
}
 ::google::protobuf::uint32 VehicleInfoExtendMessage::rechargemileage() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.rechargeMileage)
  return rechargemileage_;
}
 void VehicleInfoExtendMessage::set_rechargemileage(::google::protobuf::uint32 value) {
  set_has_rechargemileage();
  rechargemileage_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.rechargeMileage)
}

// optional uint32 vehicleDirection = 2;
bool VehicleInfoExtendMessage::has_vehicledirection() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void VehicleInfoExtendMessage::set_has_vehicledirection() {
  _has_bits_[0] |= 0x00000002u;
}
void VehicleInfoExtendMessage::clear_has_vehicledirection() {
  _has_bits_[0] &= ~0x00000002u;
}
void VehicleInfoExtendMessage::clear_vehicledirection() {
  vehicledirection_ = 0u;
  clear_has_vehicledirection();
}
 ::google::protobuf::uint32 VehicleInfoExtendMessage::vehicledirection() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.vehicleDirection)
  return vehicledirection_;
}
 void VehicleInfoExtendMessage::set_vehicledirection(::google::protobuf::uint32 value) {
  set_has_vehicledirection();
  vehicledirection_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.vehicleDirection)
}

// optional uint32 brakePedalPosition = 3;
bool VehicleInfoExtendMessage::has_brakepedalposition() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void VehicleInfoExtendMessage::set_has_brakepedalposition() {
  _has_bits_[0] |= 0x00000004u;
}
void VehicleInfoExtendMessage::clear_has_brakepedalposition() {
  _has_bits_[0] &= ~0x00000004u;
}
void VehicleInfoExtendMessage::clear_brakepedalposition() {
  brakepedalposition_ = 0u;
  clear_has_brakepedalposition();
}
 ::google::protobuf::uint32 VehicleInfoExtendMessage::brakepedalposition() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.brakePedalPosition)
  return brakepedalposition_;
}
 void VehicleInfoExtendMessage::set_brakepedalposition(::google::protobuf::uint32 value) {
  set_has_brakepedalposition();
  brakepedalposition_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.brakePedalPosition)
}

// optional uint32 brakePedalStatusValidity = 4;
bool VehicleInfoExtendMessage::has_brakepedalstatusvalidity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void VehicleInfoExtendMessage::set_has_brakepedalstatusvalidity() {
  _has_bits_[0] |= 0x00000008u;
}
void VehicleInfoExtendMessage::clear_has_brakepedalstatusvalidity() {
  _has_bits_[0] &= ~0x00000008u;
}
void VehicleInfoExtendMessage::clear_brakepedalstatusvalidity() {
  brakepedalstatusvalidity_ = 0u;
  clear_has_brakepedalstatusvalidity();
}
 ::google::protobuf::uint32 VehicleInfoExtendMessage::brakepedalstatusvalidity() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.brakePedalStatusValidity)
  return brakepedalstatusvalidity_;
}
 void VehicleInfoExtendMessage::set_brakepedalstatusvalidity(::google::protobuf::uint32 value) {
  set_has_brakepedalstatusvalidity();
  brakepedalstatusvalidity_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.brakePedalStatusValidity)
}

// optional uint32 brakePedalPositionValidity = 5;
bool VehicleInfoExtendMessage::has_brakepedalpositionvalidity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void VehicleInfoExtendMessage::set_has_brakepedalpositionvalidity() {
  _has_bits_[0] |= 0x00000010u;
}
void VehicleInfoExtendMessage::clear_has_brakepedalpositionvalidity() {
  _has_bits_[0] &= ~0x00000010u;
}
void VehicleInfoExtendMessage::clear_brakepedalpositionvalidity() {
  brakepedalpositionvalidity_ = 0u;
  clear_has_brakepedalpositionvalidity();
}
 ::google::protobuf::uint32 VehicleInfoExtendMessage::brakepedalpositionvalidity() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.brakePedalPositionValidity)
  return brakepedalpositionvalidity_;
}
 void VehicleInfoExtendMessage::set_brakepedalpositionvalidity(::google::protobuf::uint32 value) {
  set_has_brakepedalpositionvalidity();
  brakepedalpositionvalidity_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.brakePedalPositionValidity)
}

// optional uint32 accelerationPedalPositionValidity = 6;
bool VehicleInfoExtendMessage::has_accelerationpedalpositionvalidity() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void VehicleInfoExtendMessage::set_has_accelerationpedalpositionvalidity() {
  _has_bits_[0] |= 0x00000020u;
}
void VehicleInfoExtendMessage::clear_has_accelerationpedalpositionvalidity() {
  _has_bits_[0] &= ~0x00000020u;
}
void VehicleInfoExtendMessage::clear_accelerationpedalpositionvalidity() {
  accelerationpedalpositionvalidity_ = 0u;
  clear_has_accelerationpedalpositionvalidity();
}
 ::google::protobuf::uint32 VehicleInfoExtendMessage::accelerationpedalpositionvalidity() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.accelerationPedalPositionValidity)
  return accelerationpedalpositionvalidity_;
}
 void VehicleInfoExtendMessage::set_accelerationpedalpositionvalidity(::google::protobuf::uint32 value) {
  set_has_accelerationpedalpositionvalidity();
  accelerationpedalpositionvalidity_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.accelerationPedalPositionValidity)
}

// optional .LocationOffsetInfo locationOffsetInfo = 7;
bool VehicleInfoExtendMessage::has_locationoffsetinfo() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void VehicleInfoExtendMessage::set_has_locationoffsetinfo() {
  _has_bits_[0] |= 0x00000040u;
}
void VehicleInfoExtendMessage::clear_has_locationoffsetinfo() {
  _has_bits_[0] &= ~0x00000040u;
}
void VehicleInfoExtendMessage::clear_locationoffsetinfo() {
  if (locationoffsetinfo_ != NULL) locationoffsetinfo_->::LocationOffsetInfo::Clear();
  clear_has_locationoffsetinfo();
}
const ::LocationOffsetInfo& VehicleInfoExtendMessage::locationoffsetinfo() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.locationOffsetInfo)
  return locationoffsetinfo_ != NULL ? *locationoffsetinfo_ : *default_instance_->locationoffsetinfo_;
}
::LocationOffsetInfo* VehicleInfoExtendMessage::mutable_locationoffsetinfo() {
  set_has_locationoffsetinfo();
  if (locationoffsetinfo_ == NULL) {
    locationoffsetinfo_ = new ::LocationOffsetInfo;
  }
  // @@protoc_insertion_point(field_mutable:VehicleInfoExtendMessage.locationOffsetInfo)
  return locationoffsetinfo_;
}
::LocationOffsetInfo* VehicleInfoExtendMessage::release_locationoffsetinfo() {
  // @@protoc_insertion_point(field_release:VehicleInfoExtendMessage.locationOffsetInfo)
  clear_has_locationoffsetinfo();
  ::LocationOffsetInfo* temp = locationoffsetinfo_;
  locationoffsetinfo_ = NULL;
  return temp;
}
void VehicleInfoExtendMessage::set_allocated_locationoffsetinfo(::LocationOffsetInfo* locationoffsetinfo) {
  delete locationoffsetinfo_;
  locationoffsetinfo_ = locationoffsetinfo;
  if (locationoffsetinfo) {
    set_has_locationoffsetinfo();
  } else {
    clear_has_locationoffsetinfo();
  }
  // @@protoc_insertion_point(field_set_allocated:VehicleInfoExtendMessage.locationOffsetInfo)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)