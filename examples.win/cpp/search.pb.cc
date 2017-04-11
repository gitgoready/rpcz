// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: search.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "search.pb.h"

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

namespace examples {

namespace {

const ::google::protobuf::Descriptor* SearchRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SearchRequest_reflection_ = NULL;
struct SearchRequestOneofInstance {
  ::google::protobuf::int32 page_number_;
}* SearchRequest_default_oneof_instance_ = NULL;
const ::google::protobuf::Descriptor* SearchResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SearchResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_search_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_search_2eproto() {
  protobuf_AddDesc_search_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "search.proto");
  GOOGLE_CHECK(file != NULL);
  SearchRequest_descriptor_ = file->message_type(0);
  static const int SearchRequest_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, query_),
    PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET(SearchRequest_default_oneof_instance_, page_number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, page_number_present_),
  };
  SearchRequest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SearchRequest_descriptor_,
      SearchRequest::internal_default_instance(),
      SearchRequest_offsets_,
      -1,
      -1,
      -1,
      SearchRequest_default_oneof_instance_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, _oneof_case_[0]),
      sizeof(SearchRequest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchRequest, _internal_metadata_));
  SearchResponse_descriptor_ = file->message_type(1);
  static const int SearchResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchResponse, results_),
  };
  SearchResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SearchResponse_descriptor_,
      SearchResponse::internal_default_instance(),
      SearchResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(SearchResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SearchResponse, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_search_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SearchRequest_descriptor_, SearchRequest::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SearchResponse_descriptor_, SearchResponse::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_search_2eproto() {
  SearchRequest_default_instance_.Shutdown();
  delete SearchRequest_default_oneof_instance_;
  delete SearchRequest_reflection_;
  SearchResponse_default_instance_.Shutdown();
  delete SearchResponse_reflection_;
}

void protobuf_InitDefaults_search_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  SearchRequest_default_instance_.DefaultConstruct();
  SearchRequest_default_oneof_instance_ = new SearchRequestOneofInstance();
  ::google::protobuf::internal::GetEmptyString();
  SearchResponse_default_instance_.DefaultConstruct();
  SearchRequest_default_instance_.get_mutable()->InitAsDefaultInstance();
  SearchResponse_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_search_2eproto_once_);
void protobuf_InitDefaults_search_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_search_2eproto_once_,
                 &protobuf_InitDefaults_search_2eproto_impl);
}
void protobuf_AddDesc_search_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_search_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014search.proto\022\010examples\"]\n\rSearchReques"
    "t\022\r\n\005query\030\001 \001(\t\022\025\n\013page_number\030\002 \001(\005H\000\022"
    "\017\n\007version\030\003 \001(\rB\025\n\023page_number_present\""
    "!\n\016SearchResponse\022\017\n\007results\030\001 \003(\t2L\n\rSe"
    "archService\022;\n\006Search\022\027.examples.SearchR"
    "equest\032\030.examples.SearchResponseb\006proto3", 240);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "search.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_search_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_search_2eproto_once_);
void protobuf_AddDesc_search_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_search_2eproto_once_,
                 &protobuf_AddDesc_search_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_search_2eproto {
  StaticDescriptorInitializer_search_2eproto() {
    protobuf_AddDesc_search_2eproto();
  }
} static_descriptor_initializer_search_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SearchRequest::kQueryFieldNumber;
const int SearchRequest::kPageNumberFieldNumber;
const int SearchRequest::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SearchRequest::SearchRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_search_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:examples.SearchRequest)
}

void SearchRequest::InitAsDefaultInstance() {
  SearchRequest_default_oneof_instance_->page_number_ = 0;
}

SearchRequest::SearchRequest(const SearchRequest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:examples.SearchRequest)
}

void SearchRequest::SharedCtor() {
  query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
  clear_has_page_number_present();
  _cached_size_ = 0;
}

SearchRequest::~SearchRequest() {
  // @@protoc_insertion_point(destructor:examples.SearchRequest)
  SharedDtor();
}

void SearchRequest::SharedDtor() {
  query_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (has_page_number_present()) {
    clear_page_number_present();
  }
}

void SearchRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SearchRequest_descriptor_;
}

const SearchRequest& SearchRequest::default_instance() {
  protobuf_InitDefaults_search_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<SearchRequest> SearchRequest_default_instance_;

SearchRequest* SearchRequest::New(::google::protobuf::Arena* arena) const {
  SearchRequest* n = new SearchRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SearchRequest::clear_page_number_present() {
// @@protoc_insertion_point(one_of_clear_start:examples.SearchRequest)
  switch (page_number_present_case()) {
    case kPageNumber: {
      // No need to clear
      break;
    }
    case PAGE_NUMBER_PRESENT_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = PAGE_NUMBER_PRESENT_NOT_SET;
}


void SearchRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:examples.SearchRequest)
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_ = 0u;
  clear_page_number_present();
}

bool SearchRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:examples.SearchRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string query = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_query()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->query().data(), this->query().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "examples.SearchRequest.query"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_page_number;
        break;
      }

      // optional int32 page_number = 2;
      case 2: {
        if (tag == 16) {
         parse_page_number:
          clear_page_number_present();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &page_number_present_.page_number_)));
          set_has_page_number();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_version;
        break;
      }

      // optional uint32 version = 3;
      case 3: {
        if (tag == 24) {
         parse_version:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
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
  // @@protoc_insertion_point(parse_success:examples.SearchRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:examples.SearchRequest)
  return false;
#undef DO_
}

void SearchRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:examples.SearchRequest)
  // optional string query = 1;
  if (this->query().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "examples.SearchRequest.query");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->query(), output);
  }

  // optional int32 page_number = 2;
  if (has_page_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->page_number(), output);
  }

  // optional uint32 version = 3;
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->version(), output);
  }

  // @@protoc_insertion_point(serialize_end:examples.SearchRequest)
}

