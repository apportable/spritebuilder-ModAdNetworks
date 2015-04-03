//
//  MPDroidImageLoader.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.ImageLoader
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidImageLoader.h>
//other required types
#import <MPDroid/MPDroidVolleyError.h>
#import <MPDroid/MPDroidImageLoaderImageCache.h>
#import <MPDroid/MPDroidRequest.h>
#import <AndroidKit/AndroidImageView.h>
#import <JavaKit/JavaHashMap.h>
#import <MPDroid/MPDroidRequestQueue.h>
#import <MPDroid/MPDroidImageLoaderImageContainer.h>
#import <JavaKit/JavaRunnable.h>
#import <AndroidKit/AndroidBitmap.h>
#import <AndroidKit/AndroidHandler.h>
#import <MPDroid/MPDroidImageLoaderImageListener.h>


@implementation MPDroidImageLoader


//constructors
@bridge (constructor) initWithRequestQueue:imageCache:;


//properties


//methods
@bridge (method, static) imageListenerForImageView:defaultImageResId:errorImageResId: = getImageListener;
@bridge (method, instance) isCached:maxWidth:maxHeight: = isCached;
@bridge (method, instance) imageLoaderImageContainerForRequestUrl:imageListener: = get;
@bridge (method, instance) imageLoaderImageContainerForRequestUrl:imageListener:maxWidth:maxHeight: = get;
@bridge (method, instance) setBatchedResponseDelay: = setBatchedResponseDelay;


@end
