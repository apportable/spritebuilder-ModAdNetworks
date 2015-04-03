//
//  MPDroidBlockImageLoaderImageListener.h
//
//  A block-based way adapt to the java interface com.mopub.volley.toolbox.ImageLoader.ImageListener
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageLoader.ImageListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidImageLoaderImageListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockImageLoaderImageListener")
@interface MPDroidBlockImageLoaderImageListener : MPDroidImageLoaderImageListener

//methods
- (void)onResponse:(MPDroidImageLoaderImageContainer *)imageContainer isImmediate:(BOOL)isImmediate;
- (void)onErrorResponse:(MPDroidVolleyError *)error;


@end
