//
//  MPDroidMoPubInterstitialMoPubInterstitialListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubInterstitial.MoPubInterstitialListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.MoPubInterstitialListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubInterstitialMoPubInterstitialListener.h>
//other required types
#import "block/include/MPDroidBlockMoPubInterstitialMoPubInterstitialListener.h"


@implementation MPDroidMoPubInterstitialMoPubInterstitialListener

//properties
@bridge (method, instance) OnInterstitialFailed = OnInterstitialFailed;
@bridge (method, instance) OnInterstitialLoaded = OnInterstitialLoaded;


//methods


//convenience class method
+ (MPDroidMoPubInterstitialMoPubInterstitialListener *)listener
{
    return [[[MPDroidBlockMoPubInterstitialMoPubInterstitialListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnInterstitialLoadedHandler != nil)
    {
        Block_release(_OnInterstitialLoadedHandler);
        _OnInterstitialLoadedHandler = nil;
    }
    if (_OnInterstitialFailedHandler != nil)
    {
        Block_release(_OnInterstitialFailedHandler);
        _OnInterstitialFailedHandler = nil;
    }
    [super dealloc];
}


@end
