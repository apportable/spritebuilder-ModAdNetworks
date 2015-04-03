//
//  MPDroidMoPubInterstitialInterstitialAdListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubInterstitial.InterstitialAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.InterstitialAdListener.html for documentation.
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
@class MPDroidMoPubInterstitial;


//static fields


/**
Java interface: MPDroidMoPubInterstitialInterstitialAdListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubInterstitial$InterstitialAdListener")
@protocol MPDroidMoPubInterstitialInterstitialAdListener 

// properties


// methods
- (void)onInterstitialLoaded:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialLoaded */
- (void)onInterstitialFailed:(MPDroidMoPubInterstitial *)interstitial moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode; /* onInterstitialFailed */
- (void)onInterstitialShown:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialShown */
- (void)onInterstitialClicked:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialClicked */
- (void)onInterstitialDismissed:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialDismissed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubInterstitial$InterstitialAdListener")
@interface MPDroidMoPubInterstitialInterstitialAdListener : JavaObject <MPDroidMoPubInterstitialInterstitialAdListener>

//properties for handlers
@property (nonatomic, copy) void (^onInterstitialLoadedHandler)(MPDroidMoPubInterstitial *);
@property (nonatomic, copy) void (^onInterstitialFailedMoPubErrorCodeHandler)(MPDroidMoPubInterstitial *, MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onInterstitialShownHandler)(MPDroidMoPubInterstitial *);
@property (nonatomic, copy) void (^onInterstitialClickedHandler)(MPDroidMoPubInterstitial *);
@property (nonatomic, copy) void (^onInterstitialDismissedHandler)(MPDroidMoPubInterstitial *);


//convenience class method
+ (MPDroidMoPubInterstitialInterstitialAdListener *)listener;

@end