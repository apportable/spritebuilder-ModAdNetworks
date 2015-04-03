//
//  MPDroidGpsHelperGpsHelperListener.m
// 
//  An adapter to the java interface com.mopub.common.GpsHelper.GpsHelperListener
//  See http://developer.android.com/reference/com/mopub/common/GpsHelper.GpsHelperListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidGpsHelperGpsHelperListener.h>
//other required types
#import "block/include/MPDroidBlockGpsHelperGpsHelperListener.h"


@implementation MPDroidGpsHelperGpsHelperListener

//properties
@bridge (method, instance) onFetchAdInfoCompleted = onFetchAdInfoCompleted;


//methods


//convenience class method
+ (MPDroidGpsHelperGpsHelperListener *)listenerWithBlock:(void (^)())onFetchAdInfoCompletedHandler
{
    MPDroidGpsHelperGpsHelperListener *listener = [[MPDroidBlockGpsHelperGpsHelperListener alloc] init];
    listener.onFetchAdInfoCompletedHandler = onFetchAdInfoCompletedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onFetchAdInfoCompletedHandler != nil)
    {
        Block_release(_onFetchAdInfoCompletedHandler);
        _onFetchAdInfoCompletedHandler = nil;
    }
    [super dealloc];
}


@end
