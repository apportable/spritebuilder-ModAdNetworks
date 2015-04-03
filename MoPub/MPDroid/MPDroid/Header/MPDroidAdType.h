//
//  MPDroidAdType.h
// 
//  Bridges to the java object com.mopub.common.AdType
//  See http://developer.android.com/reference/com/mopub/common/AdType.html for documentation.
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
#define MPDroidAdTypeHtml @"html"
#define MPDroidAdTypeMraid @"mraid"
#define MPDroidAdTypeInterstitial @"interstitial"
#define MPDroidAdTypeNative @"json"
#define MPDroidAdTypeCustom @"custom"
#define MPDroidAdTypeClear @"clear"

/**
Java class: MPDroidAdType
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.AdType")
@interface MPDroidAdType : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods


@end
