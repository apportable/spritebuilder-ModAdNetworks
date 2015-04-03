//
//  MPDroidCacheServiceDiskLruCacheGetListener.m
// 
//  An adapter to the java interface com.mopub.common.CacheService.DiskLruCacheGetListener
//  See http://developer.android.com/reference/com/mopub/common/CacheService.DiskLruCacheGetListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidCacheServiceDiskLruCacheGetListener.h>
//other required types
#import "block/include/MPDroidBlockCacheServiceDiskLruCacheGetListener.h"


@implementation MPDroidCacheServiceDiskLruCacheGetListener

//properties
@bridge (method, instance) onComplete:byteArrayParam: = onComplete;


//methods


//convenience class method
+ (MPDroidCacheServiceDiskLruCacheGetListener *)listenerWithBlock:(void (^)(NSString *, NSData *))onCompleteByteArrayParamHandler
{
    MPDroidCacheServiceDiskLruCacheGetListener *listener = [[MPDroidBlockCacheServiceDiskLruCacheGetListener alloc] init];
    listener.onCompleteByteArrayParamHandler = onCompleteByteArrayParamHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onCompleteByteArrayParamHandler != nil)
    {
        Block_release(_onCompleteByteArrayParamHandler);
        _onCompleteByteArrayParamHandler = nil;
    }
    [super dealloc];
}


@end
