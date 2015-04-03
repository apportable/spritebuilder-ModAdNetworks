//
//  MPDroidBlockCloseableLayoutOnCloseListener.m
//
//  A block-based way adapt to the java interface com.mopub.common.CloseableLayout.OnCloseListener
//  See MPDroid/MPDroidBlockCloseableLayoutOnCloseListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockCloseableLayoutOnCloseListener.h"
//other required types


@implementation MPDroidBlockCloseableLayoutOnCloseListener

// overrides
- (void)onClose
{
    if (self.onCloseHandler)
    {
        self.onCloseHandler();
    }
}



// bridges
@bridge (callback) onClose = onClose;


@end
