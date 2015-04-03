//
//  MPDroidAdRequestListener.h
// 
//  Bridges to the java interface com.mopub.network.AdRequest.Listener
//  See http://developer.android.com/reference/com/mopub/network/AdRequest.Listener.html for documentation.
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
@class MPDroidAdResponse;


//static fields


/**
Java interface: MPDroidAdRequestListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.network.AdRequest$Listener")
@protocol MPDroidAdRequestListener <MPDroidResponseErrorListener>

// properties


// methods
- (void)onSuccess:(MPDroidAdResponse *)response; /* onSuccess */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.network.AdRequest$Listener")
@interface MPDroidAdRequestListener : JavaObject <MPDroidAdRequestListener>

//properties for handlers
@property (nonatomic, copy) void (^onSuccessHandler)(MPDroidAdResponse *);
@property (nonatomic, copy) void (^onErrorResponseHandler)(MPDroidVolleyError *);


//convenience class method
+ (MPDroidAdRequestListener *)listenerWithBlock:(void (^)(MPDroidAdResponse *))onSuccessHandler;

@end