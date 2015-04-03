//
//  MPDroidLocationServiceLocationAwareness.h
// 
//  Bridges to the java object com.mopub.common.LocationService.LocationAwareness
//  See http://developer.android.com/reference/com/mopub/common/LocationService.LocationAwareness.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubLocationAwareness;


//defines and their comments (static fields with values)


/**
Java class: MPDroidLocationServiceLocationAwareness
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.LocationService$LocationAwareness")
@interface MPDroidLocationServiceLocationAwareness : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidLocationServiceLocationAwareness *)normal;
+ (MPDroidLocationServiceLocationAwareness *)truncated;
+ (MPDroidLocationServiceLocationAwareness *)disabled;

// methods


@end
