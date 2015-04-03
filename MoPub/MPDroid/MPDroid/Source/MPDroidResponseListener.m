//
//  MPDroidResponseListener.m
// 
//  An adapter to the java interface com.mopub.volley.Response.Listener
//  See http://developer.android.com/reference/com/mopub/volley/Response.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidResponseListener.h>
//other required types
#import "block/include/MPDroidBlockResponseListener.h"


@implementation MPDroidResponseListener

//properties
@bridge (method, instance) onResponse: = onResponse;


//methods


//convenience class method
+ (MPDroidResponseListener *)listenerWithBlock:(void (^)(JavaObject *))onResponseHandler
{
    MPDroidResponseListener *listener = [[MPDroidBlockResponseListener alloc] init];
    listener.onResponseHandler = onResponseHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onResponseHandler != nil)
    {
        Block_release(_onResponseHandler);
        _onResponseHandler = nil;
    }
    [super dealloc];
}


@end
