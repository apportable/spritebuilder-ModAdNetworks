//
//  MPDroidVastManagerVastManagerListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.util.vast.VastManager.VastManagerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastManager.VastManagerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidVastVideoConfiguration;


//static fields


/**
Java interface: MPDroidVastManagerVastManagerListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.util.vast.VastManager$VastManagerListener")
@protocol MPDroidVastManagerVastManagerListener 

// properties


// methods
- (void)onVastVideoConfigurationPrepared:(MPDroidVastVideoConfiguration *)vastVideoConfiguration; /* onVastVideoConfigurationPrepared */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.util.vast.VastManager$VastManagerListener")
@interface MPDroidVastManagerVastManagerListener : JavaObject <MPDroidVastManagerVastManagerListener>

//properties for handlers
@property (nonatomic, copy) void (^onVastVideoConfigurationPreparedHandler)(MPDroidVastVideoConfiguration *);


//convenience class method
+ (MPDroidVastManagerVastManagerListener *)listenerWithBlock:(void (^)(MPDroidVastVideoConfiguration *))onVastVideoConfigurationPreparedHandler;

@end