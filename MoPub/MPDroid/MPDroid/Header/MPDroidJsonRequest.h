//
//  MPDroidJsonRequest.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.JsonRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/JsonRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidResponseListener;
@protocol MPDroidResponseErrorListener;
@class MPDroidResponse;
@class MPDroidNetworkResponse;


//defines and their comments (static fields with values)
#define MPDroidJsonRequestProtocolCharset @"utf-8"

/**
Java class: MPDroidJsonRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.JsonRequest")
@interface MPDroidJsonRequest : MPDroidRequest 

// constructors
- (instancetype)initWithUrl:(NSString *)url requestBody:(NSString *)requestBody listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */
- (instancetype)initWithMethod:(int32_t)method url:(NSString *)url requestBody:(NSString *)requestBody listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSData *body; /* getBody */
@property (nonatomic, readonly, copy) NSString *bodyContentType; /* getBodyContentType */


//static valueless fields


// methods


@end
