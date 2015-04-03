//
//  MPDroidVolley.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.Volley
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/Volley.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVolley.h>
//other required types
#import <MPDroid/MPDroidHttpStack.h>
#import <MPDroid/MPDroidRequestQueue.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidVolley


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) newRequestQueue:httpStack: = newRequestQueue;
@bridge (method, static) newRequestQueue: = newRequestQueue;


@end
