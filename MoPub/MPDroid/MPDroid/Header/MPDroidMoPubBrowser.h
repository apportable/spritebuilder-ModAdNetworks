//
//  MPDroidMoPubBrowser.h
// 
//  Bridges to the java object com.mopub.common.MoPubBrowser
//  See http://developer.android.com/reference/com/mopub/common/MoPubBrowser.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidActivity.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidWebView;
@class AndroidImageButton;
@class AndroidContext;
@class AndroidBundle;
@class AndroidView;
@class AndroidDrawable;


//defines and their comments (static fields with values)
#define MPDroidMoPubBrowserDestinationUrlKey @"URL"
#define MPDroidMoPubBrowserInnerLayoutId 1

/**
Java class: MPDroidMoPubBrowser
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.MoPubBrowser")
@interface MPDroidMoPubBrowser : AndroidActivity 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)openWithContext:(AndroidContext *)context url:(NSString *)url; /* open */
- (void)onCreate:(AndroidBundle *)savedInstanceState; /* onCreate */


@end
