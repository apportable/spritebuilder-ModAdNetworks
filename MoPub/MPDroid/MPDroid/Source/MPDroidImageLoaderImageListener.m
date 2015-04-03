//
//  MPDroidImageLoaderImageListener.m
// 
//  An adapter to the java interface com.mopub.volley.toolbox.ImageLoader.ImageListener
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.ImageListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidImageLoaderImageListener.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidImageLoaderImageContainer.h>
#import "block/include/MPDroidBlockImageLoaderImageListener.h"


@implementation MPDroidImageLoaderImageListener

//properties
@bridge (method, instance) onErrorResponse: = onErrorResponse;
@bridge (method, instance) onResponse:isImmediate: = onResponse;


//methods


//convenience class method
+ (MPDroidImageLoaderImageListener *)listenerWithBlock:(void (^)(MPDroidImageLoaderImageContainer *, BOOL))onResponseIsImmediateHandler
{
    MPDroidImageLoaderImageListener *listener = [[MPDroidBlockImageLoaderImageListener alloc] init];
    listener.onResponseIsImmediateHandler = onResponseIsImmediateHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onResponseIsImmediateHandler != nil)
    {
        Block_release(_onResponseIsImmediateHandler);
        _onResponseIsImmediateHandler = nil;
    }
    [super dealloc];
}


@end
