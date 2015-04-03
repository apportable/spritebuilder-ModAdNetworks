//
//  MPDroidMoPubLocationAwareness.h
// 
//  Bridges to the java object com.mopub.common.MoPub.LocationAwareness
//  See http://developer.android.com/reference/com/mopub/common/MoPub.LocationAwareness.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubLocationAwareness
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.MoPub$LocationAwareness")
@interface MPDroidMoPubLocationAwareness : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidMoPubLocationAwareness *)normal;
+ (MPDroidMoPubLocationAwareness *)truncated;
+ (MPDroidMoPubLocationAwareness *)disabled;

// methods


@end
