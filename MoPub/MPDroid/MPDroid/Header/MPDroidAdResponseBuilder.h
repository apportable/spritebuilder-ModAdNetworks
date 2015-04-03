//
//  MPDroidAdResponseBuilder.h
// 
//  Bridges to the java object com.mopub.network.AdResponse.Builder
//  See http://developer.android.com/reference/com/mopub/network/AdResponse.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdResponse;
@class JavaBoolean;
@class JavaInteger;
@protocol JavaMap;
@class JavaJSONObject;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAdResponseBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.AdResponse$Builder")
@interface MPDroidAdResponseBuilder : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidAdResponse *build; /* build */


//static valueless fields


// methods
- (MPDroidAdResponseBuilder *)setAdTypeByAdType:(NSString *)adType; /* setAdType */
- (MPDroidAdResponseBuilder *)setAdUnitIdByAdUnitId:(NSString *)adUnitId; /* setAdUnitId */
- (MPDroidAdResponseBuilder *)setFullAdTypeByFullAdType:(NSString *)fullAdType; /* setFullAdType */
- (MPDroidAdResponseBuilder *)setNetworkTypeByNetworkType:(NSString *)networkType; /* setNetworkType */
- (MPDroidAdResponseBuilder *)setRedirectUrlByRedirectUrl:(NSString *)redirectUrl; /* setRedirectUrl */
- (MPDroidAdResponseBuilder *)setClickTrackingUrlByClickTrackingUrl:(NSString *)clickTrackingUrl; /* setClickTrackingUrl */
- (MPDroidAdResponseBuilder *)setImpressionTrackingUrlByImpressionTrackingUrl:(NSString *)impressionTrackingUrl; /* setImpressionTrackingUrl */
- (MPDroidAdResponseBuilder *)setFailoverUrlByFailoverUrl:(NSString *)failoverUrl; /* setFailoverUrl */
- (MPDroidAdResponseBuilder *)setDimensions:(JavaInteger *)width integer:(JavaInteger *)height; /* setDimensions */
- (MPDroidAdResponseBuilder *)setAdTimeoutDelayMillisecondsByInteger:(JavaInteger *)adTimeoutDelayMilliseconds; /* setAdTimeoutDelayMilliseconds */
- (MPDroidAdResponseBuilder *)setRefreshTimeMillisecondsByInteger:(JavaInteger *)refreshTimeMilliseconds; /* setRefreshTimeMilliseconds */
- (MPDroidAdResponseBuilder *)setScrollableByBoolean:(JavaBoolean *)scrollable; /* setScrollable */
- (MPDroidAdResponseBuilder *)setDspCreativeIdByDspCreativeId:(NSString *)dspCreativeId; /* setDspCreativeId */
- (MPDroidAdResponseBuilder *)setResponseBodyByResponseBody:(NSString *)responseBody; /* setResponseBody */
- (MPDroidAdResponseBuilder *)setJsonBodyByJSONObject:(JavaJSONObject *)jsonBody; /* setJsonBody */
- (MPDroidAdResponseBuilder *)setCustomEventClassNameByCustomEventClassName:(NSString *)customEventClassName; /* setCustomEventClassName */
- (MPDroidAdResponseBuilder *)setServerExtrasByMap:(JavaObject <JavaMap> *)serverExtras; /* setServerExtras */


@end
