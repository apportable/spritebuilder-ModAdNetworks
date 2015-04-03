//
//  MPDroidCustomEventInterstitialAdapter.h
// 
//  Bridges to the java object com.mopub.mobileads.CustomEventInterstitialAdapter
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventInterstitialAdapter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidCustomEventInterstitial;
@class MPDroidMoPubErrorCode;
@protocol JavaMap;
@class AndroidContext;
@class MPDroidMoPubInterstitial;
@protocol JavaRunnable;
@class AndroidHandler;
@class MPDroidAdReport;


//defines and their comments (static fields with values)
#define MPDroidCustomEventInterstitialAdapterDefaultInterstitialTimeoutDelay 30000

/**
Java class: MPDroidCustomEventInterstitialAdapter
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.CustomEventInterstitialAdapter")
@interface MPDroidCustomEventInterstitialAdapter : JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener>

// constructors
- (instancetype)initWithMoPubInterstitial:(MPDroidMoPubInterstitial *)moPubInterstitial className:(NSString *)className map:(JavaObject <JavaMap> *)serverExtras broadcastIdentifier:(int64_t)broadcastIdentifier adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties


//static valueless fields


// methods
- (void)onInterstitialLoaded; /* onInterstitialLoaded */
- (void)onInterstitialFailed:(MPDroidMoPubErrorCode *)errorCode; /* onInterstitialFailed */
- (void)onInterstitialShown; /* onInterstitialShown */
- (void)onInterstitialClicked; /* onInterstitialClicked */
- (void)onLeaveApplication; /* onLeaveApplication */
- (void)onInterstitialDismissed; /* onInterstitialDismissed */


@end
