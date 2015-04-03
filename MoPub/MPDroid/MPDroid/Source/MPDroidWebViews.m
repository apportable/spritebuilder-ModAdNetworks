//
//  MPDroidWebViews.m
// 
//  Bridges to the java object com.mopub.mobileads.util.WebViews
//  See http://developer.android.com/reference/com/mopub/mobileads/util/WebViews.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidWebViews.h>
//other required types
#import <AndroidKit/AndroidWebView.h>


@implementation MPDroidWebViews


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) onResume: = onResume;
@bridge (method, static) onPause:isFinishing: = onPause;
@bridge (method, static) setDisableJSChromeClientByWebView: = setDisableJSChromeClient;


@end
