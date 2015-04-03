//
//  MPDroidBlockResponseListener.m
//
//  A block-based way adapt to the java interface com.mopub.volley.Response.Listener
//  See MPDroid/MPDroidBlockResponseListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockResponseListener.h"
//other required types


@implementation MPDroidBlockResponseListener

// overrides
- (void)onResponse:(JavaObject *)response
{
    if (self.onResponseHandler)
    {
        self.onResponseHandler(response);
    }
}



// bridges
@bridge (callback) onResponse: = onResponse;


@end
