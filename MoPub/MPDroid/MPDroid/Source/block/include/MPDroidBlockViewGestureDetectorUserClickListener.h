//
//  MPDroidBlockViewGestureDetectorUserClickListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.ViewGestureDetector.UserClickListener
//  See http://developer.android.com/reference/com/mopub/mobileads/ViewGestureDetector.UserClickListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidViewGestureDetectorUserClickListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockViewGestureDetectorUserClickListener")
@interface MPDroidBlockViewGestureDetectorUserClickListener : MPDroidViewGestureDetectorUserClickListener

//methods
- (void)onUserClick;
- (void)onResetUserClick;


@end
