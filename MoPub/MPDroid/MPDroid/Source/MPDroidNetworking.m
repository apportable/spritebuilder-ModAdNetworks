//
//  MPDroidNetworking.m
// 
//  Bridges to the java object com.mopub.network.Networking
//  See http://developer.android.com/reference/com/mopub/network/Networking.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidNetworking.h>
//other required types
#import <MPDroid/MPDroidMaxWidthImageLoader.h>
#import <MPDroid/MPDroidImageLoader.h>
#import <MPDroid/MPDroidRequestQueue.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidNetworking


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) requestQueueForContext: = getRequestQueue;
@bridge (method, static) imageLoaderForContext: = getImageLoader;
@bridge (method, static) userAgentForContext: = getUserAgent;
@bridge (method, static) clearForTesting = clearForTesting;
@bridge (method, static) setRequestQueueForTestingByRequestQueue: = setRequestQueueForTesting;
@bridge (method, static) setImageLoaderForTestingByMaxWidthImageLoader: = setImageLoaderForTesting;
@bridge (method, static) setUserAgentForTestingByUserAgent: = setUserAgentForTesting;


@end
