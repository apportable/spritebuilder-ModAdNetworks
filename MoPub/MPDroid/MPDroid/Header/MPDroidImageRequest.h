//
//  MPDroidImageRequest.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.ImageRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidResponseErrorListener;
@class AndroidBitmapConfig;
@protocol MPDroidResponseListener;
@class MPDroidNetworkResponse;
@class MPDroidRequestPriority;
@class AndroidBitmap;
@class MPDroidResponse;


//defines and their comments (static fields with values)
#define MPDroidImageRequestImageTimeoutMs 1000
#define MPDroidImageRequestImageMaxRetries 2
#define MPDroidImageRequestImageBackoffMult 2.000000

/**
Java class: MPDroidImageRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.ImageRequest")
@interface MPDroidImageRequest : MPDroidRequest 

// constructors
- (instancetype)initWithUrl:(NSString *)url listener:(JavaObject <MPDroidResponseListener> *)listener maxWidth:(int32_t)maxWidth maxHeight:(int32_t)maxHeight config:(AndroidBitmapConfig *)decodeConfig errorListener:(JavaObject <MPDroidResponseErrorListener> *)errorListener; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidRequestPriority *priority; /* getPriority */


//static valueless fields


// methods


@end
