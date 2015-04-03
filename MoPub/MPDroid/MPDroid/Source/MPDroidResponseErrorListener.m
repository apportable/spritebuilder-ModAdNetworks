//
//  MPDroidResponseErrorListener.m
// 
//  An adapter to the java interface com.mopub.volley.Response.ErrorListener
//  See http://developer.android.com/reference/com/mopub/volley/Response.ErrorListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidResponseErrorListener.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import "block/include/MPDroidBlockResponseErrorListener.h"


@implementation MPDroidResponseErrorListener

//properties
@bridge (method, instance) onErrorResponse: = onErrorResponse;


//methods


//convenience class method
+ (MPDroidResponseErrorListener *)listenerWithBlock:(void (^)(MPDroidVolleyError *))onErrorResponseHandler
{
    MPDroidResponseErrorListener *listener = [[MPDroidBlockResponseErrorListener alloc] init];
    listener.onErrorResponseHandler = onErrorResponseHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onErrorResponseHandler != nil)
    {
        Block_release(_onErrorResponseHandler);
        _onErrorResponseHandler = nil;
    }
    [super dealloc];
}


@end
