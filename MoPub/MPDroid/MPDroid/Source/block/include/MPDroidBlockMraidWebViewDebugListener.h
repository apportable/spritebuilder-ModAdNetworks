//
//  MPDroidBlockMraidWebViewDebugListener.h
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidWebViewDebugListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidWebViewDebugListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidWebViewDebugListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMraidWebViewDebugListener")
@interface MPDroidBlockMraidWebViewDebugListener : MPDroidMraidWebViewDebugListener

//methods
- (BOOL)onJsAlert:(NSString *)message jsResult:(AndroidJsResult *)result;
- (BOOL)onConsoleMessage:(AndroidConsoleMessage *)consoleMessage;


@end
