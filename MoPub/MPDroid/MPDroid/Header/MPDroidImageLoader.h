//
//  MPDroidImageLoader.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.ImageLoader
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidVolleyError;
@protocol MPDroidImageLoaderImageCache;
@class MPDroidRequest;
@class AndroidImageView;
@class JavaHashMap;
@class MPDroidRequestQueue;
@class MPDroidImageLoaderImageContainer;
@protocol JavaRunnable;
@class AndroidBitmap;
@class AndroidHandler;
@protocol MPDroidImageLoaderImageListener;


//defines and their comments (static fields with values)


/**
Java class: MPDroidImageLoader
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.ImageLoader")
@interface MPDroidImageLoader : JavaObject 

// constructors
- (instancetype)initWithRequestQueue:(MPDroidRequestQueue *)queue imageCache:(JavaObject <MPDroidImageLoaderImageCache> *)imageCache; /* <init> */


// properties


//static valueless fields


// methods
+ (JavaObject <MPDroidImageLoaderImageListener> *)imageListenerForImageView:(AndroidImageView *)view defaultImageResId:(int32_t)defaultImageResId errorImageResId:(int32_t)errorImageResId; /* getImageListener */
- (BOOL)isCached:(NSString *)requestUrl maxWidth:(int32_t)maxWidth maxHeight:(int32_t)maxHeight; /* isCached */
- (MPDroidImageLoaderImageContainer *)imageLoaderImageContainerForRequestUrl:(NSString *)requestUrl imageListener:(JavaObject <MPDroidImageLoaderImageListener> *)listener; /* get */
- (MPDroidImageLoaderImageContainer *)imageLoaderImageContainerForRequestUrl:(NSString *)requestUrl imageListener:(JavaObject <MPDroidImageLoaderImageListener> *)imageListener maxWidth:(int32_t)maxWidth maxHeight:(int32_t)maxHeight; /* get */
- (void)setBatchedResponseDelay:(int32_t)newBatchedResponseDelayMs; /* setBatchedResponseDelay */


@end
