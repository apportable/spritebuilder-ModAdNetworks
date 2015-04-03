//
//  MPDroidNetworking.h
// 
//  Bridges to the java object com.mopub.network.Networking
//  See http://developer.android.com/reference/com/mopub/network/Networking.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMaxWidthImageLoader;
@class MPDroidImageLoader;
@class MPDroidRequestQueue;
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidNetworkingCacheDirectoryName @"mopub-volley-cache"
#define MPDroidNetworkingTenMb 10485760

/**
Java class: MPDroidNetworking
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.Networking")
@interface MPDroidNetworking : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidRequestQueue *)requestQueueForContext:(AndroidContext *)context; /* getRequestQueue */
+ (MPDroidImageLoader *)imageLoaderForContext:(AndroidContext *)context; /* getImageLoader */
+ (NSString *)userAgentForContext:(AndroidContext *)context; /* getUserAgent */
+ (void)clearForTesting; /* clearForTesting */
+ (void)setRequestQueueForTestingByRequestQueue:(MPDroidRequestQueue *)queue; /* setRequestQueueForTesting */
+ (void)setImageLoaderForTestingByMaxWidthImageLoader:(MPDroidMaxWidthImageLoader *)imageLoader; /* setImageLoaderForTesting */
+ (void)setUserAgentForTestingByUserAgent:(NSString *)userAgent; /* setUserAgentForTesting */


@end
