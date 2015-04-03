//
//  MPDroidBlockCacheServiceDiskLruCacheGetListener.m
//
//  A block-based way adapt to the java interface com.mopub.common.CacheService.DiskLruCacheGetListener
//  See MPDroid/MPDroidBlockCacheServiceDiskLruCacheGetListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockCacheServiceDiskLruCacheGetListener.h"
//other required types


@implementation MPDroidBlockCacheServiceDiskLruCacheGetListener

// overrides
- (void)onComplete:(NSString *)stringParam byteArrayParam:(NSData *)byteArrayParam
{
    if (self.onCompleteByteArrayParamHandler)
    {
        self.onCompleteByteArrayParamHandler(stringParam, byteArrayParam);
    }
}



// bridges
@bridge (callback) onComplete:byteArrayParam: = onComplete;


@end
