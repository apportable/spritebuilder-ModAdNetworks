//
//  MPDroidMoPubNativeAdLoadedListener.m
// 
//  An adapter to the java interface com.mopub.nativeads.MoPubNativeAdLoadedListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdLoadedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubNativeAdLoadedListener.h>
//other required types
#import "block/include/MPDroidBlockMoPubNativeAdLoadedListener.h"


@implementation MPDroidMoPubNativeAdLoadedListener

//properties
@bridge (method, instance) onAdLoaded: = onAdLoaded;
@bridge (method, instance) onAdRemoved: = onAdRemoved;


//methods


//convenience class method
+ (MPDroidMoPubNativeAdLoadedListener *)listener
{
    return [[[MPDroidBlockMoPubNativeAdLoadedListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onAdLoadedHandler != nil)
    {
        Block_release(_onAdLoadedHandler);
        _onAdLoadedHandler = nil;
    }
    if (_onAdRemovedHandler != nil)
    {
        Block_release(_onAdRemovedHandler);
        _onAdRemovedHandler = nil;
    }
    [super dealloc];
}


@end