::google::protobuf::uint8* SearchRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:examples.SearchRequest)
  // optional string query = 1;
  if (this->query().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->query().data(), this->query().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "examples.SearchRequest.query");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->query(), target);
  }

  // optional int32 page_number = 2;
  if (has_page_number()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->page_number(), target);
  }

  // optional uint32 version = 3;
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->version(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:examples.SearchRequest)
  return target;
}

size_t SearchRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:examples.SearchRequest)
  size_t total_size = 0;

  // optional string query = 1;
  if (this->query().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->query());
  }

  // optional uint32 version = 3;
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->version());
  }

  switch (page_number_present_case()) {
    // optional int32 page_number = 2;
    case kPageNumber: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->page_number());
      break;
    }
    case PAGE_NUMBER_PRESENT_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:examples.SearchRequest)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SearchRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SearchRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:examples.SearchRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:examples.SearchRequest)
    UnsafeMergeFrom(*source);
  }
}

void SearchRequest::MergeFrom(const SearchRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:examples.SearchRequest)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void SearchRequest::UnsafeMergeFrom(const SearchRequest& from) {
  GOOGLE_DCHECK(&from != this);
  switch (from.page_number_present_case()) {
    case kPageNumber: {
      set_page_number(from.page_number());
      break;
    }
    case PAGE_NUMBER_PRESENT_NOT_SET: {
      break;
    }
  }
  if (from.query().size() > 0) {

    query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.query_);
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void SearchRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:examples.SearchRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchRequest::CopyFrom(const SearchRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:examples.SearchRequest)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool SearchRequest::IsInitialized() const {

  return true;
}

void SearchRequest::Swap(SearchRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SearchRequest::InternalSwap(SearchRequest* other) {
  query_.Swap(&other->query_);
  std::swap(version_, other->version_);
  std::swap(page_number_present_, other->page_number_present_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SearchRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SearchRequest_descriptor_;
  metadata.reflection = SearchRequest_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SearchRequest

// optional string query = 1;
void SearchRequest::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& SearchRequest::query() const {
  // @@protoc_insertion_point(field_get:examples.SearchRequest.query)
  return query_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SearchRequest::set_query(const ::std::string& value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:examples.SearchRequest.query)
}
void SearchRequest::set_query(const char* value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:examples.SearchRequest.query)
}
void SearchRequest::set_query(const char* value, size_t size) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:examples.SearchRequest.query)
}
::std::string* SearchRequest::mutable_query() {
  
  // @@protoc_insertion_point(field_mutable:examples.SearchRequest.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SearchRequest::release_query() {
  // @@protoc_insertion_point(field_release:examples.SearchRequest.query)
  
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SearchRequest::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    
  } else {
    
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:examples.SearchRequest.query)
}

// optional int32 page_number = 2;
bool SearchRequest::has_page_number() const {
  return page_number_present_case() == kPageNumber;
}
void SearchRequest::set_has_page_number() {
  _oneof_case_[0] = kPageNumber;
}
void SearchRequest::clear_page_number() {
  if (has_page_number()) {
    page_number_present_.page_number_ = 0;
    clear_has_page_number_present();
  }
}
::google::protobuf::int32 SearchRequest::page_number() const {
  // @@protoc_insertion_point(field_get:examples.SearchRequest.page_number)
  if (has_page_number()) {
    return page_number_present_.page_number_;
  }
  return 0;
}
void SearchRequest::set_page_number(::google::protobuf::int32 value) {
  if (!has_page_number()) {
    clear_page_number_present();
    set_has_page_number();
  }
  page_number_present_.page_number_ = value;
  // @@protoc_insertion_point(field_set:examples.SearchRequest.page_number)
}

// optional uint32 version = 3;
void SearchRequest::clear_version() {
  version_ = 0u;
}
::google::protobuf::uint32 SearchRequest::version() const {
  // @@protoc_insertion_point(field_get:examples.SearchRequest.version)
  return version_;
}
void SearchRequest::set_version(::google::protobuf::uint32 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:examples.SearchRequest.version)
}

