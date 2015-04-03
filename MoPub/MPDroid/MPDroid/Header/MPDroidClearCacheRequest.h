//
//  MPDroidClearCacheRequest.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.ClearCacheRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ClearCacheRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidResponse;
@class MPDroidNetworkResponse;
@class MPDroidRequestPriority;
@protocol JavaRunnable;
@protocol MPDroidCache;


//defines and their comments (static fields with values)


/**
Java class: MPDroidClearCacheRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.ClearCacheRequest")
@interface MPDroidClearCacheRequest : MPDroidRequest 

// constructors
- (instancetype)initWithCache:(JavaObject <MPDroidCache> *)cache runnable:(JavaObject <JavaRunnable> *)callback; /* <init> */


// properties
@property (nonatomic, readonly, getter=isCanceled, assign) BOOL canceled; /* isCanceled */
@property (nonatomic, readonly, retain) MPDroidRequestPriority *priority; /* getPriority */


//static valueless fields


// methods


@end
