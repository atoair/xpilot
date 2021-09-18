// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FastPositionUpdate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_FastPositionUpdate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_FastPositionUpdate_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_FastPositionUpdate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_FastPositionUpdate_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_FastPositionUpdate_2eproto;
namespace xpilot {
class FastPositionUpdate;
struct FastPositionUpdateDefaultTypeInternal;
extern FastPositionUpdateDefaultTypeInternal _FastPositionUpdate_default_instance_;
}  // namespace xpilot
PROTOBUF_NAMESPACE_OPEN
template<> ::xpilot::FastPositionUpdate* Arena::CreateMaybeMessage<::xpilot::FastPositionUpdate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace xpilot {

// ===================================================================

class FastPositionUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:xpilot.FastPositionUpdate) */ {
 public:
  inline FastPositionUpdate() : FastPositionUpdate(nullptr) {}
  ~FastPositionUpdate() override;
  explicit constexpr FastPositionUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FastPositionUpdate(const FastPositionUpdate& from);
  FastPositionUpdate(FastPositionUpdate&& from) noexcept
    : FastPositionUpdate() {
    *this = ::std::move(from);
  }

  inline FastPositionUpdate& operator=(const FastPositionUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline FastPositionUpdate& operator=(FastPositionUpdate&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FastPositionUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const FastPositionUpdate* internal_default_instance() {
    return reinterpret_cast<const FastPositionUpdate*>(
               &_FastPositionUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FastPositionUpdate& a, FastPositionUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(FastPositionUpdate* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FastPositionUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FastPositionUpdate* New() const final {
    return new FastPositionUpdate();
  }

  FastPositionUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FastPositionUpdate>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FastPositionUpdate& from);
  void MergeFrom(const FastPositionUpdate& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FastPositionUpdate* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "xpilot.FastPositionUpdate";
  }
  protected:
  explicit FastPositionUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCallsignFieldNumber = 1,
    kLatitudeFieldNumber = 2,
    kLongitudeFieldNumber = 3,
    kAltitudeFieldNumber = 4,
    kPitchFieldNumber = 5,
    kHeadingFieldNumber = 6,
    kBankFieldNumber = 7,
    kVelocityLatitudeFieldNumber = 8,
    kVelocityAltitudeFieldNumber = 9,
    kVelocityLongitudeFieldNumber = 10,
    kVelocityPitchFieldNumber = 11,
    kVelocityHeadingFieldNumber = 12,
    kVelocityBankFieldNumber = 13,
  };
  // optional string callsign = 1;
  bool has_callsign() const;
  private:
  bool _internal_has_callsign() const;
  public:
  void clear_callsign();
  const std::string& callsign() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_callsign(ArgT0&& arg0, ArgT... args);
  std::string* mutable_callsign();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_callsign();
  void set_allocated_callsign(std::string* callsign);
  private:
  const std::string& _internal_callsign() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_callsign(const std::string& value);
  std::string* _internal_mutable_callsign();
  public:

  // optional double latitude = 2;
  bool has_latitude() const;
  private:
  bool _internal_has_latitude() const;
  public:
  void clear_latitude();
  double latitude() const;
  void set_latitude(double value);
  private:
  double _internal_latitude() const;
  void _internal_set_latitude(double value);
  public:

  // optional double longitude = 3;
  bool has_longitude() const;
  private:
  bool _internal_has_longitude() const;
  public:
  void clear_longitude();
  double longitude() const;
  void set_longitude(double value);
  private:
  double _internal_longitude() const;
  void _internal_set_longitude(double value);
  public:

  // optional double altitude = 4;
  bool has_altitude() const;
  private:
  bool _internal_has_altitude() const;
  public:
  void clear_altitude();
  double altitude() const;
  void set_altitude(double value);
  private:
  double _internal_altitude() const;
  void _internal_set_altitude(double value);
  public:

  // optional double pitch = 5;
  bool has_pitch() const;
  private:
  bool _internal_has_pitch() const;
  public:
  void clear_pitch();
  double pitch() const;
  void set_pitch(double value);
  private:
  double _internal_pitch() const;
  void _internal_set_pitch(double value);
  public:

  // optional double heading = 6;
  bool has_heading() const;
  private:
  bool _internal_has_heading() const;
  public:
  void clear_heading();
  double heading() const;
  void set_heading(double value);
  private:
  double _internal_heading() const;
  void _internal_set_heading(double value);
  public:

  // optional double bank = 7;
  bool has_bank() const;
  private:
  bool _internal_has_bank() const;
  public:
  void clear_bank();
  double bank() const;
  void set_bank(double value);
  private:
  double _internal_bank() const;
  void _internal_set_bank(double value);
  public:

  // optional double velocity_latitude = 8;
  bool has_velocity_latitude() const;
  private:
  bool _internal_has_velocity_latitude() const;
  public:
  void clear_velocity_latitude();
  double velocity_latitude() const;
  void set_velocity_latitude(double value);
  private:
  double _internal_velocity_latitude() const;
  void _internal_set_velocity_latitude(double value);
  public:

  // optional double velocity_altitude = 9;
  bool has_velocity_altitude() const;
  private:
  bool _internal_has_velocity_altitude() const;
  public:
  void clear_velocity_altitude();
  double velocity_altitude() const;
  void set_velocity_altitude(double value);
  private:
  double _internal_velocity_altitude() const;
  void _internal_set_velocity_altitude(double value);
  public:

  // optional double velocity_longitude = 10;
  bool has_velocity_longitude() const;
  private:
  bool _internal_has_velocity_longitude() const;
  public:
  void clear_velocity_longitude();
  double velocity_longitude() const;
  void set_velocity_longitude(double value);
  private:
  double _internal_velocity_longitude() const;
  void _internal_set_velocity_longitude(double value);
  public:

  // optional double velocity_pitch = 11;
  bool has_velocity_pitch() const;
  private:
  bool _internal_has_velocity_pitch() const;
  public:
  void clear_velocity_pitch();
  double velocity_pitch() const;
  void set_velocity_pitch(double value);
  private:
  double _internal_velocity_pitch() const;
  void _internal_set_velocity_pitch(double value);
  public:

  // optional double velocity_heading = 12;
  bool has_velocity_heading() const;
  private:
  bool _internal_has_velocity_heading() const;
  public:
  void clear_velocity_heading();
  double velocity_heading() const;
  void set_velocity_heading(double value);
  private:
  double _internal_velocity_heading() const;
  void _internal_set_velocity_heading(double value);
  public:

  // optional double velocity_bank = 13;
  bool has_velocity_bank() const;
  private:
  bool _internal_has_velocity_bank() const;
  public:
  void clear_velocity_bank();
  double velocity_bank() const;
  void set_velocity_bank(double value);
  private:
  double _internal_velocity_bank() const;
  void _internal_set_velocity_bank(double value);
  public:

  // @@protoc_insertion_point(class_scope:xpilot.FastPositionUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr callsign_;
  double latitude_;
  double longitude_;
  double altitude_;
  double pitch_;
  double heading_;
  double bank_;
  double velocity_latitude_;
  double velocity_altitude_;
  double velocity_longitude_;
  double velocity_pitch_;
  double velocity_heading_;
  double velocity_bank_;
  friend struct ::TableStruct_FastPositionUpdate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FastPositionUpdate

// optional string callsign = 1;
inline bool FastPositionUpdate::_internal_has_callsign() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_callsign() const {
  return _internal_has_callsign();
}
inline void FastPositionUpdate::clear_callsign() {
  callsign_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FastPositionUpdate::callsign() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.callsign)
  return _internal_callsign();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FastPositionUpdate::set_callsign(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.callsign)
}
inline std::string* FastPositionUpdate::mutable_callsign() {
  // @@protoc_insertion_point(field_mutable:xpilot.FastPositionUpdate.callsign)
  return _internal_mutable_callsign();
}
inline const std::string& FastPositionUpdate::_internal_callsign() const {
  return callsign_.Get();
}
inline void FastPositionUpdate::_internal_set_callsign(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  callsign_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FastPositionUpdate::_internal_mutable_callsign() {
  _has_bits_[0] |= 0x00000001u;
  return callsign_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FastPositionUpdate::release_callsign() {
  // @@protoc_insertion_point(field_release:xpilot.FastPositionUpdate.callsign)
  if (!_internal_has_callsign()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return callsign_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FastPositionUpdate::set_allocated_callsign(std::string* callsign) {
  if (callsign != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  callsign_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), callsign,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:xpilot.FastPositionUpdate.callsign)
}

// optional double latitude = 2;
inline bool FastPositionUpdate::_internal_has_latitude() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_latitude() const {
  return _internal_has_latitude();
}
inline void FastPositionUpdate::clear_latitude() {
  latitude_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double FastPositionUpdate::_internal_latitude() const {
  return latitude_;
}
inline double FastPositionUpdate::latitude() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.latitude)
  return _internal_latitude();
}
inline void FastPositionUpdate::_internal_set_latitude(double value) {
  _has_bits_[0] |= 0x00000002u;
  latitude_ = value;
}
inline void FastPositionUpdate::set_latitude(double value) {
  _internal_set_latitude(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.latitude)
}

// optional double longitude = 3;
inline bool FastPositionUpdate::_internal_has_longitude() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_longitude() const {
  return _internal_has_longitude();
}
inline void FastPositionUpdate::clear_longitude() {
  longitude_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double FastPositionUpdate::_internal_longitude() const {
  return longitude_;
}
inline double FastPositionUpdate::longitude() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.longitude)
  return _internal_longitude();
}
inline void FastPositionUpdate::_internal_set_longitude(double value) {
  _has_bits_[0] |= 0x00000004u;
  longitude_ = value;
}
inline void FastPositionUpdate::set_longitude(double value) {
  _internal_set_longitude(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.longitude)
}

// optional double altitude = 4;
inline bool FastPositionUpdate::_internal_has_altitude() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_altitude() const {
  return _internal_has_altitude();
}
inline void FastPositionUpdate::clear_altitude() {
  altitude_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double FastPositionUpdate::_internal_altitude() const {
  return altitude_;
}
inline double FastPositionUpdate::altitude() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.altitude)
  return _internal_altitude();
}
inline void FastPositionUpdate::_internal_set_altitude(double value) {
  _has_bits_[0] |= 0x00000008u;
  altitude_ = value;
}
inline void FastPositionUpdate::set_altitude(double value) {
  _internal_set_altitude(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.altitude)
}

// optional double pitch = 5;
inline bool FastPositionUpdate::_internal_has_pitch() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_pitch() const {
  return _internal_has_pitch();
}
inline void FastPositionUpdate::clear_pitch() {
  pitch_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double FastPositionUpdate::_internal_pitch() const {
  return pitch_;
}
inline double FastPositionUpdate::pitch() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.pitch)
  return _internal_pitch();
}
inline void FastPositionUpdate::_internal_set_pitch(double value) {
  _has_bits_[0] |= 0x00000010u;
  pitch_ = value;
}
inline void FastPositionUpdate::set_pitch(double value) {
  _internal_set_pitch(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.pitch)
}

// optional double heading = 6;
inline bool FastPositionUpdate::_internal_has_heading() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_heading() const {
  return _internal_has_heading();
}
inline void FastPositionUpdate::clear_heading() {
  heading_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double FastPositionUpdate::_internal_heading() const {
  return heading_;
}
inline double FastPositionUpdate::heading() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.heading)
  return _internal_heading();
}
inline void FastPositionUpdate::_internal_set_heading(double value) {
  _has_bits_[0] |= 0x00000020u;
  heading_ = value;
}
inline void FastPositionUpdate::set_heading(double value) {
  _internal_set_heading(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.heading)
}

// optional double bank = 7;
inline bool FastPositionUpdate::_internal_has_bank() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_bank() const {
  return _internal_has_bank();
}
inline void FastPositionUpdate::clear_bank() {
  bank_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double FastPositionUpdate::_internal_bank() const {
  return bank_;
}
inline double FastPositionUpdate::bank() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.bank)
  return _internal_bank();
}
inline void FastPositionUpdate::_internal_set_bank(double value) {
  _has_bits_[0] |= 0x00000040u;
  bank_ = value;
}
inline void FastPositionUpdate::set_bank(double value) {
  _internal_set_bank(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.bank)
}

