//
//  MPDroidJsonArrayRequest.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.JsonArrayRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/JsonArrayRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidJsonRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidResponse;
@class MPDroidNetworkResponse;
@protocol MPDroidResponseErrorListener;
@protocol MPDroidResponseListener;


//defines and their comments (static fields with values)


/**
Java class: MPDroidJsonArrayRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.JsonArrayRequest")
@interface MPDroidJsonArrayRequest : MPDroidJsonRequest 

// constructors
- (instancetype)initWithUrl:(NSString *)url listener:(JavaObject <MPDroidResponseListener> *)listener errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */


// properties


//static valueless fields


// methods


@end
