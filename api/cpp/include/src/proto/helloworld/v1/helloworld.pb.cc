// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: src/proto/helloworld/v1/helloworld.proto

#include "src/proto/helloworld/v1/helloworld.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace helloworld {
namespace v1 {
PROTOBUF_CONSTEXPR SayHelloRequest::SayHelloRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SayHelloRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SayHelloRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SayHelloRequestDefaultTypeInternal() {}
  union {
    SayHelloRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SayHelloRequestDefaultTypeInternal _SayHelloRequest_default_instance_;
PROTOBUF_CONSTEXPR SayHelloResponse::SayHelloResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.message_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SayHelloResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SayHelloResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SayHelloResponseDefaultTypeInternal() {}
  union {
    SayHelloResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SayHelloResponseDefaultTypeInternal _SayHelloResponse_default_instance_;
}  // namespace v1
}  // namespace helloworld
static ::_pb::Metadata file_level_metadata_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto = nullptr;

const uint32_t TableStruct_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::helloworld::v1::SayHelloRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::helloworld::v1::SayHelloRequest, _impl_.name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::helloworld::v1::SayHelloResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::helloworld::v1::SayHelloResponse, _impl_.message_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::helloworld::v1::SayHelloRequest)},
  { 7, -1, -1, sizeof(::helloworld::v1::SayHelloResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::helloworld::v1::_SayHelloRequest_default_instance_._instance,
  &::helloworld::v1::_SayHelloResponse_default_instance_._instance,
};

const char descriptor_table_protodef_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(src/proto/helloworld/v1/helloworld.pro"
  "to\022\rhelloworld.v1\"%\n\017SayHelloRequest\022\022\n\004"
  "name\030\001 \001(\tR\004name\",\n\020SayHelloResponse\022\030\n\007"
  "message\030\001 \001(\tR\007message2X\n\007Greeter\022M\n\010Say"
  "Hello\022\036.helloworld.v1.SayHelloRequest\032\037."
  "helloworld.v1.SayHelloResponse\"\000B\275\001\n\021com"
  ".helloworld.v1B\017HelloworldProtoP\001ZBgithu"
  "b.com/tsingson/grpc-demo/src/proto/hello"
  "world/v1;helloworldv1\242\002\003HXX\252\002\rHelloworld"
  ".V1\312\002\rHelloworld\\V1\342\002\031Helloworld\\V1\\GPBM"
  "etadata\352\002\016Helloworld::V1b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto = {
    false, false, 432, descriptor_table_protodef_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto,
    "src/proto/helloworld/v1/helloworld.proto",
    &descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto::offsets,
    file_level_metadata_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto, file_level_enum_descriptors_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto,
    file_level_service_descriptors_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_getter() {
  return &descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto(&descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto);
namespace helloworld {
namespace v1 {

// ===================================================================

class SayHelloRequest::_Internal {
 public:
};

SayHelloRequest::SayHelloRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:helloworld.v1.SayHelloRequest)
}
SayHelloRequest::SayHelloRequest(const SayHelloRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SayHelloRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:helloworld.v1.SayHelloRequest)
}

inline void SayHelloRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SayHelloRequest::~SayHelloRequest() {
  // @@protoc_insertion_point(destructor:helloworld.v1.SayHelloRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SayHelloRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
}

void SayHelloRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SayHelloRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.v1.SayHelloRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SayHelloRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1 [json_name = "name"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "helloworld.v1.SayHelloRequest.name"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SayHelloRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.v1.SayHelloRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "helloworld.v1.SayHelloRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:helloworld.v1.SayHelloRequest)
  return target;
}

size_t SayHelloRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.v1.SayHelloRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SayHelloRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SayHelloRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SayHelloRequest::GetClassData() const { return &_class_data_; }


void SayHelloRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SayHelloRequest*>(&to_msg);
  auto& from = static_cast<const SayHelloRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:helloworld.v1.SayHelloRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SayHelloRequest::CopyFrom(const SayHelloRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.v1.SayHelloRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SayHelloRequest::IsInitialized() const {
  return true;
}

void SayHelloRequest::InternalSwap(SayHelloRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SayHelloRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_getter, &descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_once,
      file_level_metadata_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto[0]);
}

// ===================================================================

class SayHelloResponse::_Internal {
 public:
};

SayHelloResponse::SayHelloResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:helloworld.v1.SayHelloResponse)
}
SayHelloResponse::SayHelloResponse(const SayHelloResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SayHelloResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_message().empty()) {
    _this->_impl_.message_.Set(from._internal_message(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:helloworld.v1.SayHelloResponse)
}

inline void SayHelloResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SayHelloResponse::~SayHelloResponse() {
  // @@protoc_insertion_point(destructor:helloworld.v1.SayHelloResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SayHelloResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
}

void SayHelloResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SayHelloResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.v1.SayHelloResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SayHelloResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1 [json_name = "message"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "helloworld.v1.SayHelloResponse.message"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SayHelloResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.v1.SayHelloResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1 [json_name = "message"];
  if (!this->_internal_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "helloworld.v1.SayHelloResponse.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:helloworld.v1.SayHelloResponse)
  return target;
}

size_t SayHelloResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.v1.SayHelloResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1 [json_name = "message"];
  if (!this->_internal_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SayHelloResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SayHelloResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SayHelloResponse::GetClassData() const { return &_class_data_; }


void SayHelloResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SayHelloResponse*>(&to_msg);
  auto& from = static_cast<const SayHelloResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:helloworld.v1.SayHelloResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SayHelloResponse::CopyFrom(const SayHelloResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.v1.SayHelloResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SayHelloResponse::IsInitialized() const {
  return true;
}

void SayHelloResponse::InternalSwap(SayHelloResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.message_, lhs_arena,
      &other->_impl_.message_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SayHelloResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_getter, &descriptor_table_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto_once,
      file_level_metadata_src_2fproto_2fhelloworld_2fv1_2fhelloworld_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace helloworld
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::helloworld::v1::SayHelloRequest*
Arena::CreateMaybeMessage< ::helloworld::v1::SayHelloRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::helloworld::v1::SayHelloRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::helloworld::v1::SayHelloResponse*
Arena::CreateMaybeMessage< ::helloworld::v1::SayHelloResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::helloworld::v1::SayHelloResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>