//
//  MPDroidJsonObjectRequest.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.JsonObjectRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/JsonObjectRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidJsonRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidResponseListener;
@class MPDroidResponse;
@protocol MPDroidResponseErrorListener;
@class MPDroidNetworkResponse;
@class JavaJSONObject;


//defines and their comments (static fields with values)


/**
Java class: MPDroidJsonObjectRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.JsonObjectRequest")
@interface MPDroidJsonObjectRequest : MPDroidJsonRequest 

// constructors
- (instancetype)initWithMethod:(int32_t)method url:(NSString *)url JSONObject:(JavaJSONObject *)jsonRequest listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */
- (instancetype)initWithUrl:(NSString *)url JSONObject:(JavaJSONObject *)jsonRequest listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */


// properties


//static valueless fields


// methods


@end
