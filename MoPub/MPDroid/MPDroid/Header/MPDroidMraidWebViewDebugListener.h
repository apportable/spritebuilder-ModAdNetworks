//
//  MPDroidMraidWebViewDebugListener.h
// 
//  Bridges to the java interface com.mopub.mraid.MraidWebViewDebugListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidWebViewDebugListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidJsResult;
@class AndroidConsoleMessage;


//static fields


/**
Java interface: MPDroidMraidWebViewDebugListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mraid.MraidWebViewDebugListener")
@protocol MPDroidMraidWebViewDebugListener 

// properties


// methods
- (BOOL)onJsAlert:(NSString *)message jsResult:(AndroidJsResult *)result; /* onJsAlert */
- (BOOL)onConsoleMessage:(AndroidConsoleMessage *)consoleMessage; /* onConsoleMessage */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mraid.MraidWebViewDebugListener")
@interface MPDroidMraidWebViewDebugListener : JavaObject <MPDroidMraidWebViewDebugListener>

//properties for handlers
@property (nonatomic, copy) BOOL (^onJsAlertJsResultHandler)(NSString *, AndroidJsResult *);
@property (nonatomic, copy) BOOL (^onConsoleMessageHandler)(AndroidConsoleMessage *);


//convenience class method
+ (MPDroidMraidWebViewDebugListener *)listener;

@end