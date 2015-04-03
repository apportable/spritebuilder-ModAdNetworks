//
//  MPDroidCacheServiceDiskLruCacheGetListener.h
// 
//  Bridges to the java interface com.mopub.common.CacheService.DiskLruCacheGetListener
//  See http://developer.android.com/reference/com/mopub/common/CacheService.DiskLruCacheGetListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidCacheServiceDiskLruCacheGetListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.common.CacheService$DiskLruCacheGetListener")
@protocol MPDroidCacheServiceDiskLruCacheGetListener 

// properties


// methods
- (void)onComplete:(NSString *)stringParam byteArrayParam:(NSData *)byteArrayParam; /* onComplete */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.common.CacheService$DiskLruCacheGetListener")
@interface MPDroidCacheServiceDiskLruCacheGetListener : JavaObject <MPDroidCacheServiceDiskLruCacheGetListener>

//properties for handlers
@property (nonatomic, copy) void (^onCompleteByteArrayParamHandler)(NSString *, NSData *);


//convenience class method
+ (MPDroidCacheServiceDiskLruCacheGetListener *)listenerWithBlock:(void (^)(NSString *, NSData *))onCompleteByteArrayParamHandler;

@end