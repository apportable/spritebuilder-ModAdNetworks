//
//  MPDroidHurlStackUrlRewriter.h
// 
//  Bridges to the java interface com.mopub.volley.toolbox.HurlStack.UrlRewriter
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HurlStack.UrlRewriter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidHurlStackUrlRewriter
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.toolbox.HurlStack$UrlRewriter")
@protocol MPDroidHurlStackUrlRewriter 

// properties


// methods
- (NSString *)rewriteUrl:(NSString *)url; /* rewriteUrl */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.toolbox.HurlStack$UrlRewriter")
@interface MPDroidHurlStackUrlRewriter : JavaObject <MPDroidHurlStackUrlRewriter>

//properties for handlers


//convenience class method


@end