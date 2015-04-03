//
//  MPDroidMoPubBrowser.m
// 
//  Bridges to the java object com.mopub.common.MoPubBrowser
//  See http://developer.android.com/reference/com/mopub/common/MoPubBrowser.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMoPubBrowser.h>
//other required types
#import <AndroidKit/AndroidDrawable.h>
#import <AndroidKit/AndroidImageButton.h>
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidWebView.h>
#import <AndroidKit/AndroidBundle.h>
#import <AndroidKit/AndroidView.h>


@implementation MPDroidMoPubBrowser


//constructors
@bridge (constructor) init;


//properties


//methods
@bridge (method, static) openWithContext:url: = open;
@bridge (method, instance) onCreate: = onCreate;


@end
