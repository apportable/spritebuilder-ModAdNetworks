//
//  MPDroidTrackingRequestListener.h
// 
//  Bridges to the java interface com.mopub.network.TrackingRequest.Listener
//  See http://developer.android.com/reference/com/mopub/network/TrackingRequest.Listener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols
#import <MPDroid/MPDroidResponseErrorListener.h>


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidTrackingRequestListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.network.TrackingRequest$Listener")
@protocol MPDroidTrackingRequestListener <MPDroidResponseErrorListener>

// properties


// methods
- (void)onResponse; /* onResponse */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.network.TrackingRequest$Listener")
@interface MPDroidTrackingRequestListener : JavaObject <MPDroidTrackingRequestListener>

//properties for handlers
@property (nonatomic, copy) void (^onResponseHandler)();
@property (nonatomic, copy) void (^onErrorResponseHandler)(MPDroidVolleyError *);


//convenience class method
+ (MPDroidTrackingRequestListener *)listenerWithBlock:(void (^)())onResponseHandler;

@end