//
//  MPDroidCloseableLayoutOnCloseListener.m
// 
//  An adapter to the java interface com.mopub.common.CloseableLayout.OnCloseListener
//  See http://developer.android.com/reference/com/mopub/common/CloseableLayout.OnCloseListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCloseableLayoutOnCloseListener.h>
//other required types
#import "block/include/MPDroidBlockCloseableLayoutOnCloseListener.h"


@implementation MPDroidCloseableLayoutOnCloseListener

//properties
@bridge (method, instance) onClose = onClose;


//methods


//convenience class method
+ (MPDroidCloseableLayoutOnCloseListener *)listenerWithBlock:(void (^)())onCloseHandler
{
    MPDroidCloseableLayoutOnCloseListener *listener = [[MPDroidBlockCloseableLayoutOnCloseListener alloc] init];
    listener.onCloseHandler = onCloseHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onCloseHandler != nil)
    {
        Block_release(_onCloseHandler);
        _onCloseHandler = nil;
    }
    [super dealloc];
}


@end
