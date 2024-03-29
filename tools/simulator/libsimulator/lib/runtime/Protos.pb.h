/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos.proto

#ifndef PROTOBUF_Protos_2eproto__INCLUDED
#define PROTOBUF_Protos_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace runtime {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Protos_2eproto();
void protobuf_AssignDesc_Protos_2eproto();
void protobuf_ShutdownFile_Protos_2eproto();

class FileSendProtos;
class FileSendComplete;

enum FileSendProtos_CompressType {
  FileSendProtos_CompressType_NO_COMPRESS = 0,
  FileSendProtos_CompressType_ZIP = 1
};
bool FileSendProtos_CompressType_IsValid(int value);
const FileSendProtos_CompressType FileSendProtos_CompressType_CompressType_MIN = FileSendProtos_CompressType_NO_COMPRESS;
const FileSendProtos_CompressType FileSendProtos_CompressType_CompressType_MAX = FileSendProtos_CompressType_ZIP;
const int FileSendProtos_CompressType_CompressType_ARRAYSIZE = FileSendProtos_CompressType_CompressType_MAX + 1;

enum FileSendProtos_VerifyMode {
  FileSendProtos_VerifyMode_NO_VERIFY = 0,
  FileSendProtos_VerifyMode_CRC = 1,
  FileSendProtos_VerifyMode_MD5 = 2
};
bool FileSendProtos_VerifyMode_IsValid(int value);
const FileSendProtos_VerifyMode FileSendProtos_VerifyMode_VerifyMode_MIN = FileSendProtos_VerifyMode_NO_VERIFY;
const FileSendProtos_VerifyMode FileSendProtos_VerifyMode_VerifyMode_MAX = FileSendProtos_VerifyMode_MD5;
const int FileSendProtos_VerifyMode_VerifyMode_ARRAYSIZE = FileSendProtos_VerifyMode_VerifyMode_MAX + 1;

enum FileSendComplete_RESULTTYPE {
  FileSendComplete_RESULTTYPE_SUCCESS = 0,
  FileSendComplete_RESULTTYPE_RECV_ERROR = 1,
  FileSendComplete_RESULTTYPE_UNCOMPRESS_ERROR = 2,
  FileSendComplete_RESULTTYPE_FOPEN_ERROR = 3,
  FileSendComplete_RESULTTYPE_FWRITE_ERROR = 4
};
bool FileSendComplete_RESULTTYPE_IsValid(int value);
const FileSendComplete_RESULTTYPE FileSendComplete_RESULTTYPE_RESULTTYPE_MIN = FileSendComplete_RESULTTYPE_SUCCESS;
const FileSendComplete_RESULTTYPE FileSendComplete_RESULTTYPE_RESULTTYPE_MAX = FileSendComplete_RESULTTYPE_FWRITE_ERROR;
const int FileSendComplete_RESULTTYPE_RESULTTYPE_ARRAYSIZE = FileSendComplete_RESULTTYPE_RESULTTYPE_MAX + 1;

// ===================================================================

class FileSendProtos : public ::google::protobuf::MessageLite {
 public:
  FileSendProtos();
  virtual ~FileSendProtos();

  FileSendProtos(const FileSendProtos& from);

  inline FileSendProtos& operator=(const FileSendProtos& from) {
    CopyFrom(from);
    return *this;
  }

  static const FileSendProtos& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const FileSendProtos* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(FileSendProtos* other);

  // implements Message ----------------------------------------------

