#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef MOMENTO_IOS_SWIFT_H
#define MOMENTO_IOS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import ObjectiveC;
@import StoreKit;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Momento_iOS",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_PROTOCOL("_TtP11Momento_iOS17MomentAdsDelegate_")
@protocol MomentAdsDelegate
/// 광고가 Load에 성공한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onAdLoadedWithDspName:(NSString * _Nonnull)dspName;
/// 광고가 Load에 실패한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onAdFailedWithError:(NSError * _Nonnull)error;
/// 광고를 클릭한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onAdClicked;
/// 광고가 Show에 성공한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onAdShowedWithIsShown:(BOOL)isShown;
/// 광고가 제거된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onAdRemoved;
/// 광고의 Load중 타임아웃이 발생한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onAdTimedout;
/// 광고의 이미지 로드 이후에 호출되며, 원한다면 이미지의 사이즈값을 전달받아 사용할 수 있습니다.
- (void)onImageLoadedWithImgSize:(CGSize)imgSize;
@end

@class NSCoder;

SWIFT_CLASS("_TtC11Momento_iOS16MomentBannerView")
@interface MomentBannerView : UIView
@property (nonatomic, weak) id <MomentAdsDelegate> _Nullable delegate;
- (nonnull instancetype)initWithSize:(NSInteger)size unitId:(NSString * _Nonnull)unitId OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// <ul>
///   <li>
///     Kor) 호출시 광고를 로드합니다.
///   </li>
///   <li>
///     Eng) Load ads when call this method.
///   </li>
/// </ul>
- (void)loadAd;
/// Remove Ads
/// <ul>
///   <li>
///     Kor) 호출시 광고를 제거합니다.
///   </li>
///   <li>
///     Eng) Remove ads when call this method.
///   </li>
/// </ul>
- (void)destory;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIImageView;
@class UILabel;
@class UIButton;

SWIFT_CLASS("_TtC11Momento_iOS19MomentNativeManager")
@interface MomentNativeManager : UIView
@property (nonatomic, weak) id <MomentAdsDelegate> _Nullable delegate;
- (nonnull instancetype)initWithUnitId:(NSString * _Nonnull)unitId OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
/// API를 통해 데이터를 로드하고, 뷰를 랜더링하는 메서드
/// <ul>
///   <li>
///     button을 제외한 모든 파라미터는 Optional로, nil을 넘겨 사용자가 원하는 부분을 사용하지 않을 수 있습니다.
///   </li>
///   <li>
///     timeOut 파라미터의 경우 Default값이 설정되어 있어 특정 시간을 설정하지 않으려면 입력하지 않아도 됩니다.
///   </li>
/// </ul>
/// \param mainImageView 상단의 메인 이미지를 담을 UIImageView를 Optional로 받습니다.
///
/// \param logoImageView 로고 이미지를 담을 UIImageView를 Optional로 받습니다.
///
/// \param titleLabel 타이틀 텍스트를 담을 UILabel을 Optional로 받습니다.
///
/// \param descriptionLabel 설명 텍스트를 담을 UILabel을 Optional로 받습니다.
///
/// \param button 클릭 시 광고 페이지/앱스토어로 이동할 수 있도록 하는 UIButton을 Optional로 받습니다.
///
/// \param timeOut 타임아웃의 기준 시간을 <em>sec</em> 단위로 입력 받습니다. Default로 15sec가 설정되어 값를 입력하지 않는다면 timeout의 기준은 15sec 입니다.
///
- (void)loadWithRenderingWithMainImageView:(UIImageView * _Nullable)mainImageView logoImageView:(UIImageView * _Nullable)logoImageView titleLabel:(UILabel * _Nullable)titleLabel descriptionLabel:(UILabel * _Nullable)descriptionLabel button:(UIButton * _Nullable)button timeOut:(double)timeOut;
/// 광고 제거
- (void)destory;
- (void)cancelRequest;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC11Momento_iOS9MomentSDK")
@interface MomentSDK : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) MomentSDK * _Nonnull shared;)
+ (MomentSDK * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(MomentSDK * _Nonnull)value;
- (void)isDebugMode:(BOOL)debugMode;
/// 매체로부터 TCString을 전달 받고 저장하는 함수
- (void)setTCStringWithTCSTring:(NSString * _Nonnull)TCSTring;
/// Get MomentoSDKVersion
- (NSString * _Nonnull)getMomentoVersion SWIFT_WARN_UNUSED_RESULT;
/// 리워드 비디오의 스킵 동작을 켜고 끌 수 있는 메서드
- (void)setRewardVideoSkipEnabled:(BOOL)state;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, videoClickType, open) {
  videoClickTypeLinearAd = 1,
  videoClickTypeCompanionAd = 2,
};


SWIFT_PROTOCOL("_TtP11Momento_iOS19MomentVideoDelegate_")
@protocol MomentVideoDelegate
/// 광고 비디오가 Load에 성공한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoLoadedWithDspName:(NSString * _Nonnull)dspName;
/// 광고 비디오를 끝까지 모두 시청한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoComplete;
/// 리워드형 광고 비디오를 중간에 종료한 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoRewardedWithState:(BOOL)state;
/// 광고의 request가 타임아웃된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoTimedout;
/// 광고가 정상적으로 보여진 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoShown;
/// 광고가 종료된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoClosed;
/// 광고가 제거된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoRemoved;
/// 광고가 클릭된 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoClickedWithType:(enum videoClickType)type;
/// 광고의 로드가 모종의 이유로 실패한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoLoadFailedWithDescription:(NSString * _Nonnull)description;
/// 광고의 Show가 모종의 이유로 실패한 경우 호출되며, 해당 function에 원하는 동작을 정의하여 사용할 수 있습니다.
- (void)onVideoShowFailedWithDescription:(NSString * _Nonnull)description;
@end


SWIFT_CLASS("_TtC11Momento_iOS18MomentVideoManager")
@interface MomentVideoManager : NSObject
@property (nonatomic, weak) id <MomentVideoDelegate> _Nullable videoDelegate;
- (void)loadVideo;
- (void)showVideo;
- (BOOL)hasVideoAd SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class SKStoreProductViewController;

@interface MomentVideoManager (SWIFT_EXTENSION(Momento_iOS)) <SKStoreProductViewControllerDelegate>
- (void)productViewControllerDidFinish:(SKStoreProductViewController * _Nonnull)viewController;
@end





#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
