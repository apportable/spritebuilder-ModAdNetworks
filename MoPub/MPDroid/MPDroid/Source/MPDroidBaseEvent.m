//
//  MPDroidBaseEvent.m
// 
//  Bridges to the java object com.mopub.common.event.BaseEvent
//  See http://developer.android.com/reference/com/mopub/common/event/BaseEvent.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidBaseEvent.h>
//other required types
#import <MPDroid/MPDroidClientMetadataMoPubNetworkType.h>
#import <MPDroid/MPDroidBaseEventScribeCategory.h>
#import <MPDroid/MPDroidBaseEventAppPlatform.h>
#import <JavaKit/JavaLong.h>
#import <JavaKit/JavaBoolean.h>
#import <MPDroid/MPDroidClientMetadata.h>
#import <MPDroid/MPDroidBaseEventSdkProduct.h>
#import <JavaKit/JavaInteger.h>
#import <JavaKit/JavaDouble.h>


@implementation MPDroidBaseEvent


//constructors


//properties
@bridge (instance, method) networkOperatorName = getNetworkOperatorName;

@bridge (instance, method) deviceModel = getDeviceModel;

@bridge (instance, method) deviceManufacturer = getDeviceManufacturer;

@bridge (instance, method) timestampUtcMs = getTimestampUtcMs;

@bridge (instance, method) adHeightPx = getAdHeightPx;

@bridge (instance, method) clientAdvertisingId = getClientAdvertisingId;

@bridge (instance, method) sdkProduct = getSdkProduct;

@bridge (instance, method) networkSimIsoCountryCode = getNetworkSimIsoCountryCode;

@bridge (instance, method) adNetworkType = getAdNetworkType;

@bridge (instance, method) networkOperatorCode = getNetworkOperatorCode;

@bridge (instance, method) scribeCategory = getScribeCategory;

@bridge (instance, method) requestUri = getRequestUri;

@bridge (instance, method) appVersion = getAppVersion;

@bridge (instance, method) requestRetries = getRequestRetries;

@bridge (instance, method) networkIsoCountryCode = getNetworkIsoCountryCode;

@bridge (instance, method) requestId = getRequestId;

@bridge (instance, method) deviceProduct = getDeviceProduct;

@bridge (instance, method) deviceScreenWidthPx = getDeviceScreenWidthPx;

@bridge (instance, method) appName = getAppName;

@bridge (instance, method) geoLat = getGeoLat;

@bridge (instance, method) adCreativeId = getAdCreativeId;

@bridge (instance, method) networkType = getNetworkType;

@bridge (instance, method) deviceOsVersion = getDeviceOsVersion;

@bridge (instance, method) networkSimCode = getNetworkSimCode;

@bridge (instance, method) adType = getAdType;

@bridge (instance, method) appPlatform = getAppPlatform;

@bridge (instance, method) adWidthPx = getAdWidthPx;

@bridge (instance, method) performanceDurationMs = getPerformanceDurationMs;

@bridge (instance, method) requestStatusCode = getRequestStatusCode;

@bridge (instance, method) eventName = getEventName;

@bridge (instance, method) deviceScreenHeightPx = getDeviceScreenHeightPx;

@bridge (instance, method) eventCategory = getEventCategory;

@bridge (instance, method) geoAccuracy = getGeoAccuracy;

@bridge (instance, method) appPackageName = getAppPackageName;

@bridge (instance, method) sdkVersion = getSdkVersion;

@bridge (instance, method) geoLon = getGeoLon;

@bridge (instance, method) adUnitId = getAdUnitId;

@bridge (instance, method) clientDoNotTrack = getClientDoNotTrack;

@bridge (instance, method) networkSimOperatorName = getNetworkSimOperatorName;



//methods
@bridge (method, instance) description = toString;


@end
