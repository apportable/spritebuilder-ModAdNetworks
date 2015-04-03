//
//  MPDroidMoPubNativeAdPositioningMoPubClientPositioning.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNativeAdPositioning.MoPubClientPositioning
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdPositioning.MoPubClientPositioning.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaArrayList;
@protocol JavaList;


//defines and their comments (static fields with values)
#define MPDroidMoPubNativeAdPositioningMoPubClientPositioningNoRepeat 2147483647

/**
Java class: MPDroidMoPubNativeAdPositioningMoPubClientPositioning
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubNativeAdPositioning$MoPubClientPositioning")
@interface MPDroidMoPubNativeAdPositioningMoPubClientPositioning : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)addFixedPosition:(int32_t)position; /* addFixedPosition */
- (MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)enableRepeatingPositions:(int32_t)interval; /* enableRepeatingPositions */


@end
