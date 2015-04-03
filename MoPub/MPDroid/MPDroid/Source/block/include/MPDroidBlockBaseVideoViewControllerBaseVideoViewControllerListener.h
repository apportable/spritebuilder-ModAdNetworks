//
//  MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.BaseVideoViewController.BaseVideoViewControllerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseVideoViewController.BaseVideoViewControllerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidBaseVideoViewControllerBaseVideoViewControllerListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener")
@interface MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener : MPDroidBaseVideoViewControllerBaseVideoViewControllerListener

//methods
- (void)onSetContentView:(AndroidView *)view;
- (void)onSetRequestedOrientation:(int32_t)requestedOrientation;
- (void)onFinish;
- (void)onStartActivityForResult:(JavaClass *)clazz requestCode:(int32_t)requestCode bundle:(AndroidBundle *)extras;


@end
