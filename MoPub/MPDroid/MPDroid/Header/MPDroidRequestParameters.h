//
//  MPDroidRequestParameters.h
// 
//  Bridges to the java object com.mopub.nativeads.RequestParameters
//  See http://developer.android.com/reference/com/mopub/nativeads/RequestParameters.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaEnumSet;
@class MPDroidRequestParametersBuilder;
@class AndroidLocation;


//defines and their comments (static fields with values)


/**
Java class: MPDroidRequestParameters
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.RequestParameters")
@interface MPDroidRequestParameters : JavaObject 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *desiredAssets; /* getDesiredAssets */
@property (nonatomic, readonly, copy) NSString *keywords; /* getKeywords */
@property (nonatomic, readonly, retain) AndroidLocation *location; /* getLocation */


//static valueless fields


// methods


@end
