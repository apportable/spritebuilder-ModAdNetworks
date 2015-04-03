//
//  MPDroidCustomEventNativeImageListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.CustomEventNative.ImageListener
//  See http://developer.android.com/reference/com/mopub/nativeads/CustomEventNative.ImageListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidNativeErrorCode;


//static fields


/**
Java interface: MPDroidCustomEventNativeImageListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.CustomEventNative$ImageListener")
@protocol MPDroidCustomEventNativeImageListener 

// properties


// methods
- (void)onImagesCached; /* onImagesCached */
- (void)onImagesFailedToCache:(MPDroidNativeErrorCode *)errorCode; /* onImagesFailedToCache */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.CustomEventNative$ImageListener")
@interface MPDroidCustomEventNativeImageListener : JavaObject <MPDroidCustomEventNativeImageListener>

//properties for handlers
@property (nonatomic, copy) void (^onImagesCachedHandler)();
@property (nonatomic, copy) void (^onImagesFailedToCacheHandler)(MPDroidNativeErrorCode *);


//convenience class method
+ (MPDroidCustomEventNativeImageListener *)listener;

@end