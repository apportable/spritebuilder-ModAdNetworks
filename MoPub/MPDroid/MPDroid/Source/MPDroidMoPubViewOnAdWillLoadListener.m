//
//  MPDroidMoPubViewOnAdWillLoadListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.MoPubView.OnAdWillLoadListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdWillLoadListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubViewOnAdWillLoadListener.h>
//other required types
#import <MPDroid/MPDroidMoPubView.h>
#import "block/include/MPDroidBlockMoPubViewOnAdWillLoadListener.h"


@implementation MPDroidMoPubViewOnAdWillLoadListener

//properties
@bridge (method, instance) OnAdWillLoad:stringParam: = OnAdWillLoad;


//methods


//convenience class method
+ (MPDroidMoPubViewOnAdWillLoadListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *, NSString *))OnAdWillLoadStringParamHandler
{
    MPDroidMoPubViewOnAdWillLoadListener *listener = [[MPDroidBlockMoPubViewOnAdWillLoadListener alloc] init];
    listener.OnAdWillLoadStringParamHandler = OnAdWillLoadStringParamHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_OnAdWillLoadStringParamHandler != nil)
    {
        Block_release(_OnAdWillLoadStringParamHandler);
        _OnAdWillLoadStringParamHandler = nil;
    }
    [super dealloc];
}


@end
