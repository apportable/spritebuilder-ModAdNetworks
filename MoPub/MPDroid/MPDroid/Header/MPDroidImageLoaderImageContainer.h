//
//  MPDroidImageLoaderImageContainer.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.ImageLoader.ImageContainer
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.ImageContainer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidImageLoader;
@protocol MPDroidImageLoaderImageListener;
@class AndroidBitmap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidImageLoaderImageContainer
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.ImageLoader$ImageContainer")
@interface MPDroidImageLoaderImageContainer : JavaObject 

// constructors
- (instancetype)initWithImageLoader:(MPDroidImageLoader *)bitmap bitmap:(AndroidBitmap *)requestUrl cacheKey:(NSString *)cacheKey listener:(NSString *)listener; /* <init> */


// properties
@property (nonatomic, readonly, retain) AndroidBitmap *bitmap; /* getBitmap */
@property (nonatomic, readonly, copy) NSString *requestUrl; /* getRequestUrl */


//static valueless fields


// methods
- (void)cancelRequest; /* cancelRequest */


@end
