//
//  MPDroidMoPubNative.m
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNative
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubNative.h>
//other required types
#import <MPDroid/MPDroidMoPubNativeMoPubNativeEventListener.h>
#import <MPDroid/MPDroidRequestParameters.h>
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidAdRequestListener.h>
#import <JavaKit/JavaMap.h>
#import <JavaKit/JavaInteger.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidAdRequest.h>
#import <MPDroid/MPDroidMoPubNativeMoPubNativeListener.h>
#import <JavaKit/JavaWeakReference.h>
#import <MPDroid/MPDroidMoPubNativeMoPubNativeNetworkListener.h>
#import <MPDroid/MPDroidAdResponse.h>


@implementation MPDroidMoPubNative


//constructors
@bridge (constructor) initWithContext:adUnitId:moPubNativeListener:;
@bridge (constructor) initWithContext:adUnitId:moPubNativeNetworkListener:;


//properties


//methods
@bridge (method, instance) setNativeEventListener: = setNativeEventListener;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) setLocalExtras: = setLocalExtras;
@bridge (method, instance) makeRequest = makeRequest;
@bridge (method, instance) makeRequest: = makeRequest;
@bridge (method, instance) makeRequest:integer: = makeRequest;


@end
