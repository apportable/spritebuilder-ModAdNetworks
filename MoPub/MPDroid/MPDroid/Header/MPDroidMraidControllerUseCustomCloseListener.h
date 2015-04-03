//
//  MPDroidMraidControllerUseCustomCloseListener.h
// 
//  Bridges to the java interface com.mopub.mraid.MraidController.UseCustomCloseListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.UseCustomCloseListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidMraidControllerUseCustomCloseListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mraid.MraidController$UseCustomCloseListener")
@protocol MPDroidMraidControllerUseCustomCloseListener 

// properties


// methods
- (void)useCustomCloseChanged:(BOOL)useCustomClose; /* useCustomCloseChanged */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mraid.MraidController$UseCustomCloseListener")
@interface MPDroidMraidControllerUseCustomCloseListener : JavaObject <MPDroidMraidControllerUseCustomCloseListener>

//properties for handlers
@property (nonatomic, copy) void (^useCustomCloseChangedHandler)(BOOL);


//convenience class method
+ (MPDroidMraidControllerUseCustomCloseListener *)listenerWithBlock:(void (^)(BOOL))useCustomCloseChangedHandler;

@end