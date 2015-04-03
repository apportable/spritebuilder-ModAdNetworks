//
//  MPDroidAdUrlGenerator.h
// 
//  Bridges to the java object com.mopub.common.AdUrlGenerator
//  See http://developer.android.com/reference/com/mopub/common/AdUrlGenerator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseUrlGenerator.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidClientMetadataMoPubNetworkType;
@class AndroidLocation;
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAdUrlGenerator
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.AdUrlGenerator")
@interface MPDroidAdUrlGenerator : MPDroidBaseUrlGenerator 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties


//static valueless fields


// methods
- (MPDroidAdUrlGenerator *)withAdUnitId:(NSString *)adUnitId; /* withAdUnitId */
- (MPDroidAdUrlGenerator *)withKeywords:(NSString *)keywords; /* withKeywords */
- (MPDroidAdUrlGenerator *)withLocation:(AndroidLocation *)location; /* withLocation */


@end
