//
//  MPDroidMraidControllerMraidListener.m
// 
//  An adapter to the java interface com.mopub.mraid.MraidController.MraidListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.MraidListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMraidControllerMraidListener.h>
//other required types
#import <AndroidKit/AndroidView.h>
#import "block/include/MPDroidBlockMraidControllerMraidListener.h"


@implementation MPDroidMraidControllerMraidListener

//properties
@bridge (method, instance) onClose = onClose;
@bridge (method, instance) onExpand = onExpand;
@bridge (method, instance) onFailedToLoad = onFailedToLoad;
@bridge (method, instance) onLoaded: = onLoaded;
@bridge (method, instance) onOpen = onOpen;


//methods


//convenience class method
+ (MPDroidMraidControllerMraidListener *)listener
{
    return [[[MPDroidBlockMraidControllerMraidListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onLoadedHandler != nil)
    {
        Block_release(_onLoadedHandler);
        _onLoadedHandler = nil;
    }
    if (_onFailedToLoadHandler != nil)
    {
        Block_release(_onFailedToLoadHandler);
        _onFailedToLoadHandler = nil;
    }
    if (_onExpandHandler != nil)
    {
        Block_release(_onExpandHandler);
        _onExpandHandler = nil;
    }
    if (_onOpenHandler != nil)
    {
        Block_release(_onOpenHandler);
        _onOpenHandler = nil;
    }
    if (_onCloseHandler != nil)
    {
        Block_release(_onCloseHandler);
        _onCloseHandler = nil;
    }
    [super dealloc];
}


@end
