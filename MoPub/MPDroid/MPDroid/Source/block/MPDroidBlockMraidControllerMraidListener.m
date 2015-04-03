//
//  MPDroidBlockMraidControllerMraidListener.m
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidController.MraidListener
//  See MPDroid/MPDroidBlockMraidControllerMraidListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMraidControllerMraidListener.h"
//other required types
#import <AndroidKit/AndroidView.h>


@implementation MPDroidBlockMraidControllerMraidListener

// overrides
- (void)onLoaded:(AndroidView *)view
{
    if (self.onLoadedHandler)
    {
        self.onLoadedHandler(view);
    }
}

- (void)onFailedToLoad
{
    if (self.onFailedToLoadHandler)
    {
        self.onFailedToLoadHandler();
    }
}

- (void)onExpand
{
    if (self.onExpandHandler)
    {
        self.onExpandHandler();
    }
}

- (void)onOpen
{
    if (self.onOpenHandler)
    {
        self.onOpenHandler();
    }
}

- (void)onClose
{
    if (self.onCloseHandler)
    {
        self.onCloseHandler();
    }
}



// bridges
@bridge (callback) onLoaded: = onLoaded;
@bridge (callback) onFailedToLoad = onFailedToLoad;
@bridge (callback) onExpand = onExpand;
@bridge (callback) onOpen = onOpen;
@bridge (callback) onClose = onClose;


@end
