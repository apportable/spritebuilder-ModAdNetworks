//
//  MPDroidBlockAdRequestListener.m
//
//  A block-based way adapt to the java interface com.mopub.network.AdRequest.Listener
//  See MPDroid/MPDroidBlockAdRequestListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockAdRequestListener.h"
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidAdResponse.h>


@implementation MPDroidBlockAdRequestListener

// overrides
- (void)onSuccess:(MPDroidAdResponse *)response
{
    if (self.onSuccessHandler)
    {
        self.onSuccessHandler(response);
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
@bridge (callback) onSuccess: = onSuccess;
@bridge (callback) onErrorResponse: = onErrorResponse;


@end