// optional double velocity_latitude = 8;
inline bool FastPositionUpdate::_internal_has_velocity_latitude() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_velocity_latitude() const {
  return _internal_has_velocity_latitude();
}
inline void FastPositionUpdate::clear_velocity_latitude() {
  velocity_latitude_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double FastPositionUpdate::_internal_velocity_latitude() const {
  return velocity_latitude_;
}
inline double FastPositionUpdate::velocity_latitude() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.velocity_latitude)
  return _internal_velocity_latitude();
}
inline void FastPositionUpdate::_internal_set_velocity_latitude(double value) {
  _has_bits_[0] |= 0x00000080u;
  velocity_latitude_ = value;
}
inline void FastPositionUpdate::set_velocity_latitude(double value) {
  _internal_set_velocity_latitude(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.velocity_latitude)
}

// optional double velocity_altitude = 9;
inline bool FastPositionUpdate::_internal_has_velocity_altitude() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_velocity_altitude() const {
  return _internal_has_velocity_altitude();
}
inline void FastPositionUpdate::clear_velocity_altitude() {
  velocity_altitude_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double FastPositionUpdate::_internal_velocity_altitude() const {
  return velocity_altitude_;
}
inline double FastPositionUpdate::velocity_altitude() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.velocity_altitude)
  return _internal_velocity_altitude();
}
inline void FastPositionUpdate::_internal_set_velocity_altitude(double value) {
  _has_bits_[0] |= 0x00000100u;
  velocity_altitude_ = value;
}
inline void FastPositionUpdate::set_velocity_altitude(double value) {
  _internal_set_velocity_altitude(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.velocity_altitude)
}

