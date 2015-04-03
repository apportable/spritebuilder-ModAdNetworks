//
//  MPDroidDefaultInterstitialAdListener.m
// 
//  Bridges to the java object com.mopub.mobileads.DefaultInterstitialAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/DefaultInterstitialAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDefaultInterstitialAdListener.h>
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubInterstitial.h>


@implementation MPDroidDefaultInterstitialAdListener


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, instance) onInterstitialLoaded: = onInterstitialLoaded;
@bridge (method, instance) onInterstitialFailed:moPubErrorCode: = onInterstitialFailed;
@bridge (method, instance) onInterstitialShown: = onInterstitialShown;
@bridge (method, instance) onInterstitialClicked: = onInterstitialClicked;
@bridge (method, instance) onInterstitialDismissed: = onInterstitialDismissed;


@end
