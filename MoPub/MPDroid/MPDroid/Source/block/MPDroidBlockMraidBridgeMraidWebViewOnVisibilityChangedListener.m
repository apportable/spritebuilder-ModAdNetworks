//
//  MPDroidBlockMraidBridgeMraidWebViewOnVisibilityChangedListener.m
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidBridge.MraidWebView.OnVisibilityChangedListener
//  See MPDroid/MPDroidBlockMraidBridgeMraidWebViewOnVisibilityChangedListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMraidBridgeMraidWebViewOnVisibilityChangedListener.h"
//other required types


@implementation MPDroidBlockMraidBridgeMraidWebViewOnVisibilityChangedListener

// overrides
- (void)onVisibilityChanged:(BOOL)isVisible
{
    if (self.onVisibilityChangedHandler)
    {
        self.onVisibilityChangedHandler(isVisible);
    }
}



// bridges
@bridge (callback) onVisibilityChanged: = onVisibilityChanged;


@end
