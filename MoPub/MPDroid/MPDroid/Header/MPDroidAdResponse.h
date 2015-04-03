//
//  MPDroidAdResponse.h
// 
//  Bridges to the java object com.mopub.network.AdResponse
//  See http://developer.android.com/reference/com/mopub/network/AdResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <JavaKit/JavaSerializable.h>


//necessary forward declarations, classes and protocols
@class MPDroidAdResponseBuilder;
@class JavaInteger;
@protocol JavaMap;
@class JavaJSONObject;


//defines and their comments (static fields with values)
#define MPDroidAdResponseSerialversionuid 1ll

/**
Java class: MPDroidAdResponse
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.AdResponse")
@interface MPDroidAdResponse : JavaObject <JavaSerializable>

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *adType; /* getAdType */
@property (nonatomic, readonly, copy) NSString *impressionTrackingUrl; /* getImpressionTrackingUrl */
@property (nonatomic, readonly, copy) NSString *adUnitId; /* getAdUnitId */
@property (nonatomic, readonly, copy) NSString *failoverUrl; /* getFailoverUrl */
@property (nonatomic, readonly, retain) JavaInteger *refreshTimeMillis; /* getRefreshTimeMillis */
@property (nonatomic, readonly, copy) NSString *fullAdType; /* getFullAdType */
@property (nonatomic, readonly, copy) NSString *stringBody; /* getStringBody */
@property (nonatomic, readonly, retain) JavaInteger *adTimeoutMillis; /* getAdTimeoutMillis */
@property (nonatomic, readonly, copy) NSString *dspCreativeId; /* getDspCreativeId */
@property (nonatomic, readonly, copy) NSString *redirectUrl; /* getRedirectUrl */
@property (nonatomic, readonly, assign) int64_t timestamp; /* getTimestamp */
@property (nonatomic, readonly, copy) NSString *networkType; /* getNetworkType */
@property (nonatomic, readonly, copy) NSString *customEventClassName; /* getCustomEventClassName */
@property (nonatomic, readonly, copy) NSString *clickTrackingUrl; /* getClickTrackingUrl */
@property (nonatomic, readonly, retain) JavaInteger *width; /* getWidth */
@property (nonatomic, readonly, retain) JavaInteger *height; /* getHeight */
@property (nonatomic, readonly, assign) BOOL hasJson; /* hasJson */
@property (nonatomic, readonly, retain) JavaObject <JavaMap> *serverExtras; /* getServerExtras */
@property (nonatomic, readonly, retain) MPDroidAdResponseBuilder *toBuilder; /* toBuilder */
@property (nonatomic, readonly, getter=isScrollable, assign) BOOL scrollable; /* isScrollable */
@property (nonatomic, readonly, retain) JavaJSONObject *jsonBody; /* getJsonBody */


//static valueless fields


// methods


@end
