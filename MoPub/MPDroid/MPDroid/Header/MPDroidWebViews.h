//
//  MPDroidWebViews.h
// 
//  Bridges to the java object com.mopub.mobileads.util.WebViews
//  See http://developer.android.com/reference/com/mopub/mobileads/util/WebViews.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidWebView;


//defines and their comments (static fields with values)


/**
Java class: MPDroidWebViews
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.util.WebViews")
@interface MPDroidWebViews : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)onResume:(AndroidWebView *)webView; /* onResume */
+ (void)onPause:(AndroidWebView *)webView isFinishing:(BOOL)isFinishing; /* onPause */
+ (void)setDisableJSChromeClientByWebView:(AndroidWebView *)webView; /* setDisableJSChromeClient */


@end
