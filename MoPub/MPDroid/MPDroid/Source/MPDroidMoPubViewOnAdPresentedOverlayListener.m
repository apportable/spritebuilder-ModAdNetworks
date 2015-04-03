//
//  MPDroidMoPubViewOnAdPresentedOverlayListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.OnAdPresentedOverlayListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdPresentedOverlayListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewOnAdPresentedOverlayListener.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewOnAdPresentedOverlayListener.h"


@implementation MPDroidMoPubViewOnAdPresentedOverlayListener

//properties
@bridge (method, instance) OnAdPresentedOverlay: = OnAdPresentedOverlay;


//methods


//convenience class method
+ (MPDroidMoPubViewOnAdPresentedOverlayListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdPresentedOverlayHandler
{
    MPDroidMoPubViewOnAdPresentedOverlayListener *listener = [[MPDroidBlockMoPubViewOnAdPresentedOverlayListener alloc] init];
    listener.OnAdPresentedOverlayHandler = OnAdPresentedOverlayHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnAdPresentedOverlayHandler != nil)
    {
        Block_release(_OnAdPresentedOverlayHandler);
        _OnAdPresentedOverlayHandler = nil;
    }
    [super dealloc];
}


@end
