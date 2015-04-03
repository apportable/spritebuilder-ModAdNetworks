//
//  MPDroidPlacementType.h
// 
//  Bridges to the java object com.mopub.mraid.PlacementType
//  See http://developer.android.com/reference/com/mopub/mraid/PlacementType.html for documentation.
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
Java class: MPDroidPlacementType
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.PlacementType")
@interface MPDroidPlacementType : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidPlacementType *)inlineValue;
+ (MPDroidPlacementType *)interstitial;

// methods


@end
