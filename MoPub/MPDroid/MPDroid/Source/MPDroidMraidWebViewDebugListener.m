//
//  MPDroidMraidWebViewDebugListener.m
// 
//  An adapter to the java interface com.mopub.mraid.MraidWebViewDebugListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidWebViewDebugListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMraidWebViewDebugListener.h>
//other required types
#import <AndroidKit/AndroidJsResult.h>
#import <AndroidKit/AndroidConsoleMessage.h>
#import "block/include/MPDroidBlockMraidWebViewDebugListener.h"


@implementation MPDroidMraidWebViewDebugListener

//properties
@bridge (method, instance) onConsoleMessage: = onConsoleMessage;
@bridge (method, instance) onJsAlert:jsResult: = onJsAlert;


//methods


//convenience class method
+ (MPDroidMraidWebViewDebugListener *)listener
{
    return [[[MPDroidBlockMraidWebViewDebugListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onJsAlertJsResultHandler != nil)
    {
        Block_release(_onJsAlertJsResultHandler);
        _onJsAlertJsResultHandler = nil;
    }
    if (_onConsoleMessageHandler != nil)
    {
        Block_release(_onConsoleMessageHandler);
        _onConsoleMessageHandler = nil;
    }
    [super dealloc];
}


@end
