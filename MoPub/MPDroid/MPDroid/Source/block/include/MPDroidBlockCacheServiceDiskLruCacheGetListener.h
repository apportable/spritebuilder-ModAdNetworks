//
//  MPDroidBlockCacheServiceDiskLruCacheGetListener.h
//
//  A block-based way adapt to the java interface com.mopub.common.CacheService.DiskLruCacheGetListener
//  See http://developer.android.com/reference/com/mopub/common/CacheService.DiskLruCacheGetListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidCacheServiceDiskLruCacheGetListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockCacheServiceDiskLruCacheGetListener")
@interface MPDroidBlockCacheServiceDiskLruCacheGetListener : MPDroidCacheServiceDiskLruCacheGetListener

//methods
- (void)onComplete:(NSString *)stringParam byteArrayParam:(NSData *)byteArrayParam;


@end
