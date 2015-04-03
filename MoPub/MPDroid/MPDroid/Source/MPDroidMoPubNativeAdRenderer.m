//
//  MPDroidMoPubNativeAdRenderer.m
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNativeAdRenderer
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdRenderer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubNativeAdRenderer.h>
//other required types
#import <MPDroid/MPDroidViewBinder.h>
#import <AndroidKit/AndroidViewGroup.h>
#import <AndroidKit/AndroidView.h>
#import <MPDroid/MPDroidNativeResponse.h>
#import <AndroidKit/AndroidContext.h>
#import <JavaKit/JavaWeakHashMap.h>


@implementation MPDroidMoPubNativeAdRenderer


//constructors
@bridge (constructor) initWithViewBinder:;


//properties


//methods
@bridge (method, instance) createAdView:viewGroup: = createAdView;
@bridge (method, instance) renderAdView:nativeResponse: = renderAdView;
@bridge (method, instance) renderAdView = renderAdView;


@end
