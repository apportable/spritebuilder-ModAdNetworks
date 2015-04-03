//
//  MPDroidMraidBridgeMraidWebView.h
// 
//  Bridges to the java object com.mopub.mraid.MraidBridge.MraidWebView
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.MraidWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseWebView.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener;
@class AndroidContext;
@class AndroidView;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidBridgeMraidWebView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.MraidBridge$MraidWebView")
@interface MPDroidMraidBridgeMraidWebView : MPDroidBaseWebView 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties
@property (nonatomic, readonly, getter=isVisible, assign) BOOL visible; /* isVisible */


//static valueless fields


// methods


@end
