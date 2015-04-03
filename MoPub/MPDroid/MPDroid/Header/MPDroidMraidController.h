//
//  MPDroidMraidController.h
// 
//  Bridges to the java object com.mopub.mraid.MraidController
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidConsoleMessage;
@protocol MPDroidMraidControllerUseCustomCloseListener;
@class AndroidFrameLayout;
@class MPDroidViewState;
@class AndroidJsResult;
@protocol MPDroidMraidControllerMraidListener;
@class MPDroidMraidNativeCommandHandler;
@class MPDroidAdReport;
@class MPDroidCloseableLayoutClosePosition;
@protocol JavaRunnable;
@class MPDroidCloseableLayout;
@class AndroidContext;
@class JavaURI;
@class MPDroidMraidBridgeMraidWebView;
@class MPDroidMraidBridge;
@class MPDroidPlacementType;
@protocol MPDroidMraidWebViewDebugListener;
@class AndroidActivity;
@protocol MPDroidMraidBridgeMraidBridgeListener;
@class AndroidView;
@class JavaInteger;
@class AndroidViewGroup;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidController
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.MraidController")
@interface MPDroidMraidController : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport placementType:(MPDroidPlacementType *)placementType; /* <init> */


// properties
@property (nonatomic, readonly, retain) AndroidFrameLayout *adContainer; /* getAdContainer */
@property (nonatomic, readonly, retain) AndroidContext *context; /* getContext */


//static valueless fields


// methods
- (void)setMraidListener:(JavaObject <MPDroidMraidControllerMraidListener> *)mraidListener; /* setMraidListener */
- (void)setUseCustomCloseListener:(JavaObject <MPDroidMraidControllerUseCustomCloseListener> *)listener; /* setUseCustomCloseListener */
- (void)setDebugListener:(JavaObject <MPDroidMraidWebViewDebugListener> *)debugListener; /* setDebugListener */
- (void)loadContent:(NSString *)htmlData; /* loadContent */
- (void)pauseWithIsFinishing:(BOOL)isFinishing; /* pause */
- (void)resume; /* resume */
- (void)destroy; /* destroy */
- (void)loadJavascript:(NSString *)javascript; /* loadJavascript */


@end
