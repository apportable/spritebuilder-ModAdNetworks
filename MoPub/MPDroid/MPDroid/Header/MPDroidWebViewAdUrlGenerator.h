//
//  MPDroidWebViewAdUrlGenerator.h
// 
//  Bridges to the java object com.mopub.mobileads.WebViewAdUrlGenerator
//  See http://developer.android.com/reference/com/mopub/mobileads/WebViewAdUrlGenerator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidAdUrlGenerator.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidWebViewAdUrlGenerator
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.WebViewAdUrlGenerator")
@interface MPDroidWebViewAdUrlGenerator : MPDroidAdUrlGenerator 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context isStorePictureSupported:(BOOL)isStorePictureSupported; /* <init> */


// properties


//static valueless fields


// methods
- (NSString *)generateUrlString:(NSString *)serverHostname; /* generateUrlString */


@end
