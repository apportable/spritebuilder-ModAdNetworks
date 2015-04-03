//
//  MPDroidEventForwardingBroadcastReceiver.h
// 
//  Bridges to the java object com.mopub.mobileads.EventForwardingBroadcastReceiver
//  See http://developer.android.com/reference/com/mopub/mobileads/EventForwardingBroadcastReceiver.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidBroadcastReceiver.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidIntent;
@class AndroidContext;
@class AndroidIntentFilter;
@protocol MPDroidCustomEventInterstitialCustomEventInterstitialListener;


//defines and their comments (static fields with values)
#define MPDroidEventForwardingBroadcastReceiverActionInterstitialFail @"com.mopub.action.interstitial.fail"
#define MPDroidEventForwardingBroadcastReceiverActionInterstitialShow @"com.mopub.action.interstitial.show"
#define MPDroidEventForwardingBroadcastReceiverActionInterstitialDismiss @"com.mopub.action.interstitial.dismiss"
#define MPDroidEventForwardingBroadcastReceiverActionInterstitialClick @"com.mopub.action.interstitial.click"

/**
Java class: MPDroidEventForwardingBroadcastReceiver
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.EventForwardingBroadcastReceiver")
@interface MPDroidEventForwardingBroadcastReceiver : AndroidBroadcastReceiver 

// constructors
- (instancetype)initWithCustomEventInterstitialListener:(JavaObject <MPDroidCustomEventInterstitialCustomEventInterstitialListener> *)customEventInterstitialListener broadcastIdentifier:(int64_t)broadcastIdentifier; /* <init> */


// properties


//static valueless fields


// methods
+ (AndroidIntentFilter *)htmlInterstitialIntentFilter; /* getHtmlInterstitialIntentFilter */
- (void)onReceive:(AndroidContext *)context intent:(AndroidIntent *)intent; /* onReceive */
- (void)registerWithContext:(AndroidContext *)context; /* register */
- (void)unregister; /* unregister */


@end
