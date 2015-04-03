//
//  MPDroidMoPubViewOnAdFailedListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.OnAdFailedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdFailedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewOnAdFailedListener.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewOnAdFailedListener.h"


@implementation MPDroidMoPubViewOnAdFailedListener

//properties
@bridge (method, instance) OnAdFailed: = OnAdFailed;


//methods


//convenience class method
+ (MPDroidMoPubViewOnAdFailedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdFailedHandler
{
    MPDroidMoPubViewOnAdFailedListener *listener = [[MPDroidBlockMoPubViewOnAdFailedListener alloc] init];
    listener.OnAdFailedHandler = OnAdFailedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnAdFailedHandler != nil)
    {
        Block_release(_OnAdFailedHandler);
        _OnAdFailedHandler = nil;
    }
    [super dealloc];
}


@end
