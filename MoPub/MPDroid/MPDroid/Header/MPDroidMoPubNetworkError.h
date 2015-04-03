//
//  MPDroidMoPubNetworkError.h
// 
//  Bridges to the java object com.mopub.network.MoPubNetworkError
//  See http://developer.android.com/reference/com/mopub/network/MoPubNetworkError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidVolleyError.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidNetworkResponse;
@class JavaThrowable;
@class MPDroidMoPubNetworkErrorReason;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMoPubNetworkError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.MoPubNetworkError")
@interface MPDroidMoPubNetworkError : MPDroidVolleyError 

// constructors
- (instancetype)initWithReason:(MPDroidMoPubNetworkErrorReason *)reason; /* <init> */
- (instancetype)initWithNetworkResponse:(MPDroidNetworkResponse *)networkResponse reason:(MPDroidMoPubNetworkErrorReason *)reason; /* <init> */
- (instancetype)initWithThrowable:(JavaThrowable *)cause reason:(MPDroidMoPubNetworkErrorReason *)reason; /* <init> */
- (instancetype)initWithMessage:(NSString *)message reason:(MPDroidMoPubNetworkErrorReason *)reason; /* <init> */
- (instancetype)initWithMessage:(NSString *)message throwable:(JavaThrowable *)cause reason:(MPDroidMoPubNetworkErrorReason *)reason; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidMoPubNetworkErrorReason *reason; /* getReason */


//static valueless fields


// methods


@end
