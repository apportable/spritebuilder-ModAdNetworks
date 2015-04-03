//
//  MPDroidMoPubNativeAdPositioning.h
// 
//  Bridges to the java object com.mopub.nativeads.MoPubNativeAdPositioning
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNativeAdPositioning.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubNativeAdPositioningBuilder;
@class MPDroidMoPubNativeAdPositioningMoPubClientPositioning;
@class MPDroidMoPubNativeAdPositioningMoPubServerPositioning;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubNativeAdPositioning
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.MoPubNativeAdPositioning")
@interface MPDroidMoPubNativeAdPositioning : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidMoPubNativeAdPositioningMoPubClientPositioning *)clientPositioning; /* clientPositioning */
+ (MPDroidMoPubNativeAdPositioningMoPubServerPositioning *)serverPositioning; /* serverPositioning */


@end
