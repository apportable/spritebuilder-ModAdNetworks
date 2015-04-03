//
//  MPDroidMoPubViewOnAdLoadedListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.OnAdLoadedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdLoadedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewOnAdLoadedListener.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewOnAdLoadedListener.h"


@implementation MPDroidMoPubViewOnAdLoadedListener

//properties
@bridge (method, instance) OnAdLoaded: = OnAdLoaded;


//methods


//convenience class method
+ (MPDroidMoPubViewOnAdLoadedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdLoadedHandler
{
    MPDroidMoPubViewOnAdLoadedListener *listener = [[MPDroidBlockMoPubViewOnAdLoadedListener alloc] init];
    listener.OnAdLoadedHandler = OnAdLoadedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnAdLoadedHandler != nil)
    {
        Block_release(_OnAdLoadedHandler);
        _OnAdLoadedHandler = nil;
    }
    [super dealloc];
}


@end
