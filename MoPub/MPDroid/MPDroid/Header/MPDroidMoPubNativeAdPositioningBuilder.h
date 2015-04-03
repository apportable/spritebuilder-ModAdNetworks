//
//  MPDroidMoPubNativeAdPositioningBuilder.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNativeAdPositioning.Builder
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdPositioning.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubClientPositioning.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubNativeAdPositioningMoPubClientPositioning;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubNativeAdPositioningBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubNativeAdPositioning$Builder")
@interface MPDroidMoPubNativeAdPositioningBuilder : MPDroidMoPubNativeAdPositioningMoPubClientPositioning 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidMoPubNativeAdPositioningMoPubClientPositioning *enableRepeatingPositions; /* enableRepeatingPositions */
@property (nonatomic, readonly, retain) MPDroidMoPubNativeAdPositioningMoPubClientPositioning *addFixedPosition; /* addFixedPosition */


//static valueless fields


// methods
- (MPDroidMoPubNativeAdPositioningBuilder *)addFixedPosition:(int32_t)position; /* addFixedPosition */
- (MPDroidMoPubNativeAdPositioningBuilder *)enableRepeatingPositions:(int32_t)interval; /* enableRepeatingPositions */


@end
