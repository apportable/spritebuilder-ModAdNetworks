//
//  MPDroidPositioningRequest.h
// 
//  Bridges to the java object com.mopub.nativeads.PositioningRequest
//  See http://developer.android.com/reference/com/mopub/nativeads/PositioningRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidJsonRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidResponseListener;
@class MPDroidResponse;
@protocol MPDroidResponseErrorListener;
@class MPDroidNetworkResponse;
@class MPDroidMoPubNativeAdPositioningMoPubClientPositioning;
@class JavaJSONArray;
@class JavaJSONObject;


//defines and their comments (static fields with values)
#define MPDroidPositioningRequestFixedKey @"fixed"
#define MPDroidPositioningRequestSectionKey @"section"
#define MPDroidPositioningRequestPositionKey @"position"
#define MPDroidPositioningRequestRepeatingKey @"repeating"
#define MPDroidPositioningRequestIntervalKey @"interval"
#define MPDroidPositioningRequestMaxValue 65536

/**
Java class: MPDroidPositioningRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.PositioningRequest")
@interface MPDroidPositioningRequest : MPDroidJsonRequest 

// constructors
- (instancetype)initWithUrl:(NSString *)url listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */


// properties


//static valueless fields


// methods


@end
