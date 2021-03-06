// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "messages.pb.h"

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

namespace Messages {

namespace {

const ::google::protobuf::Descriptor* InitRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InitRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* InitReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InitReply_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_messages_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_messages_2eproto() {
  protobuf_AddDesc_messages_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "messages.proto");
  GOOGLE_CHECK(file != NULL);
  InitRequest_descriptor_ = file->message_type(0);
  static const int InitRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitRequest, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitRequest, pid_),
  };
  InitRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InitRequest_descriptor_,
      InitRequest::internal_default_instance(),
      InitRequest_offsets_,
      -1,
      -1,
      -1,
      sizeof(InitRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitRequest, _internal_metadata_));
  InitReply_descriptor_ = file->message_type(1);
  static const int InitReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitReply, status_),
  };
  InitReply_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InitReply_descriptor_,
      InitReply::internal_default_instance(),
      InitReply_offsets_,
      -1,
      -1,
      -1,
      sizeof(InitReply),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitReply, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_messages_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InitRequest_descriptor_, InitRequest::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InitReply_descriptor_, InitReply::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_messages_2eproto() {
  InitRequest_default_instance_.Shutdown();
  delete InitRequest_reflection_;
  InitReply_default_instance_.Shutdown();
  delete InitReply_reflection_;
}

void protobuf_InitDefaults_messages_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  InitRequest_default_instance_.DefaultConstruct();
  InitReply_default_instance_.DefaultConstruct();
  InitRequest_default_instance_.get_mutable()->InitAsDefaultInstance();
  InitReply_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_messages_2eproto_once_);
void protobuf_InitDefaults_messages_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_messages_2eproto_once_,
                 &protobuf_InitDefaults_messages_2eproto_impl);
}
void protobuf_AddDesc_messages_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_messages_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016messages.proto\022\010Messages\"(\n\013InitReques"
    "t\022\014\n\004name\030\001 \001(\t\022\013\n\003pid\030\002 \001(\r\"\033\n\tInitRepl"
    "y\022\016\n\006status\030\001 \001(\0102;\n\003IPC\0224\n\004Init\022\025.Messa"
    "ges.InitRequest\032\023.Messages.InitReply\"\000b\006"
    "proto3", 166);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "messages.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_messages_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_messages_2eproto_once_);
void protobuf_AddDesc_messages_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_messages_2eproto_once_,
                 &protobuf_AddDesc_messages_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_messages_2eproto {
  StaticDescriptorInitializer_messages_2eproto() {
    protobuf_AddDesc_messages_2eproto();
  }
} static_descriptor_initializer_messages_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InitRequest::kNameFieldNumber;
const int InitRequest::kPidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InitRequest::InitRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_messages_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Messages.InitRequest)
}

void InitRequest::InitAsDefaultInstance() {
}

InitRequest::InitRequest(const InitRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Messages.InitRequest)
}

void InitRequest::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pid_ = 0u;
  _cached_size_ = 0;
}

InitRequest::~InitRequest() {
  // @@protoc_insertion_point(destructor:Messages.InitRequest)
  SharedDtor();
}

void InitRequest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void InitRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InitRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InitRequest_descriptor_;
}

const InitRequest& InitRequest::default_instance() {
  protobuf_InitDefaults_messages_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<InitRequest> InitRequest_default_instance_;

InitRequest* InitRequest::New(::google::protobuf::Arena* arena) const {
  InitRequest* n = new InitRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InitRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:Messages.InitRequest)
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  pid_ = 0u;
}

bool InitRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Messages.InitRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Messages.InitRequest.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_pid;
        break;
      }

      // optional uint32 pid = 2;
      case 2: {
        if (tag == 16) {
         parse_pid:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pid_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Messages.InitRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Messages.InitRequest)
  return false;
#undef DO_
}

void InitRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Messages.InitRequest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Messages.InitRequest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional uint32 pid = 2;
  if (this->pid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->pid(), output);
  }

  // @@protoc_insertion_point(serialize_end:Messages.InitRequest)
}

::google::protobuf::uint8* InitRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Messages.InitRequest)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Messages.InitRequest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional uint32 pid = 2;
  if (this->pid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->pid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Messages.InitRequest)
  return target;
}

size_t InitRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Messages.InitRequest)
  size_t total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional uint32 pid = 2;
  if (this->pid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->pid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InitRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Messages.InitRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const InitRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const InitRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Messages.InitRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Messages.InitRequest)
    UnsafeMergeFrom(*source);
  }
}

