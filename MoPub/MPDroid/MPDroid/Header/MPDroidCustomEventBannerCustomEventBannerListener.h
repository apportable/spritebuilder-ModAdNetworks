//
//  MPDroidCustomEventBannerCustomEventBannerListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.CustomEventBanner.CustomEventBannerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventBanner.CustomEventBannerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidView;
@class MPDroidMoPubErrorCode;


//static fields


/**
Java interface: MPDroidCustomEventBannerCustomEventBannerListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.CustomEventBanner$CustomEventBannerListener")
@protocol MPDroidCustomEventBannerCustomEventBannerListener 

// properties


// methods
- (void)onBannerLoaded:(AndroidView *)bannerView; /* onBannerLoaded */
- (void)onBannerFailed:(MPDroidMoPubErrorCode *)errorCode; /* onBannerFailed */
- (void)onBannerExpanded; /* onBannerExpanded */
- (void)onBannerCollapsed; /* onBannerCollapsed */
- (void)onBannerClicked; /* onBannerClicked */
- (void)onLeaveApplication; /* onLeaveApplication */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.CustomEventBanner$CustomEventBannerListener")
@interface MPDroidCustomEventBannerCustomEventBannerListener : JavaObject <MPDroidCustomEventBannerCustomEventBannerListener>

//properties for handlers
@property (nonatomic, copy) void (^onBannerLoadedHandler)(AndroidView *);
@property (nonatomic, copy) void (^onBannerFailedHandler)(MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onBannerExpandedHandler)();
@property (nonatomic, copy) void (^onBannerCollapsedHandler)();
@property (nonatomic, copy) void (^onBannerClickedHandler)();
@property (nonatomic, copy) void (^onLeaveApplicationHandler)();


//convenience class method
+ (MPDroidCustomEventBannerCustomEventBannerListener *)listener;

@end