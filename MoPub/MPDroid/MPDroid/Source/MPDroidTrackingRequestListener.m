//
//  MPDroidTrackingRequestListener.m
// 
//  An adapter to the java interface com.mopub.network.TrackingRequest.Listener
//  See http://developer.android.com/reference/com/mopub/network/TrackingRequest.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidTrackingRequestListener.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import "block/include/MPDroidBlockTrackingRequestListener.h"


@implementation MPDroidTrackingRequestListener

//properties
@bridge (method, instance) onErrorResponse: = onErrorResponse;
@bridge (method, instance) onResponse = onResponse;


//methods


//convenience class method
+ (MPDroidTrackingRequestListener *)listenerWithBlock:(void (^)())onResponseHandler
{
    MPDroidTrackingRequestListener *listener = [[MPDroidBlockTrackingRequestListener alloc] init];
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
