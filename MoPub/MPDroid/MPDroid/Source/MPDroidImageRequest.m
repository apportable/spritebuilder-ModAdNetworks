//
//  MPDroidImageRequest.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.ImageRequest
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/ImageRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidImageRequest.h>
//other required types
#import <MPDroid/MPDroidResponseErrorListener.h>
#import <AndroidKit/AndroidBitmapConfig.h>
#import <MPDroid/MPDroidResponseListener.h>
#import <MPDroid/MPDroidNetworkResponse.h>
#import <MPDroid/MPDroidRequestPriority.h>
#import <AndroidKit/AndroidBitmap.h>
#import <MPDroid/MPDroidResponse.h>


@implementation MPDroidImageRequest


//constructors
@bridge (constructor) initWithUrl:listener:maxWidth:maxHeight:config:errorListener:;


//properties
@bridge (instance, method) priority = getPriority;



//methods


@end
