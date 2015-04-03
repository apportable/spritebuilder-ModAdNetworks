//
//  MPDroidBlockResponseErrorListener.m
//
//  A block-based way adapt to the java interface com.mopub.volley.Response.ErrorListener
//  See MPDroid/MPDroidBlockResponseErrorListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockResponseErrorListener.h"
//other required types
#import <MPDroid/MPDroidVolleyError.h>


@implementation MPDroidBlockResponseErrorListener

// overrides
- (void)onErrorResponse:(MPDroidVolleyError *)error
{
    if (self.onErrorResponseHandler)
    {
        self.onErrorResponseHandler(error);
    }
}



// bridges
@bridge (callback) onErrorResponse: = onErrorResponse;


@end
