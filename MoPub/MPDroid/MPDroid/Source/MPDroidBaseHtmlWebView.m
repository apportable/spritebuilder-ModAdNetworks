//
//  MPDroidBaseHtmlWebView.m
// 
//  Bridges to the java object com.mopub.mobileads.BaseHtmlWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseHtmlWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidBaseHtmlWebView.h>
//other required types
#import <MPDroid/MPDroidAdReport.h>
#import <MPDroid/MPDroidViewGestureDetector.h>
#import <AndroidKit/AndroidContext.h>


@implementation MPDroidBaseHtmlWebView


//constructors
@bridge (constructor) initWithContext:adReport:;


//properties
@bridge (instance, method) wasClicked = wasClicked;



//methods
@bridge (method, instance) initializeWithIsScrollable: = init;
@bridge (method, instance) loadUrl: = loadUrl;
@bridge (method, instance) onUserClick = onUserClick;
@bridge (method, instance) onResetUserClick = onResetUserClick;


@end
