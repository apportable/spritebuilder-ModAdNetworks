//
//  MPDroidBaseWebView.h
// 
//  Bridges to the java object com.mopub.mobileads.BaseWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidWebView.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBaseWebView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.BaseWebView")
@interface MPDroidBaseWebView : AndroidWebView 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties


//static valueless fields


// methods
- (void)destroy; /* destroy */


@end
