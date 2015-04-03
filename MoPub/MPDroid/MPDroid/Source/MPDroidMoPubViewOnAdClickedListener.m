//
//  MPDroidMoPubViewOnAdClickedListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.OnAdClickedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdClickedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewOnAdClickedListener.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewOnAdClickedListener.h"


@implementation MPDroidMoPubViewOnAdClickedListener

//properties
@bridge (method, instance) OnAdClicked: = OnAdClicked;


//methods


//convenience class method
+ (MPDroidMoPubViewOnAdClickedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdClickedHandler
{
    MPDroidMoPubViewOnAdClickedListener *listener = [[MPDroidBlockMoPubViewOnAdClickedListener alloc] init];
    listener.OnAdClickedHandler = OnAdClickedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnAdClickedHandler != nil)
    {
        Block_release(_OnAdClickedHandler);
        _OnAdClickedHandler = nil;
    }
    [super dealloc];
}


@end
