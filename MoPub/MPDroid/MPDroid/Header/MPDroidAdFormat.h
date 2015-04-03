//
//  MPDroidAdFormat.h
// 
//  Bridges to the java object com.mopub.common.AdFormat
//  See http://developer.android.com/reference/com/mopub/common/AdFormat.html for documentation.
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
Java class: MPDroidAdFormat
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.AdFormat")
@interface MPDroidAdFormat : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidAdFormat *)banner;
+ (MPDroidAdFormat *)interstitial;
+ (MPDroidAdFormat *)native;
+ (MPDroidAdFormat *)rewardedVideo;

// methods


@end
