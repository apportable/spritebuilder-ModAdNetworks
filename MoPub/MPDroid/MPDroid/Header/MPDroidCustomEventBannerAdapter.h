//
//  MPDroidCustomEventBannerAdapter.h
// 
//  Bridges to the java object com.mopub.mobileads.CustomEventBannerAdapter
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventBannerAdapter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidCustomEventBannerCustomEventBannerListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidMoPubView;
@class MPDroidMoPubErrorCode;
@class AndroidView;
@class MPDroidCustomEventBanner;
@protocol JavaMap;
@class AndroidContext;
@protocol JavaRunnable;
@class AndroidHandler;
@class MPDroidAdReport;


//defines and their comments (static fields with values)
#define MPDroidCustomEventBannerAdapterDefaultBannerTimeoutDelay 10000

/**
Java class: MPDroidCustomEventBannerAdapter
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.CustomEventBannerAdapter")
@interface MPDroidCustomEventBannerAdapter : JavaObject <MPDroidCustomEventBannerCustomEventBannerListener>

// constructors
- (instancetype)initWithMoPubView:(MPDroidMoPubView *)moPubView className:(NSString *)className map:(JavaObject <JavaMap> *)serverExtras broadcastIdentifier:(int64_t)broadcastIdentifier adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties


//static valueless fields


// methods
- (void)onBannerLoaded:(AndroidView *)bannerView; /* onBannerLoaded */
- (void)onBannerFailed:(MPDroidMoPubErrorCode *)errorCode; /* onBannerFailed */
- (void)onBannerExpanded; /* onBannerExpanded */
- (void)onBannerCollapsed; /* onBannerCollapsed */
- (void)onBannerClicked; /* onBannerClicked */
- (void)onLeaveApplication; /* onLeaveApplication */


@end
