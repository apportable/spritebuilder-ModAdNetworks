//
//  MPDroidMoPubView.h
// 
//  Bridges to the java object com.mopub.mobileads.MoPubView
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidFrameLayout.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidMoPubViewBannerAdListener;
@protocol MPDroidMoPubViewOnAdFailedListener;
@class AndroidBroadcastReceiver;
@class MPDroidAdViewController;
@class MPDroidCustomEventBannerAdapter;
@class MPDroidMoPubErrorCode;
@class AndroidContext;
@class AndroidLocation;
@protocol AndroidAttributeSet;
@protocol MPDroidMoPubViewOnAdClosedListener;
@protocol MPDroidMoPubViewOnAdLoadedListener;
@protocol MPDroidMoPubViewOnAdWillLoadListener;
@class AndroidActivity;
@protocol MPDroidMoPubViewOnAdPresentedOverlayListener;
@protocol JavaMap;
@class AndroidView;
@class MPDroidAdFormat;
@class JavaInteger;
@class MPDroidLocationServiceLocationAwareness;
@protocol MPDroidMoPubViewOnAdClickedListener;


//defines and their comments (static fields with values)
#define MPDroidMoPubViewDefaultLocationPrecision 6

/**
Java class: MPDroidMoPubView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MoPubView")
@interface MPDroidMoPubView : AndroidFrameLayout 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context attributeSet:(JavaObject <AndroidAttributeSet> *)attributes; /* <init> */


// properties
@property (nonatomic, retain) JavaObject <MPDroidMoPubViewBannerAdListener> *bannerAdListener; /* getBannerAdListener, setBannerAdListener */
@property (nonatomic, assign) BOOL autorefreshEnabled; /* getAutorefreshEnabled, setAutorefreshEnabled */
@property (nonatomic, readonly, assign) int32_t adWidth; /* getAdWidth */
@property (nonatomic, copy) NSString *adUnitId; /* getAdUnitId, setAdUnitId */
@property (nonatomic, retain) JavaObject <JavaMap> *localExtras; /* getLocalExtras, setLocalExtras */
@property (nonatomic, readonly, copy) NSString *responseString; /* getResponseString */
@property (nonatomic, retain) AndroidLocation *location; /* getLocation, setLocation */
@property (nonatomic, readonly, copy) NSString *clickTrackingUrl; /* getClickTrackingUrl */
@property (nonatomic, copy) NSString *keywords; /* getKeywords, setKeywords */
@property (nonatomic, readonly, retain) AndroidActivity *activity; /* getActivity */
@property (nonatomic, assign) BOOL testing; /* getTesting, setTesting */
@property (nonatomic, readonly, retain) MPDroidAdFormat *adFormat; /* getAdFormat */
@property (nonatomic, readonly, assign) int32_t adHeight; /* getAdHeight */


//static valueless fields


// methods
- (void)loadAd; /* loadAd */
- (void)destroy; /* destroy */
- (void)setTimeout:(int32_t)milliseconds; /* setTimeout */
- (void)setAdContentView:(AndroidView *)view; /* setAdContentView */
- (void)forceRefresh; /* forceRefresh */


@end
