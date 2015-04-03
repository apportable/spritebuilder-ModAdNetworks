//
//  MPDroidDefaultInterstitialAdListener.h
// 
//  Bridges to the java object com.mopub.mobileads.DefaultInterstitialAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/DefaultInterstitialAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidMoPubInterstitialInterstitialAdListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidMoPubErrorCode;
@class MPDroidMoPubInterstitial;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDefaultInterstitialAdListener
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.DefaultInterstitialAdListener")
@interface MPDroidDefaultInterstitialAdListener : JavaObject <MPDroidMoPubInterstitialInterstitialAdListener>

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)onInterstitialLoaded:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialLoaded */
- (void)onInterstitialFailed:(MPDroidMoPubInterstitial *)interstitial moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode; /* onInterstitialFailed */
- (void)onInterstitialShown:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialShown */
- (void)onInterstitialClicked:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialClicked */
- (void)onInterstitialDismissed:(MPDroidMoPubInterstitial *)interstitial; /* onInterstitialDismissed */


@end