  FileSendProtos* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const FileSendProtos& from);
  void MergeFrom(const FileSendProtos& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef FileSendProtos_CompressType CompressType;
  static const CompressType NO_COMPRESS = FileSendProtos_CompressType_NO_COMPRESS;
  static const CompressType ZIP = FileSendProtos_CompressType_ZIP;
  static inline bool CompressType_IsValid(int value) {
    return FileSendProtos_CompressType_IsValid(value);
  }
  static const CompressType CompressType_MIN =
    FileSendProtos_CompressType_CompressType_MIN;
  static const CompressType CompressType_MAX =
    FileSendProtos_CompressType_CompressType_MAX;
  static const int CompressType_ARRAYSIZE =
    FileSendProtos_CompressType_CompressType_ARRAYSIZE;

  typedef FileSendProtos_VerifyMode VerifyMode;
  static const VerifyMode NO_VERIFY = FileSendProtos_VerifyMode_NO_VERIFY;
  static const VerifyMode CRC = FileSendProtos_VerifyMode_CRC;
  static const VerifyMode MD5 = FileSendProtos_VerifyMode_MD5;
  static inline bool VerifyMode_IsValid(int value) {
    return FileSendProtos_VerifyMode_IsValid(value);
  }
  static const VerifyMode VerifyMode_MIN =
    FileSendProtos_VerifyMode_VerifyMode_MIN;
  static const VerifyMode VerifyMode_MAX =
    FileSendProtos_VerifyMode_VerifyMode_MAX;
  static const int VerifyMode_ARRAYSIZE =
    FileSendProtos_VerifyMode_VerifyMode_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string file_name = 1;
  inline bool has_file_name() const;
  inline void clear_file_name();
  static const int kFileNameFieldNumber = 1;
  inline const ::std::string& file_name() const;
  inline void set_file_name(const ::std::string& value);
  inline void set_file_name(const char* value);
  inline void set_file_name(const char* value, size_t size);
  inline ::std::string* mutable_file_name();
  inline ::std::string* release_file_name();
  inline void set_allocated_file_name(::std::string* file_name);

  // required int32 package_seq = 2;
  inline bool has_package_seq() const;
  inline void clear_package_seq();
  static const int kPackageSeqFieldNumber = 2;
  inline ::google::protobuf::int32 package_seq() const;
  inline void set_package_seq(::google::protobuf::int32 value);

  // required int32 package_sum = 3;
  inline bool has_package_sum() const;
  inline void clear_package_sum();
  static const int kPackageSumFieldNumber = 3;
  inline ::google::protobuf::int32 package_sum() const;
  inline void set_package_sum(::google::protobuf::int32 value);

  // required uint64 content_size = 4;
  inline bool has_content_size() const;
  inline void clear_content_size();
  static const int kContentSizeFieldNumber = 4;
  inline ::google::protobuf::uint64 content_size() const;
  inline void set_content_size(::google::protobuf::uint64 value);

  // required .runtime.FileSendProtos.CompressType compress_type = 5;
  inline bool has_compress_type() const;
  inline void clear_compress_type();
  static const int kCompressTypeFieldNumber = 5;
  inline ::runtime::FileSendProtos_CompressType compress_type() const;
  inline void set_compress_type(::runtime::FileSendProtos_CompressType value);

  // optional uint64 modified_time = 6;
  inline bool has_modified_time() const;
  inline void clear_modified_time();
  static const int kModifiedTimeFieldNumber = 6;
  inline ::google::protobuf::uint64 modified_time() const;
  inline void set_modified_time(::google::protobuf::uint64 value);

  // optional .runtime.FileSendProtos.VerifyMode verify_mode = 7;
  inline bool has_verify_mode() const;
  inline void clear_verify_mode();
  static const int kVerifyModeFieldNumber = 7;
  inline ::runtime::FileSendProtos_VerifyMode verify_mode() const;
  inline void set_verify_mode(::runtime::FileSendProtos_VerifyMode value);

  // optional string verify_sign = 8;
  inline bool has_verify_sign() const;
  inline void clear_verify_sign();
  static const int kVerifySignFieldNumber = 8;
  inline const ::std::string& verify_sign() const;
  inline void set_verify_sign(const ::std::string& value);
  inline void set_verify_sign(const char* value);
  inline void set_verify_sign(const char* value, size_t size);
  inline ::std::string* mutable_verify_sign();
  inline ::std::string* release_verify_sign();
  inline void set_allocated_verify_sign(::std::string* verify_sign);

  // optional uint64 uncompress_size = 9;
  inline bool has_uncompress_size() const;
  inline void clear_uncompress_size();
  static const int kUncompressSizeFieldNumber = 9;
  inline ::google::protobuf::uint64 uncompress_size() const;
  inline void set_uncompress_size(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:runtime.FileSendProtos)
 private:
  inline void set_has_file_name();
  inline void clear_has_file_name();
  inline void set_has_package_seq();
  inline void clear_has_package_seq();
  inline void set_has_package_sum();
  inline void clear_has_package_sum();
  inline void set_has_content_size();
  inline void clear_has_content_size();
  inline void set_has_compress_type();
  inline void clear_has_compress_type();
  inline void set_has_modified_time();
  inline void clear_has_modified_time();
  inline void set_has_verify_mode();
  inline void clear_has_verify_mode();
  inline void set_has_verify_sign();
  inline void clear_has_verify_sign();
  inline void set_has_uncompress_size();
  inline void clear_has_uncompress_size();

  ::std::string* file_name_;
  ::google::protobuf::int32 package_seq_;
  ::google::protobuf::int32 package_sum_;
  ::google::protobuf::uint64 content_size_;
  ::google::protobuf::uint64 modified_time_;
  int compress_type_;
  int verify_mode_;
  ::std::string* verify_sign_;
  ::google::protobuf::uint64 uncompress_size_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Protos_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Protos_2eproto();
  #endif
  friend void protobuf_AssignDesc_Protos_2eproto();
  friend void protobuf_ShutdownFile_Protos_2eproto();

  void InitAsDefaultInstance();
  static FileSendProtos* default_instance_;
};
// -------------------------------------------------------------------

