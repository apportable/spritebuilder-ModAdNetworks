//
//  MPDroidMoPubNative.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNative
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidMoPubNativeMoPubNativeEventListener;
@class MPDroidRequestParameters;
@class MPDroidVolleyError;
@protocol MPDroidAdRequestListener;
@protocol JavaMap;
@class JavaInteger;
@class AndroidContext;
@class MPDroidAdRequest;
@protocol MPDroidMoPubNativeMoPubNativeListener;
@class JavaWeakReference;
@protocol MPDroidMoPubNativeMoPubNativeNetworkListener;
@class MPDroidAdResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubNative
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubNative")
@interface MPDroidMoPubNative : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context adUnitId:(NSString *)adUnitId moPubNativeListener:(JavaObject <MPDroidMoPubNativeMoPubNativeListener> *)moPubNativeListener; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context adUnitId:(NSString *)adUnitId moPubNativeNetworkListener:(JavaObject <MPDroidMoPubNativeMoPubNativeNetworkListener> *)moPubNativeNetworkListener; /* <init> */


// properties


//static valueless fields


// methods
- (void)setNativeEventListener:(JavaObject <MPDroidMoPubNativeMoPubNativeEventListener> *)nativeEventListener; /* setNativeEventListener */
- (void)destroy; /* destroy */
- (void)setLocalExtras:(JavaObject <JavaMap> *)localExtras; /* setLocalExtras */
- (void)makeRequest; /* makeRequest */
- (void)makeRequest:(MPDroidRequestParameters *)requestParameters; /* makeRequest */
- (void)makeRequest:(MPDroidRequestParameters *)requestParameters integer:(JavaInteger *)sequenceNumber; /* makeRequest */


@end
