//
//  MPDroidImageLoaderImageCache.h
// 
//  Bridges to the java interface com.mopub.volley.toolbox.ImageLoader.ImageCache
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.ImageCache.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidBitmap;


//static fields


/**
Java interface: MPDroidImageLoaderImageCache
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.toolbox.ImageLoader$ImageCache")
@protocol MPDroidImageLoaderImageCache 

// properties


// methods
- (AndroidBitmap *)bitmapForKey:(NSString *)key; /* getBitmap */
- (void)putBitmap:(NSString *)key bitmap:(AndroidBitmap *)bitmap; /* putBitmap */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.toolbox.ImageLoader$ImageCache")
@interface MPDroidImageLoaderImageCache : JavaObject <MPDroidImageLoaderImageCache>

//properties for handlers


//convenience class method


@end