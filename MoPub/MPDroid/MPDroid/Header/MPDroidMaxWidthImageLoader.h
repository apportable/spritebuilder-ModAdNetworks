//
//  MPDroidMaxWidthImageLoader.h
// 
//  Bridges to the java object com.mopub.network.MaxWidthImageLoader
//  See http://developer.android.com/reference/com/mopub/network/MaxWidthImageLoader.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidImageLoader.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidImageLoaderImageListener;
@protocol MPDroidImageLoaderImageCache;
@class MPDroidRequestQueue;
@class AndroidContext;
@class MPDroidImageLoaderImageContainer;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMaxWidthImageLoader
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.MaxWidthImageLoader")
@interface MPDroidMaxWidthImageLoader : MPDroidImageLoader 

// constructors
- (instancetype)initWithRequestQueue:(MPDroidRequestQueue *)queue context:(AndroidContext *)context imageCache:(JavaObject <MPDroidImageLoaderImageCache> *)imageCache; /* <init> */


// properties


//static valueless fields


// methods
- (MPDroidImageLoaderImageContainer *)imageLoaderImageContainerForRequestUrl:(NSString *)requestUrl imageListener:(JavaObject <MPDroidImageLoaderImageListener> *)listener; /* get */


@end
