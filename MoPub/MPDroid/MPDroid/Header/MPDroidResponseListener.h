//
//  MPDroidResponseListener.h
// 
//  Bridges to the java interface com.mopub.volley.Response.Listener
//  See http://developer.android.com/reference/com/mopub/volley/Response.Listener.html for documentation.
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
Java interface: MPDroidResponseListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.Response$Listener")
@protocol MPDroidResponseListener 

// properties


// methods
- (void)onResponse:(JavaObject *)response; /* onResponse */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.Response$Listener")
@interface MPDroidResponseListener : JavaObject <MPDroidResponseListener>

//properties for handlers
@property (nonatomic, copy) void (^onResponseHandler)(JavaObject *);


//convenience class method
+ (MPDroidResponseListener *)listenerWithBlock:(void (^)(JavaObject *))onResponseHandler;

@end