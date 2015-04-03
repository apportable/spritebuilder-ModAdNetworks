//
//  MPDroidNativeErrorCode.h
// 
//  Bridges to the java object com.mopub.nativeads.NativeErrorCode
//  See http://developer.android.com/reference/com/mopub/nativeads/NativeErrorCode.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidNativeErrorCode
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.NativeErrorCode")
@interface MPDroidNativeErrorCode : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidNativeErrorCode *)emptyAdResponse;
+ (MPDroidNativeErrorCode *)invalidJson;
+ (MPDroidNativeErrorCode *)imageDownloadFailure;
+ (MPDroidNativeErrorCode *)invalidRequestUrl;
+ (MPDroidNativeErrorCode *)unexpectedResponseCode;
+ (MPDroidNativeErrorCode *)serverErrorResponseCode;
+ (MPDroidNativeErrorCode *)connectionError;
+ (MPDroidNativeErrorCode *)unspecified;
+ (MPDroidNativeErrorCode *)networkInvalidRequest;
+ (MPDroidNativeErrorCode *)networkTimeout;
+ (MPDroidNativeErrorCode *)networkNoFill;
+ (MPDroidNativeErrorCode *)networkInvalidState;
+ (MPDroidNativeErrorCode *)nativeAdapterConfigurationError;
+ (MPDroidNativeErrorCode *)nativeAdapterNotFound;

// methods
- (NSString *)description; /* toString */


@end
