//
//  MPDroidMraidActivity.h
// 
//  Bridges to the java object com.mopub.mobileads.MraidActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/MraidActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidActivity.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidBundle;
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;
@class AndroidView;
@class AndroidIntent;
@protocol MPDroidMraidWebViewDebugListener;
@class AndroidContext;
@class MPDroidAdReport;
@class MPDroidMraidController;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidActivity
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.MraidActivity")
@interface MPDroidMraidActivity : AndroidActivity 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, retain) AndroidView *adView; /* getAdView */


//static valueless fields


// methods
+ (void)preRenderHtml:(AndroidContext *)context customEventInterstitialListener:(JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener> *)customEventInterstitialListener htmlData:(NSString *)htmlData; /* preRenderHtml */
+ (void)startWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adreport htmlData:(NSString *)htmlData broadcastIdentifier:(int64_t)broadcastIdentifier; /* start */
- (void)onCreate:(AndroidBundle *)savedInstanceState; /* onCreate */
- (void)setDebugListener:(JavaObject <MPDroidMraidWebViewDebugListener> *)debugListener; /* setDebugListener */


@end
