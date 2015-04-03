//
//  MPDroidBaseEvent.h
// 
//  Bridges to the java object com.mopub.common.event.BaseEvent
//  See http://developer.android.com/reference/com/mopub/common/event/BaseEvent.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidClientMetadataMoPubNetworkType;
@class MPDroidBaseEventScribeCategory;
@class MPDroidBaseEventAppPlatform;
@class JavaLong;
@class JavaBoolean;
@class MPDroidClientMetadata;
@class MPDroidBaseEventSdkProduct;
@class JavaInteger;
@class JavaDouble;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBaseEvent
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.event.BaseEvent")
@interface MPDroidBaseEvent : JavaObject 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *networkOperatorName; /* getNetworkOperatorName */
@property (nonatomic, readonly, copy) NSString *deviceModel; /* getDeviceModel */
@property (nonatomic, readonly, copy) NSString *deviceManufacturer; /* getDeviceManufacturer */
@property (nonatomic, readonly, retain) JavaLong *timestampUtcMs; /* getTimestampUtcMs */
@property (nonatomic, readonly, retain) JavaDouble *adHeightPx; /* getAdHeightPx */
@property (nonatomic, readonly, copy) NSString *clientAdvertisingId; /* getClientAdvertisingId */
@property (nonatomic, readonly, retain) MPDroidBaseEventSdkProduct *sdkProduct; /* getSdkProduct */
@property (nonatomic, readonly, copy) NSString *networkSimIsoCountryCode; /* getNetworkSimIsoCountryCode */
@property (nonatomic, readonly, copy) NSString *adNetworkType; /* getAdNetworkType */
@property (nonatomic, readonly, copy) NSString *networkOperatorCode; /* getNetworkOperatorCode */
@property (nonatomic, readonly, retain) MPDroidBaseEventScribeCategory *scribeCategory; /* getScribeCategory */
@property (nonatomic, readonly, copy) NSString *requestUri; /* getRequestUri */
@property (nonatomic, readonly, copy) NSString *appVersion; /* getAppVersion */
@property (nonatomic, readonly, retain) JavaInteger *requestRetries; /* getRequestRetries */
@property (nonatomic, readonly, copy) NSString *networkIsoCountryCode; /* getNetworkIsoCountryCode */
@property (nonatomic, readonly, copy) NSString *requestId; /* getRequestId */
@property (nonatomic, readonly, copy) NSString *deviceProduct; /* getDeviceProduct */
@property (nonatomic, readonly, retain) JavaInteger *deviceScreenWidthPx; /* getDeviceScreenWidthPx */
@property (nonatomic, readonly, copy) NSString *appName; /* getAppName */
@property (nonatomic, readonly, retain) JavaDouble *geoLat; /* getGeoLat */
@property (nonatomic, readonly, copy) NSString *adCreativeId; /* getAdCreativeId */
@property (nonatomic, readonly, retain) MPDroidClientMetadataMoPubNetworkType *networkType; /* getNetworkType */
@property (nonatomic, readonly, copy) NSString *deviceOsVersion; /* getDeviceOsVersion */
@property (nonatomic, readonly, copy) NSString *networkSimCode; /* getNetworkSimCode */
@property (nonatomic, readonly, copy) NSString *adType; /* getAdType */
@property (nonatomic, readonly, retain) MPDroidBaseEventAppPlatform *appPlatform; /* getAppPlatform */
@property (nonatomic, readonly, retain) JavaDouble *adWidthPx; /* getAdWidthPx */
@property (nonatomic, readonly, retain) JavaDouble *performanceDurationMs; /* getPerformanceDurationMs */
@property (nonatomic, readonly, retain) JavaInteger *requestStatusCode; /* getRequestStatusCode */
@property (nonatomic, readonly, copy) NSString *eventName; /* getEventName */
@property (nonatomic, readonly, retain) JavaInteger *deviceScreenHeightPx; /* getDeviceScreenHeightPx */
@property (nonatomic, readonly, copy) NSString *eventCategory; /* getEventCategory */
@property (nonatomic, readonly, retain) JavaDouble *geoAccuracy; /* getGeoAccuracy */
@property (nonatomic, readonly, copy) NSString *appPackageName; /* getAppPackageName */
@property (nonatomic, readonly, copy) NSString *sdkVersion; /* getSdkVersion */
@property (nonatomic, readonly, retain) JavaDouble *geoLon; /* getGeoLon */
@property (nonatomic, readonly, copy) NSString *adUnitId; /* getAdUnitId */
@property (nonatomic, readonly, retain) JavaBoolean *clientDoNotTrack; /* getClientDoNotTrack */
@property (nonatomic, readonly, copy) NSString *networkSimOperatorName; /* getNetworkSimOperatorName */


//static valueless fields


// methods
- (NSString *)description; /* toString */


@end
