//
//  MPDroidMoPubViewOnAdClosedListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.OnAdClosedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdClosedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewOnAdClosedListener.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewOnAdClosedListener.h"


@implementation MPDroidMoPubViewOnAdClosedListener

//properties
@bridge (method, instance) OnAdClosed: = OnAdClosed;


//methods


//convenience class method
+ (MPDroidMoPubViewOnAdClosedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdClosedHandler
{
    MPDroidMoPubViewOnAdClosedListener *listener = [[MPDroidBlockMoPubViewOnAdClosedListener alloc] init];
    listener.OnAdClosedHandler = OnAdClosedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnAdClosedHandler != nil)
    {
        Block_release(_OnAdClosedHandler);
        _OnAdClosedHandler = nil;
    }
    [super dealloc];
}


@end