bool SearchRequest::has_page_number_present() const {
  return page_number_present_case() != PAGE_NUMBER_PRESENT_NOT_SET;
}
void SearchRequest::clear_has_page_number_present() {
  _oneof_case_[0] = PAGE_NUMBER_PRESENT_NOT_SET;
}
SearchRequest::PageNumberPresentCase SearchRequest::page_number_present_case() const {
  return SearchRequest::PageNumberPresentCase(_oneof_case_[0]);
}
inline const SearchRequest* SearchRequest::internal_default_instance() {
  return &SearchRequest_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SearchResponse::kResultsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SearchResponse::SearchResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_search_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:examples.SearchResponse)
}

void SearchResponse::InitAsDefaultInstance() {
}

SearchResponse::SearchResponse(const SearchResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:examples.SearchResponse)
}

void SearchResponse::SharedCtor() {
  _cached_size_ = 0;
}

SearchResponse::~SearchResponse() {
  // @@protoc_insertion_point(destructor:examples.SearchResponse)
  SharedDtor();
}

void SearchResponse::SharedDtor() {
}

void SearchResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SearchResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SearchResponse_descriptor_;
}

const SearchResponse& SearchResponse::default_instance() {
  protobuf_InitDefaults_search_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<SearchResponse> SearchResponse_default_instance_;

SearchResponse* SearchResponse::New(::google::protobuf::Arena* arena) const {
  SearchResponse* n = new SearchResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SearchResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:examples.SearchResponse)
  results_.Clear();
}

bool SearchResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:examples.SearchResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string results = 1;
      case 1: {
        if (tag == 10) {
         parse_results:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_results()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->results(this->results_size() - 1).data(),
            this->results(this->results_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "examples.SearchResponse.results"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_results;
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
  // @@protoc_insertion_point(parse_success:examples.SearchResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:examples.SearchResponse)
  return false;
#undef DO_
}

void SearchResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:examples.SearchResponse)
  // repeated string results = 1;
  for (int i = 0; i < this->results_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->results(i).data(), this->results(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "examples.SearchResponse.results");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->results(i), output);
  }

  // @@protoc_insertion_point(serialize_end:examples.SearchResponse)
}

::google::protobuf::uint8* SearchResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:examples.SearchResponse)
  // repeated string results = 1;
  for (int i = 0; i < this->results_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->results(i).data(), this->results(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "examples.SearchResponse.results");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->results(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:examples.SearchResponse)
  return target;
}

size_t SearchResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:examples.SearchResponse)
  size_t total_size = 0;

  // repeated string results = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->results_size());
  for (int i = 0; i < this->results_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->results(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:examples.SearchResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SearchResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SearchResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:examples.SearchResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:examples.SearchResponse)
    UnsafeMergeFrom(*source);
  }
}

void SearchResponse::MergeFrom(const SearchResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:examples.SearchResponse)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void SearchResponse::UnsafeMergeFrom(const SearchResponse& from) {
  GOOGLE_DCHECK(&from != this);
  results_.UnsafeMergeFrom(from.results_);
}

void SearchResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:examples.SearchResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SearchResponse::CopyFrom(const SearchResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:examples.SearchResponse)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool SearchResponse::IsInitialized() const {

  return true;
}

void SearchResponse::Swap(SearchResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SearchResponse::InternalSwap(SearchResponse* other) {
  results_.UnsafeArenaSwap(&other->results_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SearchResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SearchResponse_descriptor_;
  metadata.reflection = SearchResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SearchResponse

// repeated string results = 1;
int SearchResponse::results_size() const {
  return results_.size();
}
void SearchResponse::clear_results() {
  results_.Clear();
}
const ::std::string& SearchResponse::results(int index) const {
  // @@protoc_insertion_point(field_get:examples.SearchResponse.results)
  return results_.Get(index);
}
::std::string* SearchResponse::mutable_results(int index) {
  // @@protoc_insertion_point(field_mutable:examples.SearchResponse.results)
  return results_.Mutable(index);
}
void SearchResponse::set_results(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:examples.SearchResponse.results)
  results_.Mutable(index)->assign(value);
}
void SearchResponse::set_results(int index, const char* value) {
  results_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:examples.SearchResponse.results)
}
void SearchResponse::set_results(int index, const char* value, size_t size) {
  results_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:examples.SearchResponse.results)
}
::std::string* SearchResponse::add_results() {
  // @@protoc_insertion_point(field_add_mutable:examples.SearchResponse.results)
  return results_.Add();
}
void SearchResponse::add_results(const ::std::string& value) {
  results_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:examples.SearchResponse.results)
}
void SearchResponse::add_results(const char* value) {
  results_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:examples.SearchResponse.results)
}
void SearchResponse::add_results(const char* value, size_t size) {
  results_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:examples.SearchResponse.results)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
SearchResponse::results() const {
  // @@protoc_insertion_point(field_list:examples.SearchResponse.results)
  return results_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
SearchResponse::mutable_results() {
  // @@protoc_insertion_point(field_mutable_list:examples.SearchResponse.results)
  return &results_;
}

inline const SearchResponse* SearchResponse::internal_default_instance() {
  return &SearchResponse_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace examples

// @@protoc_insertion_point(global_scope)