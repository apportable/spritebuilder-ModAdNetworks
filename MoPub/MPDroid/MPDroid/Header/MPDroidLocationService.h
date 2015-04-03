//
//  MPDroidLocationService.h
// 
//  Bridges to the java object com.mopub.common.LocationService
//  See http://developer.android.com/reference/com/mopub/common/LocationService.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubLocationAwareness;
@class AndroidContext;
@class AndroidLocation;


//defines and their comments (static fields with values)


/**
Java class: MPDroidLocationService
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.LocationService")
@interface MPDroidLocationService : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (AndroidLocation *)lastKnownLocationForContext:(AndroidContext *)context locationPrecision:(int32_t)locationPrecision locationAwareness:(MPDroidMoPubLocationAwareness *)locationLocationAwareness; /* getLastKnownLocation */


@end
