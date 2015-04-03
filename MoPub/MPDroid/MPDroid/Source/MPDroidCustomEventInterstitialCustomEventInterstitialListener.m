//
//  MPDroidCustomEventInterstitialCustomEventInterstitialListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.CustomEventInterstitial.CustomEventInterstitialListener
//  See http://developer.android.com/reference/com/mopub/mobileads/CustomEventInterstitial.CustomEventInterstitialListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCustomEventInterstitialCustomEventInterstitialListener.h>
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import "block/include/MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener.h"


@implementation MPDroidCustomEventInterstitialCustomEventInterstitialListener

//properties
@bridge (method, instance) onInterstitialClicked = onInterstitialClicked;
@bridge (method, instance) onInterstitialDismissed = onInterstitialDismissed;
@bridge (method, instance) onInterstitialFailed: = onInterstitialFailed;
@bridge (method, instance) onInterstitialLoaded = onInterstitialLoaded;
@bridge (method, instance) onInterstitialShown = onInterstitialShown;
@bridge (method, instance) onLeaveApplication = onLeaveApplication;


//methods


//convenience class method
+ (MPDroidCustomEventInterstitialCustomEventInterstitialListener *)listener
{
    return [[[MPDroidBlockCustomEventInterstitialCustomEventInterstitialListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onInterstitialLoadedHandler != nil)
    {
        Block_release(_onInterstitialLoadedHandler);
        _onInterstitialLoadedHandler = nil;
    }
    if (_onInterstitialFailedHandler != nil)
    {
        Block_release(_onInterstitialFailedHandler);
        _onInterstitialFailedHandler = nil;
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
    if (_onLeaveApplicationHandler != nil)
    {
        Block_release(_onLeaveApplicationHandler);
        _onLeaveApplicationHandler = nil;
    }
    if (_onInterstitialDismissedHandler != nil)
    {
        Block_release(_onInterstitialDismissedHandler);
        _onInterstitialDismissedHandler = nil;
    }
    [super dealloc];
}


@end
