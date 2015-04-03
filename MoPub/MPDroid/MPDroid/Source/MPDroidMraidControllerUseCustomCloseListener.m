//
//  MPDroidMraidControllerUseCustomCloseListener.m
// 
//  An adapter to the java interface com.mopub.mraid.MraidController.UseCustomCloseListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.UseCustomCloseListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMraidControllerUseCustomCloseListener.h>
//other required types
#import "block/include/MPDroidBlockMraidControllerUseCustomCloseListener.h"


@implementation MPDroidMraidControllerUseCustomCloseListener

//properties
@bridge (method, instance) useCustomCloseChanged: = useCustomCloseChanged;


//methods


//convenience class method
+ (MPDroidMraidControllerUseCustomCloseListener *)listenerWithBlock:(void (^)(BOOL))useCustomCloseChangedHandler
{
    MPDroidMraidControllerUseCustomCloseListener *listener = [[MPDroidBlockMraidControllerUseCustomCloseListener alloc] init];
    listener.useCustomCloseChangedHandler = useCustomCloseChangedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_useCustomCloseChangedHandler != nil)
    {
        Block_release(_useCustomCloseChangedHandler);
        _useCustomCloseChangedHandler = nil;
    }
    [super dealloc];
}


@end
