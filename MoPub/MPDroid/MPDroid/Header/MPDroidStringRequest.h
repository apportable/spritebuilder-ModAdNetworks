//
//  MPDroidStringRequest.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.StringRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/StringRequest.html for documentation.
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
@class MPDroidResponse;
@protocol MPDroidResponseErrorListener;
@class MPDroidNetworkResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidStringRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.StringRequest")
@interface MPDroidStringRequest : MPDroidRequest 

// constructors
- (instancetype)initWithMethod:(int32_t)method url:(NSString *)url listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */
- (instancetype)initWithUrl:(NSString *)url listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */


// properties


//static valueless fields


// methods


@end
