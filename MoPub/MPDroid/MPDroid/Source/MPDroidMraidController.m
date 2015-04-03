//
//  MPDroidMraidController.m
// 
//  Bridges to the java object com.mopub.mraid.MraidController
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidController.h>
//other required types
#import <AndroidKit/AndroidConsoleMessage.h>
#import <MPDroid/MPDroidMraidControllerUseCustomCloseListener.h>
#import <AndroidKit/AndroidFrameLayout.h>
#import <MPDroid/MPDroidViewState.h>
#import <AndroidKit/AndroidJsResult.h>
#import <MPDroid/MPDroidMraidControllerMraidListener.h>
#import <MPDroid/MPDroidMraidNativeCommandHandler.h>
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidCloseableLayoutClosePosition.h>
#import <JavaKit/JavaRunnable.h>
#import <MPDroid/MPDroidCloseableLayout.h>
#import <AndroidKit/AndroidContext.h>
#import <JavaKit/JavaURI.h>
#import <MPDroid/MPDroidMraidBridgeMraidWebView.h>
#import <MPDroid/MPDroidMraidBridge.h>
#import <MPDroid/MPDroidPlacementType.h>
#import <MPDroid/MPDroidMraidWebViewDebugListener.h>
#import <AndroidKit/AndroidActivity.h>
#import <MPDroid/MPDroidMraidBridgeMraidBridgeListener.h>
#import <AndroidKit/AndroidView.h>
#import <JavaKit/JavaInteger.h>
#import <AndroidKit/AndroidViewGroup.h>


@implementation MPDroidMraidController


//constructors
@bridge (constructor) initWithContext:adReport:placementType:;


//properties
@bridge (instance, method) adContainer = getAdContainer;

@bridge (instance, method) context = getContext;



//methods
@bridge (method, instance) setMraidListener: = setMraidListener;
@bridge (method, instance) setUseCustomCloseListener: = setUseCustomCloseListener;
@bridge (method, instance) setDebugListener: = setDebugListener;
@bridge (method, instance) loadContent: = loadContent;
@bridge (method, instance) pauseWithIsFinishing: = pause;
@bridge (method, instance) resume = resume;
@bridge (method, instance) destroy = destroy;
@bridge (method, instance) loadJavascript: = loadJavascript;


@end
