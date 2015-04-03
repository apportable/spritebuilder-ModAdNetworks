//
//  MPDroidBlockMraidControllerUseCustomCloseListener.m
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidController.UseCustomCloseListener
//  See MPDroid/MPDroidBlockMraidControllerUseCustomCloseListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMraidControllerUseCustomCloseListener.h"
//other required types


@implementation MPDroidBlockMraidControllerUseCustomCloseListener

// overrides
- (void)useCustomCloseChanged:(BOOL)useCustomClose
{
    if (self.useCustomCloseChangedHandler)
    {
        self.useCustomCloseChangedHandler(useCustomClose);
    }
}



// bridges
@bridge (callback) useCustomCloseChanged: = useCustomCloseChanged;


@end
