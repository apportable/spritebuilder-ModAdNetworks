//
//  MPDroidDataKeys.h
// 
//  Bridges to the java object com.mopub.common.DataKeys
//  See http://developer.android.com/reference/com/mopub/common/DataKeys.html for documentation.
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
#define MPDroidDataKeysAdReportKey @"mopub-intent-ad-report"
#define MPDroidDataKeysHtmlResponseBodyKey @"Html-Response-Body"
#define MPDroidDataKeysRedirectUrlKey @"Redirect-Url"
#define MPDroidDataKeysClickthroughUrlKey @"Clickthrough-Url"
#define MPDroidDataKeysScrollableKey @"Scrollable"
#define MPDroidDataKeysJsonBodyKey @"com_mopub_native_json"
#define MPDroidDataKeysBroadcastIdentifierKey @"broadcastIdentifier"
#define MPDroidDataKeysAdUnitIdKey @"com_mopub_ad_unit_id"

/**
Java class: MPDroidDataKeys
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.DataKeys")
@interface MPDroidDataKeys : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods


@end
