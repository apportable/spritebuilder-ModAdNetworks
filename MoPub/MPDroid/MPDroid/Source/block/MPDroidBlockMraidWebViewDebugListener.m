//
//  MPDroidBlockMraidWebViewDebugListener.m
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidWebViewDebugListener
//  See MPDroid/MPDroidBlockMraidWebViewDebugListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockMraidWebViewDebugListener.h"
//other required types
#import <AndroidKit/AndroidJsResult.h>
#import <AndroidKit/AndroidConsoleMessage.h>


@implementation MPDroidBlockMraidWebViewDebugListener

// overrides
- (BOOL)onJsAlert:(NSString *)message jsResult:(AndroidJsResult *)result
{
    if (self.onJsAlertJsResultHandler)
    {
        return self.onJsAlertJsResultHandler(message, result);
    }
    return (BOOL)0;
}

- (BOOL)onConsoleMessage:(AndroidConsoleMessage *)consoleMessage
{
    if (self.onConsoleMessageHandler)
    {
        return self.onConsoleMessageHandler(consoleMessage);
    }
    return (BOOL)0;
}



// bridges
@bridge (callback) onJsAlert:jsResult: = onJsAlert;
@bridge (callback) onConsoleMessage: = onConsoleMessage;


@end
