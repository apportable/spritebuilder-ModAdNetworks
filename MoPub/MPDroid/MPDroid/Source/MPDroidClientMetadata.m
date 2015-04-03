//
//  MPDroidClientMetadata.m
// 
//  Bridges to the java object com.mopub.common.ClientMetadata
//  See http://developer.android.com/reference/com/mopub/common/ClientMetadata.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidClientMetadata.h>
//other required types
#import <AndroidKit/AndroidConnectivityManager.h>
#import <MPDroid/MPDroidClientMetadataMoPubNetworkType.h>
#import <AndroidKit/AndroidContext.h>
#import <JavaKit/JavaLocale.h>


@implementation MPDroidClientMetadata


//constructors
@bridge (constructor) initWithContext:;


//properties
@bridge (instance, method) deviceLocale = getDeviceLocale;

@bridge (instance, method) isAdvertisingInfoSet = isAdvertisingInfoSet;

@bridge (instance, method) simOperatorName = getSimOperatorName;

@bridge (instance, method) simOperator = getSimOperator;

@bridge (instance, method) deviceId = getDeviceId;

@bridge (instance, method) orientationString = getOrientationString;

@bridge (instance, method) networkOperatorForUrl = getNetworkOperatorForUrl;

@bridge (instance, method) networkOperatorName = getNetworkOperatorName;

@bridge (instance, method) deviceScreenWidthPx = getDeviceScreenWidthPx;

@bridge (instance, method) deviceProduct = getDeviceProduct;

@bridge (instance, method) appVersion = getAppVersion;

@bridge (instance, method) deviceScreenHeightPx = getDeviceScreenHeightPx;

@bridge (instance, method) activeNetworkType = getActiveNetworkType;

@bridge (instance, method) isDoNotTrackSet = isDoNotTrackSet;

@bridge (instance, method) appName = getAppName;

@bridge (instance, method) isoCountryCode = getIsoCountryCode;

@bridge (instance, method) sdkVersion = getSdkVersion;

@bridge (instance, method) deviceManufacturer = getDeviceManufacturer;

@bridge (instance, method) deviceModel = getDeviceModel;

@bridge (instance, method) simIsoCountryCode = getSimIsoCountryCode;

@bridge (instance, method) deviceOsVersion = getDeviceOsVersion;

@bridge (instance, method) density = getDensity;

@bridge (instance, method) appPackageName = getAppPackageName;

@bridge (instance, method) networkOperator = getNetworkOperator;



//methods
@bridge (method, static) instanceForContext: = getInstance;
@bridge (method, static) instance = getInstance;
@bridge (method, instance) setAdvertisingInfo:doNotTrack: = setAdvertisingInfo;
@bridge (method, static) clearForTesting = clearForTesting;


@end
