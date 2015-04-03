//
//  MPDroidBlockViewGestureDetectorUserClickListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.ViewGestureDetector.UserClickListener
//  See MPDroid/MPDroidBlockViewGestureDetectorUserClickListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockViewGestureDetectorUserClickListener.h"
//other required types


@implementation MPDroidBlockViewGestureDetectorUserClickListener

// overrides
- (void)onUserClick
{
    if (self.onUserClickHandler)
    {
        self.onUserClickHandler();
    }
}

- (void)onResetUserClick
{
    if (self.onResetUserClickHandler)
    {
        self.onResetUserClickHandler();
    }
}

- (BOOL)isWasClicked
{
    if (self.isWasClickedHandler)
    {
        return self.isWasClickedHandler();
    }
    return (BOOL)0;
}



// bridges
@bridge (callback) onUserClick = onUserClick;
@bridge (callback) onResetUserClick = onResetUserClick;
@bridge (callback) isWasClicked = wasClicked;


@end
