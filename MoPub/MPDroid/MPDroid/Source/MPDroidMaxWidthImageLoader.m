//
//  MPDroidMaxWidthImageLoader.m
// 
//  Bridges to the java object com.mopub.network.MaxWidthImageLoader
//  See http://developer.android.com/reference/com/mopub/network/MaxWidthImageLoader.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMaxWidthImageLoader.h>
//other required types
#import <MPDroid/MPDroidImageLoaderImageListener.h>
#import <MPDroid/MPDroidImageLoaderImageCache.h>
#import <MPDroid/MPDroidRequestQueue.h>
#import <AndroidKit/AndroidContext.h>
#import <MPDroid/MPDroidImageLoaderImageContainer.h>


@implementation MPDroidMaxWidthImageLoader


//constructors
@bridge (constructor) initWithRequestQueue:context:imageCache:;


//properties


//methods
@bridge (method, instance) imageLoaderImageContainerForRequestUrl:imageListener: = get;


@end
