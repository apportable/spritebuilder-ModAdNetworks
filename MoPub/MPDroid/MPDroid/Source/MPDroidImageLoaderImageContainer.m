//
//  MPDroidImageLoaderImageContainer.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.ImageLoader.ImageContainer
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.ImageContainer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidImageLoaderImageContainer.h>
//other required types
#import <AndroidKit/AndroidBitmap.h>
#import <MPDroid/MPDroidImageLoader.h>
#import <MPDroid/MPDroidImageLoaderImageListener.h>


@implementation MPDroidImageLoaderImageContainer


//constructors
@bridge (constructor) initWithImageLoader:bitmap:cacheKey:listener:;


//properties
@bridge (instance, method) bitmap = getBitmap;

@bridge (instance, method) requestUrl = getRequestUrl;



//methods
@bridge (method, instance) cancelRequest = cancelRequest;


@end