// optional double velocity_longitude = 10;
inline bool FastPositionUpdate::_internal_has_velocity_longitude() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_velocity_longitude() const {
  return _internal_has_velocity_longitude();
}
inline void FastPositionUpdate::clear_velocity_longitude() {
  velocity_longitude_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline double FastPositionUpdate::_internal_velocity_longitude() const {
  return velocity_longitude_;
}
inline double FastPositionUpdate::velocity_longitude() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.velocity_longitude)
  return _internal_velocity_longitude();
}
inline void FastPositionUpdate::_internal_set_velocity_longitude(double value) {
  _has_bits_[0] |= 0x00000200u;
  velocity_longitude_ = value;
}
inline void FastPositionUpdate::set_velocity_longitude(double value) {
  _internal_set_velocity_longitude(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.velocity_longitude)
}

// optional double velocity_pitch = 11;
inline bool FastPositionUpdate::_internal_has_velocity_pitch() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_velocity_pitch() const {
  return _internal_has_velocity_pitch();
}
inline void FastPositionUpdate::clear_velocity_pitch() {
  velocity_pitch_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline double FastPositionUpdate::_internal_velocity_pitch() const {
  return velocity_pitch_;
}
inline double FastPositionUpdate::velocity_pitch() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.velocity_pitch)
  return _internal_velocity_pitch();
}
inline void FastPositionUpdate::_internal_set_velocity_pitch(double value) {
  _has_bits_[0] |= 0x00000400u;
  velocity_pitch_ = value;
}
inline void FastPositionUpdate::set_velocity_pitch(double value) {
  _internal_set_velocity_pitch(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.velocity_pitch)
}

