//
//  MPDroidImageLoaderImageListener.h
// 
//  Bridges to the java interface com.mopub.volley.toolbox.ImageLoader.ImageListener
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.ImageListener.html for documentation.
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
@class MPDroidImageLoaderImageContainer;


//static fields


/**
Java interface: MPDroidImageLoaderImageListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.toolbox.ImageLoader$ImageListener")
@protocol MPDroidImageLoaderImageListener <MPDroidResponseErrorListener>

// properties


// methods
- (void)onResponse:(MPDroidImageLoaderImageContainer *)imageContainer isImmediate:(BOOL)isImmediate; /* onResponse */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.toolbox.ImageLoader$ImageListener")
@interface MPDroidImageLoaderImageListener : JavaObject <MPDroidImageLoaderImageListener>

//properties for handlers
@property (nonatomic, copy) void (^onResponseIsImmediateHandler)(MPDroidImageLoaderImageContainer *, BOOL);
@property (nonatomic, copy) void (^onErrorResponseHandler)(MPDroidVolleyError *);


//convenience class method
+ (MPDroidImageLoaderImageListener *)listenerWithBlock:(void (^)(MPDroidImageLoaderImageContainer *, BOOL))onResponseIsImmediateHandler;

@end