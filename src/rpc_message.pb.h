// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_message.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_rpc_5fmessage_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_rpc_5fmessage_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_rpc_5fmessage_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_rpc_5fmessage_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_rpc_5fmessage_2eproto;
namespace protocol {
class RpcHeader;
struct RpcHeaderDefaultTypeInternal;
extern RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
}  // namespace protocol
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace protocol {

// ===================================================================


// -------------------------------------------------------------------

class RpcHeader final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.RpcHeader) */ {
 public:
  inline RpcHeader() : RpcHeader(nullptr) {}
  ~RpcHeader() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR RpcHeader(::google::protobuf::internal::ConstantInitialized);

  inline RpcHeader(const RpcHeader& from)
      : RpcHeader(nullptr, from) {}
  RpcHeader(RpcHeader&& from) noexcept
    : RpcHeader() {
    *this = ::std::move(from);
  }

  inline RpcHeader& operator=(const RpcHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline RpcHeader& operator=(RpcHeader&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const RpcHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const RpcHeader* internal_default_instance() {
    return reinterpret_cast<const RpcHeader*>(
               &_RpcHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RpcHeader& a, RpcHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(RpcHeader* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RpcHeader* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  RpcHeader* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<RpcHeader>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const RpcHeader& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const RpcHeader& from) {
    RpcHeader::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(RpcHeader* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "protocol.RpcHeader";
  }
  protected:
  explicit RpcHeader(::google::protobuf::Arena* arena);
  RpcHeader(::google::protobuf::Arena* arena, const RpcHeader& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServiceNameFieldNumber = 1,
    kMethodNameFieldNumber = 2,
    kArgsSizeFieldNumber = 3,
  };
  // optional bytes ServiceName = 1;
  bool has_servicename() const;
  void clear_servicename() ;
  const std::string& servicename() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_servicename(Arg_&& arg, Args_... args);
  std::string* mutable_servicename();
  PROTOBUF_NODISCARD std::string* release_servicename();
  void set_allocated_servicename(std::string* value);

  private:
  const std::string& _internal_servicename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_servicename(
      const std::string& value);
  std::string* _internal_mutable_servicename();

  public:
  // optional bytes MethodName = 2;
  bool has_methodname() const;
  void clear_methodname() ;
  const std::string& methodname() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_methodname(Arg_&& arg, Args_... args);
  std::string* mutable_methodname();
  PROTOBUF_NODISCARD std::string* release_methodname();
  void set_allocated_methodname(std::string* value);

  private:
  const std::string& _internal_methodname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_methodname(
      const std::string& value);
  std::string* _internal_mutable_methodname();

  public:
  // optional uint32 ArgsSize = 3;
  bool has_argssize() const;
  void clear_argssize() ;
  ::uint32_t argssize() const;
  void set_argssize(::uint32_t value);

  private:
  ::uint32_t _internal_argssize() const;
  void _internal_set_argssize(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:protocol.RpcHeader)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr servicename_;
    ::google::protobuf::internal::ArenaStringPtr methodname_;
    ::uint32_t argssize_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_rpc_5fmessage_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RpcHeader

// optional bytes ServiceName = 1;
inline bool RpcHeader::has_servicename() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void RpcHeader::clear_servicename() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.servicename_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& RpcHeader::servicename() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:protocol.RpcHeader.ServiceName)
  return _internal_servicename();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RpcHeader::set_servicename(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.servicename_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:protocol.RpcHeader.ServiceName)
}
inline std::string* RpcHeader::mutable_servicename() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_servicename();
  // @@protoc_insertion_point(field_mutable:protocol.RpcHeader.ServiceName)
  return _s;
}
inline const std::string& RpcHeader::_internal_servicename() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.servicename_.Get();
}
inline void RpcHeader::_internal_set_servicename(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.servicename_.Set(value, GetArena());
}
inline std::string* RpcHeader::_internal_mutable_servicename() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.servicename_.Mutable( GetArena());
}
inline std::string* RpcHeader::release_servicename() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:protocol.RpcHeader.ServiceName)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.servicename_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.servicename_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void RpcHeader::set_allocated_servicename(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.servicename_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.servicename_.IsDefault()) {
          _impl_.servicename_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:protocol.RpcHeader.ServiceName)
}

// optional bytes MethodName = 2;
inline bool RpcHeader::has_methodname() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void RpcHeader::clear_methodname() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.methodname_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& RpcHeader::methodname() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:protocol.RpcHeader.MethodName)
  return _internal_methodname();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void RpcHeader::set_methodname(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.methodname_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:protocol.RpcHeader.MethodName)
}
inline std::string* RpcHeader::mutable_methodname() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_methodname();
  // @@protoc_insertion_point(field_mutable:protocol.RpcHeader.MethodName)
  return _s;
}
inline const std::string& RpcHeader::_internal_methodname() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.methodname_.Get();
}
inline void RpcHeader::_internal_set_methodname(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.methodname_.Set(value, GetArena());
}
inline std::string* RpcHeader::_internal_mutable_methodname() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.methodname_.Mutable( GetArena());
}
inline std::string* RpcHeader::release_methodname() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:protocol.RpcHeader.MethodName)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.methodname_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.methodname_.Set("", GetArena());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void RpcHeader::set_allocated_methodname(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.methodname_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.methodname_.IsDefault()) {
          _impl_.methodname_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:protocol.RpcHeader.MethodName)
}

// optional uint32 ArgsSize = 3;
inline bool RpcHeader::has_argssize() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void RpcHeader::clear_argssize() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.argssize_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t RpcHeader::argssize() const {
  // @@protoc_insertion_point(field_get:protocol.RpcHeader.ArgsSize)
  return _internal_argssize();
}
inline void RpcHeader::set_argssize(::uint32_t value) {
  _internal_set_argssize(value);
  // @@protoc_insertion_point(field_set:protocol.RpcHeader.ArgsSize)
}
inline ::uint32_t RpcHeader::_internal_argssize() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.argssize_;
}
inline void RpcHeader::_internal_set_argssize(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.argssize_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_rpc_5fmessage_2eproto_2epb_2eh