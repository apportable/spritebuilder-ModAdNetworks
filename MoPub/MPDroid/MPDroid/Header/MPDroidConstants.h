//
//  MPDroidConstants.h
// 
//  Bridges to the java object com.mopub.common.Constants
//  See http://developer.android.com/reference/com/mopub/common/Constants.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)
#define MPDroidConstantsAdHandler @"/m/ad"
#define MPDroidConstantsConversionTrackingHandler @"/m/open"
#define MPDroidConstantsPositioningHandler @"/m/pos"
#define MPDroidConstantsTenSecondsMillis 10000
#define MPDroidConstantsThirtySecondsMillis 30000

/**
Java class: MPDroidConstants
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.Constants")
@interface MPDroidConstants : JavaObject 

// constructors


// properties


//static valueless fields
+ (NSString *)host;
+ (void)setHost:(NSString *)value;


// methods


@end