class FileSendComplete : public ::google::protobuf::MessageLite {
 public:
  FileSendComplete();
  virtual ~FileSendComplete();

  FileSendComplete(const FileSendComplete& from);

  inline FileSendComplete& operator=(const FileSendComplete& from) {
    CopyFrom(from);
    return *this;
  }

  static const FileSendComplete& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const FileSendComplete* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(FileSendComplete* other);

  // implements Message ----------------------------------------------

  FileSendComplete* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const FileSendComplete& from);
  void MergeFrom(const FileSendComplete& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef FileSendComplete_RESULTTYPE RESULTTYPE;
  static const RESULTTYPE SUCCESS = FileSendComplete_RESULTTYPE_SUCCESS;
  static const RESULTTYPE RECV_ERROR = FileSendComplete_RESULTTYPE_RECV_ERROR;
  static const RESULTTYPE UNCOMPRESS_ERROR = FileSendComplete_RESULTTYPE_UNCOMPRESS_ERROR;
  static const RESULTTYPE FOPEN_ERROR = FileSendComplete_RESULTTYPE_FOPEN_ERROR;
  static const RESULTTYPE FWRITE_ERROR = FileSendComplete_RESULTTYPE_FWRITE_ERROR;
  static inline bool RESULTTYPE_IsValid(int value) {
    return FileSendComplete_RESULTTYPE_IsValid(value);
  }
  static const RESULTTYPE RESULTTYPE_MIN =
    FileSendComplete_RESULTTYPE_RESULTTYPE_MIN;
  static const RESULTTYPE RESULTTYPE_MAX =
    FileSendComplete_RESULTTYPE_RESULTTYPE_MAX;
  static const int RESULTTYPE_ARRAYSIZE =
    FileSendComplete_RESULTTYPE_RESULTTYPE_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string file_name = 1;
  inline bool has_file_name() const;
  inline void clear_file_name();
  static const int kFileNameFieldNumber = 1;
  inline const ::std::string& file_name() const;
  inline void set_file_name(const ::std::string& value);
  inline void set_file_name(const char* value);
  inline void set_file_name(const char* value, size_t size);
  inline ::std::string* mutable_file_name();
  inline ::std::string* release_file_name();
  inline void set_allocated_file_name(::std::string* file_name);

  // required .runtime.FileSendComplete.RESULTTYPE result = 2;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 2;
  inline ::runtime::FileSendComplete_RESULTTYPE result() const;
  inline void set_result(::runtime::FileSendComplete_RESULTTYPE value);

  // required int32 error_num = 3;
  inline bool has_error_num() const;
  inline void clear_error_num();
  static const int kErrorNumFieldNumber = 3;
  inline ::google::protobuf::int32 error_num() const;
  inline void set_error_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:runtime.FileSendComplete)
 private:
  inline void set_has_file_name();
  inline void clear_has_file_name();
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_error_num();
  inline void clear_has_error_num();

  ::std::string* file_name_;
  int result_;
  ::google::protobuf::int32 error_num_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_Protos_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_Protos_2eproto();
  #endif
  friend void protobuf_AssignDesc_Protos_2eproto();
  friend void protobuf_ShutdownFile_Protos_2eproto();

  void InitAsDefaultInstance();
  static FileSendComplete* default_instance_;
};
// ===================================================================


