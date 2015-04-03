//
//  MPDroidMraidControllerMraidListener.h
// 
//  Bridges to the java interface com.mopub.mraid.MraidController.MraidListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.MraidListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidView;


//static fields


/**
Java interface: MPDroidMraidControllerMraidListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mraid.MraidController$MraidListener")
@protocol MPDroidMraidControllerMraidListener 

// properties


// methods
- (void)onLoaded:(AndroidView *)view; /* onLoaded */
- (void)onFailedToLoad; /* onFailedToLoad */
- (void)onExpand; /* onExpand */
- (void)onOpen; /* onOpen */
- (void)onClose; /* onClose */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mraid.MraidController$MraidListener")
@interface MPDroidMraidControllerMraidListener : JavaObject <MPDroidMraidControllerMraidListener>

//properties for handlers
@property (nonatomic, copy) void (^onLoadedHandler)(AndroidView *);
@property (nonatomic, copy) void (^onFailedToLoadHandler)();
@property (nonatomic, copy) void (^onExpandHandler)();
@property (nonatomic, copy) void (^onOpenHandler)();
@property (nonatomic, copy) void (^onCloseHandler)();


//convenience class method
+ (MPDroidMraidControllerMraidListener *)listener;

@end