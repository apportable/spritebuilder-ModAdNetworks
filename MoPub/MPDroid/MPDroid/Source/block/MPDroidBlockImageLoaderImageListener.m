//
//  MPDroidBlockImageLoaderImageListener.m
//
//  A block-based way adapt to the java interface com.mopub.volley.toolbox.ImageLoader.ImageListener
//  See MPDroid/MPDroidBlockImageLoaderImageListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockImageLoaderImageListener.h"
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidImageLoaderImageContainer.h>


@implementation MPDroidBlockImageLoaderImageListener

// overrides
- (void)onResponse:(MPDroidImageLoaderImageContainer *)imageContainer isImmediate:(BOOL)isImmediate
{
    if (self.onResponseIsImmediateHandler)
    {
        self.onResponseIsImmediateHandler(imageContainer, isImmediate);
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
@bridge (callback) onResponse:isImmediate: = onResponse;
@bridge (callback) onErrorResponse: = onErrorResponse;


@end
