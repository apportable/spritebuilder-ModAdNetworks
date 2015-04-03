//
//  MPDroidCustomEventInterstitialCustomEventInterstitialListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.CustomEventInterstitial.CustomEventInterstitialListener
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventInterstitial.CustomEventInterstitialListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubErrorCode;


//static fields


/**
Java interface: MPDroidCustomEventInterstitialCustomEventInterstitialListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.CustomEventInterstitial$CustomEventInterstitialListener")
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener 

// properties


// methods
- (void)onInterstitialLoaded; /* onInterstitialLoaded */
- (void)onInterstitialFailed:(MPDroidMoPubErrorCode *)errorCode; /* onInterstitialFailed */
- (void)onInterstitialShown; /* onInterstitialShown */
- (void)onInterstitialClicked; /* onInterstitialClicked */
- (void)onLeaveApplication; /* onLeaveApplication */
- (void)onInterstitialDismissed; /* onInterstitialDismissed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.CustomEventInterstitial$CustomEventInterstitialListener")
@interface MPDroidCustomEventInterstitialCustomEventInterstitialListener : JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener>

//properties for handlers
@property (nonatomic, copy) void (^onInterstitialLoadedHandler)();
@property (nonatomic, copy) void (^onInterstitialFailedHandler)(MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onInterstitialShownHandler)();
@property (nonatomic, copy) void (^onInterstitialClickedHandler)();
@property (nonatomic, copy) void (^onLeaveApplicationHandler)();
@property (nonatomic, copy) void (^onInterstitialDismissedHandler)();


//convenience class method
+ (MPDroidCustomEventInterstitialCustomEventInterstitialListener *)listener;

@end