//
//  MPDroidViewGestureDetectorUserClickListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.ViewGestureDetector.UserClickListener
//  See http://developer.android.com/reference/com/mopub/mobileads/ViewGestureDetector.UserClickListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidViewGestureDetectorUserClickListener.h>
//other required types
#import "block/include/MPDroidBlockViewGestureDetectorUserClickListener.h"


@implementation MPDroidViewGestureDetectorUserClickListener

//properties
@bridge (method, instance) onResetUserClick = onResetUserClick;
@bridge (method, instance) onUserClick = onUserClick;


//methods
@bridge (instance, method) wasClicked = wasClicked;



//convenience class method
+ (MPDroidViewGestureDetectorUserClickListener *)listener
{
    return [[[MPDroidBlockViewGestureDetectorUserClickListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onUserClickHandler != nil)
    {
        Block_release(_onUserClickHandler);
        _onUserClickHandler = nil;
    }
    if (_onResetUserClickHandler != nil)
    {
        Block_release(_onResetUserClickHandler);
        _onResetUserClickHandler = nil;
    }
    if (_isWasClickedHandler != nil)
    {
        Block_release(_isWasClickedHandler);
        _isWasClickedHandler = nil;
    }
    [super dealloc];
}


@end
