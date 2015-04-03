//
//  MPDroidEventForwardingBroadcastReceiver.m
// 
//  Bridges to the java object com.mopub.mobileads.EventForwardingBroadcastReceiver
//  See http://developer.android.com/reference/com/mopub/mobileads/EventForwardingBroadcastReceiver.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidEventForwardingBroadcastReceiver.h>
//other required types
#import <AndroidKit/AndroidIntent.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidIntentFilter.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>


@implementation MPDroidEventForwardingBroadcastReceiver


//constructors
@bridge (constructor) initWithCustomEventInterstitialListener:broadcastIdentifier:;


//properties


//methods
@bridge (method, static) htmlInterstitialIntentFilter = getHtmlInterstitialIntentFilter;
@bridge (method, instance) onReceive:intent: = onReceive;
@bridge (method, instance) registerWithContext: = "register";
@bridge (method, instance) unregister = unregister;


@end