void InitRequest::MergeFrom(const InitRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Messages.InitRequest)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void InitRequest::UnsafeMergeFrom(const InitRequest& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.pid() != 0) {
    set_pid(from.pid());
  }
}

void InitRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Messages.InitRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InitRequest::CopyFrom(const InitRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Messages.InitRequest)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool InitRequest::IsInitialized() const {

  return true;
}

void InitRequest::Swap(InitRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InitRequest::InternalSwap(InitRequest* other) {
  name_.Swap(&other->name_);
  std::swap(pid_, other->pid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InitRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InitRequest_descriptor_;
  metadata.reflection = InitRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InitRequest

// optional string name = 1;
void InitRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& InitRequest::name() const {
  // @@protoc_insertion_point(field_get:Messages.InitRequest.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void InitRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Messages.InitRequest.name)
}
void InitRequest::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Messages.InitRequest.name)
}
void InitRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Messages.InitRequest.name)
}
::std::string* InitRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Messages.InitRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* InitRequest::release_name() {
  // @@protoc_insertion_point(field_release:Messages.InitRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void InitRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Messages.InitRequest.name)
}

// optional uint32 pid = 2;
void InitRequest::clear_pid() {
  pid_ = 0u;
}
::google::protobuf::uint32 InitRequest::pid() const {
  // @@protoc_insertion_point(field_get:Messages.InitRequest.pid)
  return pid_;
}
void InitRequest::set_pid(::google::protobuf::uint32 value) {
  
  pid_ = value;
  // @@protoc_insertion_point(field_set:Messages.InitRequest.pid)
}

inline const InitRequest* InitRequest::internal_default_instance() {
  return &InitRequest_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InitReply::kStatusFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InitReply::InitReply()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_messages_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Messages.InitReply)
}

void InitReply::InitAsDefaultInstance() {
}

InitReply::InitReply(const InitReply& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Messages.InitReply)
}

void InitReply::SharedCtor() {
  status_ = false;
  _cached_size_ = 0;
}

InitReply::~InitReply() {
  // @@protoc_insertion_point(destructor:Messages.InitReply)
  SharedDtor();
}

void InitReply::SharedDtor() {
}

void InitReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InitReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InitReply_descriptor_;
}

const InitReply& InitReply::default_instance() {
  protobuf_InitDefaults_messages_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<InitReply> InitReply_default_instance_;

InitReply* InitReply::New(::google::protobuf::Arena* arena) const {
  InitReply* n = new InitReply;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InitReply::Clear() {
// @@protoc_insertion_point(message_clear_start:Messages.InitReply)
  status_ = false;
}

bool InitReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Messages.InitReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool status = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &status_)));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Messages.InitReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Messages.InitReply)
  return false;
#undef DO_
}

void InitReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Messages.InitReply)
  // optional bool status = 1;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->status(), output);
  }

  // @@protoc_insertion_point(serialize_end:Messages.InitReply)
}

::google::protobuf::uint8* InitReply::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Messages.InitReply)
  // optional bool status = 1;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->status(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Messages.InitReply)
  return target;
}

size_t InitReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Messages.InitReply)
  size_t total_size = 0;

  // optional bool status = 1;
  if (this->status() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InitReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Messages.InitReply)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const InitReply* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const InitReply>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Messages.InitReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Messages.InitReply)
    UnsafeMergeFrom(*source);
  }
}

void InitReply::MergeFrom(const InitReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Messages.InitReply)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void InitReply::UnsafeMergeFrom(const InitReply& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.status() != 0) {
    set_status(from.status());
  }
}

void InitReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Messages.InitReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InitReply::CopyFrom(const InitReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Messages.InitReply)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool InitReply::IsInitialized() const {

  return true;
}

void InitReply::Swap(InitReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InitReply::InternalSwap(InitReply* other) {
  std::swap(status_, other->status_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InitReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InitReply_descriptor_;
  metadata.reflection = InitReply_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InitReply

// optional bool status = 1;
void InitReply::clear_status() {
  status_ = false;
}
bool InitReply::status() const {
  // @@protoc_insertion_point(field_get:Messages.InitReply.status)
  return status_;
}
void InitReply::set_status(bool value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:Messages.InitReply.status)
}

inline const InitReply* InitReply::internal_default_instance() {
  return &InitReply_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages

// @@protoc_insertion_point(global_scope)
