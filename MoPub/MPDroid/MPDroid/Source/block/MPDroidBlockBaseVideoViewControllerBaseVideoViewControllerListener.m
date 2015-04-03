//
//  MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.BaseVideoViewController.BaseVideoViewControllerListener
//  See MPDroid/MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener.h"
//other required types
#import <AndroidKit/AndroidView.h>
#import <JavaKit/JavaClass.h>
#import <AndroidKit/AndroidBundle.h>


@implementation MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener

// overrides
- (void)onSetContentView:(AndroidView *)view
{
    if (self.onSetContentViewHandler)
    {
        self.onSetContentViewHandler(view);
    }
}

- (void)onSetRequestedOrientation:(int32_t)requestedOrientation
{
    if (self.onSetRequestedOrientationHandler)
    {
        self.onSetRequestedOrientationHandler(requestedOrientation);
    }
}

- (void)onFinish
{
    if (self.onFinishHandler)
    {
        self.onFinishHandler();
    }
}

- (void)onStartActivityForResult:(JavaClass *)clazz requestCode:(int32_t)requestCode bundle:(AndroidBundle *)extras
{
    if (self.onStartActivityForResultRequestCodeBundleHandler)
    {
        self.onStartActivityForResultRequestCodeBundleHandler(clazz, requestCode, extras);
    }
}



// bridges
@bridge (callback) onSetContentView: = onSetContentView;
@bridge (callback) onSetRequestedOrientation: = onSetRequestedOrientation;
@bridge (callback) onFinish = onFinish;
@bridge (callback) onStartActivityForResult:requestCode:bundle: = onStartActivityForResult;


@end
