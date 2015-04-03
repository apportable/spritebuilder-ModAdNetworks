//
//  MPDroidMoPubInterstitialInterstitialAdListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubInterstitial.InterstitialAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubInterstitial.InterstitialAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubInterstitialInterstitialAdListener.h>
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubInterstitial.h>
#import "block/include/MPDroidBlockMoPubInterstitialInterstitialAdListener.h"


@implementation MPDroidMoPubInterstitialInterstitialAdListener

//properties
@bridge (method, instance) onInterstitialClicked: = onInterstitialClicked;
@bridge (method, instance) onInterstitialDismissed: = onInterstitialDismissed;
@bridge (method, instance) onInterstitialFailed:moPubErrorCode: = onInterstitialFailed;
@bridge (method, instance) onInterstitialLoaded: = onInterstitialLoaded;
@bridge (method, instance) onInterstitialShown: = onInterstitialShown;


//methods


//convenience class method
+ (MPDroidMoPubInterstitialInterstitialAdListener *)listener
{
    return [[[MPDroidBlockMoPubInterstitialInterstitialAdListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onInterstitialLoadedHandler != nil)
    {
        Block_release(_onInterstitialLoadedHandler);
        _onInterstitialLoadedHandler = nil;
    }
    if (_onInterstitialFailedMoPubErrorCodeHandler != nil)
    {
        Block_release(_onInterstitialFailedMoPubErrorCodeHandler);
        _onInterstitialFailedMoPubErrorCodeHandler = nil;
    }
    if (_onInterstitialShownHandler != nil)
    {
        Block_release(_onInterstitialShownHandler);
        _onInterstitialShownHandler = nil;
    }
    if (_onInterstitialClickedHandler != nil)
    {
        Block_release(_onInterstitialClickedHandler);
        _onInterstitialClickedHandler = nil;
    }
    if (_onInterstitialDismissedHandler != nil)
    {
        Block_release(_onInterstitialDismissedHandler);
        _onInterstitialDismissedHandler = nil;
    }
    [super dealloc];
}


@end