// optional double velocity_heading = 12;
inline bool FastPositionUpdate::_internal_has_velocity_heading() const {
  bool value = (_has_bits_[0] & 0x00000800u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_velocity_heading() const {
  return _internal_has_velocity_heading();
}
inline void FastPositionUpdate::clear_velocity_heading() {
  velocity_heading_ = 0;
  _has_bits_[0] &= ~0x00000800u;
}
inline double FastPositionUpdate::_internal_velocity_heading() const {
  return velocity_heading_;
}
inline double FastPositionUpdate::velocity_heading() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.velocity_heading)
  return _internal_velocity_heading();
}
inline void FastPositionUpdate::_internal_set_velocity_heading(double value) {
  _has_bits_[0] |= 0x00000800u;
  velocity_heading_ = value;
}
inline void FastPositionUpdate::set_velocity_heading(double value) {
  _internal_set_velocity_heading(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.velocity_heading)
}

// optional double velocity_bank = 13;
inline bool FastPositionUpdate::_internal_has_velocity_bank() const {
  bool value = (_has_bits_[0] & 0x00001000u) != 0;
  return value;
}
inline bool FastPositionUpdate::has_velocity_bank() const {
  return _internal_has_velocity_bank();
}
inline void FastPositionUpdate::clear_velocity_bank() {
  velocity_bank_ = 0;
  _has_bits_[0] &= ~0x00001000u;
}
inline double FastPositionUpdate::_internal_velocity_bank() const {
  return velocity_bank_;
}
inline double FastPositionUpdate::velocity_bank() const {
  // @@protoc_insertion_point(field_get:xpilot.FastPositionUpdate.velocity_bank)
  return _internal_velocity_bank();
}
inline void FastPositionUpdate::_internal_set_velocity_bank(double value) {
  _has_bits_[0] |= 0x00001000u;
  velocity_bank_ = value;
}
inline void FastPositionUpdate::set_velocity_bank(double value) {
  _internal_set_velocity_bank(value);
  // @@protoc_insertion_point(field_set:xpilot.FastPositionUpdate.velocity_bank)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace xpilot

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_FastPositionUpdate_2eproto