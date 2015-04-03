//
//  MPDroidMraidActivity.m
// 
//  Bridges to the java object com.mopub.mobileads.MraidActivity
//  See http://developer.android.com/reference/com/mopub/mobileads/MraidActivity.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidActivity.h>
//other required types
#import <AndroidKit/AndroidBundle.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>
#import <AndroidKit/AndroidView.h>
#import <AndroidKit/AndroidIntent.h>
#import <MPDroid/MPDroidMraidWebViewDebugListener.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidMraidController.h>


@implementation MPDroidMraidActivity


//constructors
@bridge (constructor) init;


//properties
@bridge (instance, method) adView = getAdView;



//methods
@bridge (method, static) preRenderHtml:customEventInterstitialListener:htmlData: = preRenderHtml;
@bridge (method, static) startWithContext:adReport:htmlData:broadcastIdentifier: = start;
@bridge (method, instance) onCreate: = onCreate;
@bridge (method, instance) setDebugListener: = setDebugListener;


@end
