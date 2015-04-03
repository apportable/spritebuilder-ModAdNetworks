//
//  MPDroidMoPubViewBannerAdListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.BannerAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.BannerAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewBannerAdListener.h>
//other required types
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewBannerAdListener.h"


@implementation MPDroidMoPubViewBannerAdListener

//properties
@bridge (method, instance) onBannerClicked: = onBannerClicked;
@bridge (method, instance) onBannerCollapsed: = onBannerCollapsed;
@bridge (method, instance) onBannerExpanded: = onBannerExpanded;
@bridge (method, instance) onBannerFailed:moPubErrorCode: = onBannerFailed;
@bridge (method, instance) onBannerLoaded: = onBannerLoaded;


//methods


//convenience class method
+ (MPDroidMoPubViewBannerAdListener *)listener
{
    return [[[MPDroidBlockMoPubViewBannerAdListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onBannerLoadedHandler != nil)
    {
        Block_release(_onBannerLoadedHandler);
        _onBannerLoadedHandler = nil;
    }
    if (_onBannerFailedMoPubErrorCodeHandler != nil)
    {
        Block_release(_onBannerFailedMoPubErrorCodeHandler);
        _onBannerFailedMoPubErrorCodeHandler = nil;
    }
    if (_onBannerClickedHandler != nil)
    {
        Block_release(_onBannerClickedHandler);
        _onBannerClickedHandler = nil;
    }
    if (_onBannerExpandedHandler != nil)
    {
        Block_release(_onBannerExpandedHandler);
        _onBannerExpandedHandler = nil;
    }
    if (_onBannerCollapsedHandler != nil)
    {
        Block_release(_onBannerCollapsedHandler);
        _onBannerCollapsedHandler = nil;
    }
    [super dealloc];
}


@end