// ===================================================================

// FileSendProtos

// required string file_name = 1;
inline bool FileSendProtos::has_file_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FileSendProtos::set_has_file_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FileSendProtos::clear_has_file_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FileSendProtos::clear_file_name() {
  if (file_name_ != &::google::protobuf::internal::kEmptyString) {
    file_name_->clear();
  }
  clear_has_file_name();
}
inline const ::std::string& FileSendProtos::file_name() const {
  return *file_name_;
}
inline void FileSendProtos::set_file_name(const ::std::string& value) {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  file_name_->assign(value);
}
inline void FileSendProtos::set_file_name(const char* value) {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  file_name_->assign(value);
}
inline void FileSendProtos::set_file_name(const char* value, size_t size) {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  file_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FileSendProtos::mutable_file_name() {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  return file_name_;
}
inline ::std::string* FileSendProtos::release_file_name() {
  clear_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = file_name_;
    file_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FileSendProtos::set_allocated_file_name(::std::string* file_name) {
  if (file_name_ != &::google::protobuf::internal::kEmptyString) {
    delete file_name_;
  }
  if (file_name) {
    set_has_file_name();
    file_name_ = file_name;
  } else {
    clear_has_file_name();
    file_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 package_seq = 2;
inline bool FileSendProtos::has_package_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FileSendProtos::set_has_package_seq() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FileSendProtos::clear_has_package_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FileSendProtos::clear_package_seq() {
  package_seq_ = 0;
  clear_has_package_seq();
}
inline ::google::protobuf::int32 FileSendProtos::package_seq() const {
  return package_seq_;
}
inline void FileSendProtos::set_package_seq(::google::protobuf::int32 value) {
  set_has_package_seq();
  package_seq_ = value;
}

// required int32 package_sum = 3;
inline bool FileSendProtos::has_package_sum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FileSendProtos::set_has_package_sum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FileSendProtos::clear_has_package_sum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FileSendProtos::clear_package_sum() {
  package_sum_ = 0;
  clear_has_package_sum();
}
inline ::google::protobuf::int32 FileSendProtos::package_sum() const {
  return package_sum_;
}
inline void FileSendProtos::set_package_sum(::google::protobuf::int32 value) {
  set_has_package_sum();
  package_sum_ = value;
}

// required uint64 content_size = 4;
inline bool FileSendProtos::has_content_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FileSendProtos::set_has_content_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FileSendProtos::clear_has_content_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FileSendProtos::clear_content_size() {
  content_size_ = GOOGLE_ULONGLONG(0);
  clear_has_content_size();
}
inline ::google::protobuf::uint64 FileSendProtos::content_size() const {
  return content_size_;
}
inline void FileSendProtos::set_content_size(::google::protobuf::uint64 value) {
  set_has_content_size();
  content_size_ = value;
}

// required .runtime.FileSendProtos.CompressType compress_type = 5;
inline bool FileSendProtos::has_compress_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void FileSendProtos::set_has_compress_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void FileSendProtos::clear_has_compress_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void FileSendProtos::clear_compress_type() {
  compress_type_ = 0;
  clear_has_compress_type();
}
inline ::runtime::FileSendProtos_CompressType FileSendProtos::compress_type() const {
  return static_cast< ::runtime::FileSendProtos_CompressType >(compress_type_);
}
inline void FileSendProtos::set_compress_type(::runtime::FileSendProtos_CompressType value) {
  assert(::runtime::FileSendProtos_CompressType_IsValid(value));
  set_has_compress_type();
  compress_type_ = value;
}

// optional uint64 modified_time = 6;
inline bool FileSendProtos::has_modified_time() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void FileSendProtos::set_has_modified_time() {
  _has_bits_[0] |= 0x00000020u;
}
inline void FileSendProtos::clear_has_modified_time() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void FileSendProtos::clear_modified_time() {
  modified_time_ = GOOGLE_ULONGLONG(0);
  clear_has_modified_time();
}
inline ::google::protobuf::uint64 FileSendProtos::modified_time() const {
  return modified_time_;
}
inline void FileSendProtos::set_modified_time(::google::protobuf::uint64 value) {
  set_has_modified_time();
  modified_time_ = value;
}

// optional .runtime.FileSendProtos.VerifyMode verify_mode = 7;
inline bool FileSendProtos::has_verify_mode() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void FileSendProtos::set_has_verify_mode() {
  _has_bits_[0] |= 0x00000040u;
}
inline void FileSendProtos::clear_has_verify_mode() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void FileSendProtos::clear_verify_mode() {
  verify_mode_ = 0;
  clear_has_verify_mode();
}
inline ::runtime::FileSendProtos_VerifyMode FileSendProtos::verify_mode() const {
  return static_cast< ::runtime::FileSendProtos_VerifyMode >(verify_mode_);
}
inline void FileSendProtos::set_verify_mode(::runtime::FileSendProtos_VerifyMode value) {
  assert(::runtime::FileSendProtos_VerifyMode_IsValid(value));
  set_has_verify_mode();
  verify_mode_ = value;
}

// optional string verify_sign = 8;
inline bool FileSendProtos::has_verify_sign() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void FileSendProtos::set_has_verify_sign() {
  _has_bits_[0] |= 0x00000080u;
}
inline void FileSendProtos::clear_has_verify_sign() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void FileSendProtos::clear_verify_sign() {
  if (verify_sign_ != &::google::protobuf::internal::kEmptyString) {
    verify_sign_->clear();
  }
  clear_has_verify_sign();
}
inline const ::std::string& FileSendProtos::verify_sign() const {
  return *verify_sign_;
}
inline void FileSendProtos::set_verify_sign(const ::std::string& value) {
  set_has_verify_sign();
  if (verify_sign_ == &::google::protobuf::internal::kEmptyString) {
    verify_sign_ = new ::std::string;
  }
  verify_sign_->assign(value);
}
inline void FileSendProtos::set_verify_sign(const char* value) {
  set_has_verify_sign();
  if (verify_sign_ == &::google::protobuf::internal::kEmptyString) {
    verify_sign_ = new ::std::string;
  }
  verify_sign_->assign(value);
}
inline void FileSendProtos::set_verify_sign(const char* value, size_t size) {
  set_has_verify_sign();
  if (verify_sign_ == &::google::protobuf::internal::kEmptyString) {
    verify_sign_ = new ::std::string;
  }
  verify_sign_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FileSendProtos::mutable_verify_sign() {
  set_has_verify_sign();
  if (verify_sign_ == &::google::protobuf::internal::kEmptyString) {
    verify_sign_ = new ::std::string;
  }
  return verify_sign_;
}
inline ::std::string* FileSendProtos::release_verify_sign() {
  clear_has_verify_sign();
  if (verify_sign_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = verify_sign_;
    verify_sign_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FileSendProtos::set_allocated_verify_sign(::std::string* verify_sign) {
  if (verify_sign_ != &::google::protobuf::internal::kEmptyString) {
    delete verify_sign_;
  }
  if (verify_sign) {
    set_has_verify_sign();
    verify_sign_ = verify_sign;
  } else {
    clear_has_verify_sign();
    verify_sign_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional uint64 uncompress_size = 9;
inline bool FileSendProtos::has_uncompress_size() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void FileSendProtos::set_has_uncompress_size() {
  _has_bits_[0] |= 0x00000100u;
}
inline void FileSendProtos::clear_has_uncompress_size() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void FileSendProtos::clear_uncompress_size() {
  uncompress_size_ = GOOGLE_ULONGLONG(0);
  clear_has_uncompress_size();
}
inline ::google::protobuf::uint64 FileSendProtos::uncompress_size() const {
  return uncompress_size_;
}
inline void FileSendProtos::set_uncompress_size(::google::protobuf::uint64 value) {
  set_has_uncompress_size();
  uncompress_size_ = value;
}

// -------------------------------------------------------------------

// FileSendComplete

// required string file_name = 1;
inline bool FileSendComplete::has_file_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FileSendComplete::set_has_file_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FileSendComplete::clear_has_file_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FileSendComplete::clear_file_name() {
  if (file_name_ != &::google::protobuf::internal::kEmptyString) {
    file_name_->clear();
  }
  clear_has_file_name();
}
inline const ::std::string& FileSendComplete::file_name() const {
  return *file_name_;
}
inline void FileSendComplete::set_file_name(const ::std::string& value) {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  file_name_->assign(value);
}
inline void FileSendComplete::set_file_name(const char* value) {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  file_name_->assign(value);
}
inline void FileSendComplete::set_file_name(const char* value, size_t size) {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  file_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* FileSendComplete::mutable_file_name() {
  set_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    file_name_ = new ::std::string;
  }
  return file_name_;
}
inline ::std::string* FileSendComplete::release_file_name() {
  clear_has_file_name();
  if (file_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = file_name_;
    file_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void FileSendComplete::set_allocated_file_name(::std::string* file_name) {
  if (file_name_ != &::google::protobuf::internal::kEmptyString) {
    delete file_name_;
  }
  if (file_name) {
    set_has_file_name();
    file_name_ = file_name;
  } else {
    clear_has_file_name();
    file_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .runtime.FileSendComplete.RESULTTYPE result = 2;
inline bool FileSendComplete::has_result() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FileSendComplete::set_has_result() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FileSendComplete::clear_has_result() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FileSendComplete::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::runtime::FileSendComplete_RESULTTYPE FileSendComplete::result() const {
  return static_cast< ::runtime::FileSendComplete_RESULTTYPE >(result_);
}
inline void FileSendComplete::set_result(::runtime::FileSendComplete_RESULTTYPE value) {
  assert(::runtime::FileSendComplete_RESULTTYPE_IsValid(value));
  set_has_result();
  result_ = value;
}

// required int32 error_num = 3;
inline bool FileSendComplete::has_error_num() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FileSendComplete::set_has_error_num() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FileSendComplete::clear_has_error_num() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FileSendComplete::clear_error_num() {
  error_num_ = 0;
  clear_has_error_num();
}
inline ::google::protobuf::int32 FileSendComplete::error_num() const {
  return error_num_;
}
inline void FileSendComplete::set_error_num(::google::protobuf::int32 value) {
  set_has_error_num();
  error_num_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace runtime

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protos_2eproto__INCLUDED
