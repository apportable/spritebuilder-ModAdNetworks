//
//  MPDroidAdRequestListener.m
// 
//  An adapter to the java interface com.mopub.network.AdRequest.Listener
//  See http://developer.android.com/reference/com/mopub/network/AdRequest.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidAdRequestListener.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidAdResponse.h>
#import "block/include/MPDroidBlockAdRequestListener.h"


@implementation MPDroidAdRequestListener

//properties
@bridge (method, instance) onErrorResponse: = onErrorResponse;
@bridge (method, instance) onSuccess: = onSuccess;


//methods


//convenience class method
+ (MPDroidAdRequestListener *)listenerWithBlock:(void (^)(MPDroidAdResponse *))onSuccessHandler
{
    MPDroidAdRequestListener *listener = [[MPDroidBlockAdRequestListener alloc] init];
    listener.onSuccessHandler = onSuccessHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onSuccessHandler != nil)
    {
        Block_release(_onSuccessHandler);
        _onSuccessHandler = nil;
    }
    [super dealloc];
}


@end
