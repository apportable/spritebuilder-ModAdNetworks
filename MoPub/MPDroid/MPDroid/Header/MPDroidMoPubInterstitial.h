//
//  MPDroidMoPubInterstitial.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubInterstitial
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidMoPubInterstitialInterstitialAdListener;
@class MPDroidMoPubErrorCode;
@class MPDroidMoPubInterstitialMoPubInterstitialView;
@protocol MPDroidMoPubInterstitialMoPubInterstitialListener;
@protocol JavaMap;
@class JavaInteger;
@class AndroidActivity;
@class MPDroidLocationServiceLocationAwareness;
@class AndroidLocation;
@class MPDroidCustomEventInterstitialAdapter;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubInterstitial
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubInterstitial")
@interface MPDroidMoPubInterstitial : JavaObject 

// constructors
- (instancetype)initWithActivity:(AndroidActivity *)activity identifier:(NSString *)identifier; /* <init> */


// properties
@property (nonatomic, readonly, getter=isReady, assign) BOOL ready; /* isReady */
@property (nonatomic, readonly, retain) AndroidLocation *location; /* getLocation */
@property (nonatomic, copy) NSString *keywords; /* getKeywords, setKeywords */
@property (nonatomic, readonly, assign) BOOL show; /* show */
@property (nonatomic, retain) JavaObject <JavaMap> *localExtras; /* getLocalExtras, setLocalExtras */
@property (nonatomic, readonly, retain) AndroidActivity *activity; /* getActivity */
@property (nonatomic, retain) JavaObject <MPDroidMoPubInterstitialInterstitialAdListener> *interstitialAdListener; /* getInterstitialAdListener, setInterstitialAdListener */
@property (nonatomic, assign) BOOL testing; /* getTesting, setTesting */


//static valueless fields


// methods
- (void)load; /* load */
- (void)forceRefresh; /* forceRefresh */
- (void)destroy; /* destroy */
- (void)onCustomEventInterstitialLoaded; /* onCustomEventInterstitialLoaded */
- (void)onCustomEventInterstitialFailed:(MPDroidMoPubErrorCode *)errorCode; /* onCustomEventInterstitialFailed */
- (void)onCustomEventInterstitialShown; /* onCustomEventInterstitialShown */
- (void)onCustomEventInterstitialClicked; /* onCustomEventInterstitialClicked */
- (void)onCustomEventInterstitialDismissed; /* onCustomEventInterstitialDismissed */


@end
