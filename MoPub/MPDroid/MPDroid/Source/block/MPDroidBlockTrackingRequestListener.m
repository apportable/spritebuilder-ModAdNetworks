//
//  MPDroidBlockTrackingRequestListener.m
//
//  A block-based way adapt to the java interface com.mopub.network.TrackingRequest.Listener
//  See MPDroid/MPDroidBlockTrackingRequestListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockTrackingRequestListener.h"
//other required types
#import <MPDroid/MPDroidVolleyError.h>


@implementation MPDroidBlockTrackingRequestListener

// overrides
- (void)onResponse
{
    if (self.onResponseHandler)
    {
        self.onResponseHandler();
    }
}

- (void)onErrorResponse:(MPDroidVolleyError *)error
{
    if (self.onErrorResponseHandler)
    {
        self.onErrorResponseHandler(error);
    }
}



// bridges
@bridge (callback) onResponse = onResponse;
@bridge (callback) onErrorResponse: = onErrorResponse;


@end
