//
//  MPDroidClientMetadata.h
// 
//  Bridges to the java object com.mopub.common.ClientMetadata
//  See http://developer.android.com/reference/com/mopub/common/ClientMetadata.html for documentation.
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
@class AndroidConnectivityManager;
@class AndroidContext;
@class JavaLocale;


//defines and their comments (static fields with values)
#define MPDroidClientMetadataTypeEthernet 9
#define MPDroidClientMetadataDeviceOrientationPortrait @"p"
#define MPDroidClientMetadataDeviceOrientationLandscape @"l"
#define MPDroidClientMetadataDeviceOrientationSquare @"s"
#define MPDroidClientMetadataDeviceOrientationUnknown @"u"
#define MPDroidClientMetadataIfaPrefix @"ifa:"
#define MPDroidClientMetadataShaPrefix @"sha:"
#define MPDroidClientMetadataUnknownNetwork -1

/**
Java class: MPDroidClientMetadata
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.ClientMetadata")
@interface MPDroidClientMetadata : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties
@property (nonatomic, readonly, retain) JavaLocale *deviceLocale; /* getDeviceLocale */
@property (nonatomic, readonly, getter=isAdvertisingInfoSet, assign) BOOL advertisingInfoSet; /* isAdvertisingInfoSet */
@property (nonatomic, readonly, copy) NSString *simOperatorName; /* getSimOperatorName */
@property (nonatomic, readonly, copy) NSString *simOperator; /* getSimOperator */
@property (nonatomic, readonly, copy) NSString *deviceId; /* getDeviceId */
@property (nonatomic, readonly, copy) NSString *orientationString; /* getOrientationString */
@property (nonatomic, readonly, copy) NSString *networkOperatorForUrl; /* getNetworkOperatorForUrl */
@property (nonatomic, readonly, copy) NSString *networkOperatorName; /* getNetworkOperatorName */
@property (nonatomic, readonly, assign) int32_t deviceScreenWidthPx; /* getDeviceScreenWidthPx */
@property (nonatomic, readonly, copy) NSString *deviceProduct; /* getDeviceProduct */
@property (nonatomic, readonly, copy) NSString *appVersion; /* getAppVersion */
@property (nonatomic, readonly, assign) int32_t deviceScreenHeightPx; /* getDeviceScreenHeightPx */
@property (nonatomic, readonly, retain) MPDroidClientMetadataMoPubNetworkType *activeNetworkType; /* getActiveNetworkType */
@property (nonatomic, readonly, getter=isDoNotTrackSet, assign) BOOL doNotTrackSet; /* isDoNotTrackSet */
@property (nonatomic, readonly, copy) NSString *appName; /* getAppName */
@property (nonatomic, readonly, copy) NSString *isoCountryCode; /* getIsoCountryCode */
@property (nonatomic, readonly, copy) NSString *sdkVersion; /* getSdkVersion */
@property (nonatomic, readonly, copy) NSString *deviceManufacturer; /* getDeviceManufacturer */
@property (nonatomic, readonly, copy) NSString *deviceModel; /* getDeviceModel */
@property (nonatomic, readonly, copy) NSString *simIsoCountryCode; /* getSimIsoCountryCode */
@property (nonatomic, readonly, copy) NSString *deviceOsVersion; /* getDeviceOsVersion */
@property (nonatomic, readonly, assign) float density; /* getDensity */
@property (nonatomic, readonly, copy) NSString *appPackageName; /* getAppPackageName */
@property (nonatomic, readonly, copy) NSString *networkOperator; /* getNetworkOperator */


//static valueless fields


// methods
+ (MPDroidClientMetadata *)instanceForContext:(AndroidContext *)context; /* getInstance */
+ (MPDroidClientMetadata *)instance; /* getInstance */
- (void)setAdvertisingInfo:(NSString *)advertisingId doNotTrack:(BOOL)doNotTrack; /* setAdvertisingInfo */
+ (void)clearForTesting; /* clearForTesting */


@end
