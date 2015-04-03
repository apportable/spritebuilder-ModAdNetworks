//
//  MPDroidBaseVideoViewControllerBaseVideoViewControllerListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.BaseVideoViewController.BaseVideoViewControllerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseVideoViewController.BaseVideoViewControllerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidBaseVideoViewControllerBaseVideoViewControllerListener.h>
//other required types
#import <AndroidKit/AndroidView.h>
#import <JavaKit/JavaClass.h>
#import <AndroidKit/AndroidBundle.h>
#import "block/include/MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener.h"


@implementation MPDroidBaseVideoViewControllerBaseVideoViewControllerListener

//properties
@bridge (method, instance) onFinish = onFinish;
@bridge (method, instance) onSetContentView: = onSetContentView;
@bridge (method, instance) onSetRequestedOrientation: = onSetRequestedOrientation;
@bridge (method, instance) onStartActivityForResult:requestCode:bundle: = onStartActivityForResult;


//methods


//convenience class method
+ (MPDroidBaseVideoViewControllerBaseVideoViewControllerListener *)listener
{
    return [[[MPDroidBlockBaseVideoViewControllerBaseVideoViewControllerListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onSetContentViewHandler != nil)
    {
        Block_release(_onSetContentViewHandler);
        _onSetContentViewHandler = nil;
    }
    if (_onSetRequestedOrientationHandler != nil)
    {
        Block_release(_onSetRequestedOrientationHandler);
        _onSetRequestedOrientationHandler = nil;
    }
    if (_onFinishHandler != nil)
    {
        Block_release(_onFinishHandler);
        _onFinishHandler = nil;
    }
    if (_onStartActivityForResultRequestCodeBundleHandler != nil)
    {
        Block_release(_onStartActivityForResultRequestCodeBundleHandler);
        _onStartActivityForResultRequestCodeBundleHandler = nil;
    }
    [super dealloc];
}


@end
