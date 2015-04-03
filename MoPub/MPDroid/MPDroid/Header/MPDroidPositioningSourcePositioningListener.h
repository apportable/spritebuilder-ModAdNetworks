//
//  MPDroidPositioningSourcePositioningListener.h
// 
//  Bridges to the java interface com.mopub.nativeads.PositioningSource.PositioningListener
//  See http://developer.android.com/reference/com/mopub/nativeads/PositioningSource.PositioningListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubNativeAdPositioningMoPubClientPositioning;


//static fields


/**
Java interface: MPDroidPositioningSourcePositioningListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.nativeads.PositioningSource$PositioningListener")
@protocol MPDroidPositioningSourcePositioningListener 

// properties


// methods
- (void)onLoad:(MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)positioning; /* onLoad */
- (void)onFailed; /* onFailed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.nativeads.PositioningSource$PositioningListener")
@interface MPDroidPositioningSourcePositioningListener : JavaObject <MPDroidPositioningSourcePositioningListener>

//properties for handlers
@property (nonatomic, copy) void (^onLoadHandler)(MPDroidMoPubNativeAdPositioningMoPubClientPositioning *);
@property (nonatomic, copy) void (^onFailedHandler)();


//convenience class method
+ (MPDroidPositioningSourcePositioningListener *)listener;

@end