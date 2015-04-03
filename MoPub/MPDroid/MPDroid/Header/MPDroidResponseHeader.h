//
//  MPDroidResponseHeader.h
// 
//  Bridges to the java object com.mopub.common.util.ResponseHeader
//  See http://developer.android.com/reference/com/mopub/common/util/ResponseHeader.html for documentation.
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
Java class: MPDroidResponseHeader
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.ResponseHeader")
@interface MPDroidResponseHeader : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *key; /* getKey */


//static valueless fields
+ (MPDroidResponseHeader *)adTimeout;
+ (MPDroidResponseHeader *)adType;
+ (MPDroidResponseHeader *)clickTrackingUrl;
+ (MPDroidResponseHeader *)customEventData;
+ (MPDroidResponseHeader *)customEventName;
+ (MPDroidResponseHeader *)customEventHtmlData;
+ (MPDroidResponseHeader *)dspCreativeId;
+ (MPDroidResponseHeader *)failUrl;
+ (MPDroidResponseHeader *)fullAdType;
+ (MPDroidResponseHeader *)height;
+ (MPDroidResponseHeader *)impressionUrl;
+ (MPDroidResponseHeader *)redirectUrl;
+ (MPDroidResponseHeader *)nativeParams;
+ (MPDroidResponseHeader *)networkType;
+ (MPDroidResponseHeader *)refreshTime;
+ (MPDroidResponseHeader *)scrollable;
+ (MPDroidResponseHeader *)warmup;
+ (MPDroidResponseHeader *)width;
+ (MPDroidResponseHeader *)location;
+ (MPDroidResponseHeader *)userAgent;
+ (MPDroidResponseHeader *)customSelector;

// methods


@end
