//
//  MPDroidPlayServicesUrlRewriter.h
// 
//  Bridges to the java object com.mopub.network.PlayServicesUrlRewriter
//  See http://developer.android.com/reference/com/mopub/network/PlayServicesUrlRewriter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidHurlStackUrlRewriter.h>


//necessary forward declarations, classes and protocols
@class AndroidContext;


//defines and their comments (static fields with values)
#define MPDroidPlayServicesUrlRewriterIfaPrefix @"ifa:"
#define MPDroidPlayServicesUrlRewriterUdidTemplate @"mp_tmpl_advertising_id"
#define MPDroidPlayServicesUrlRewriterDoNotTrackTemplate @"mp_tmpl_do_not_track"

/**
Java class: MPDroidPlayServicesUrlRewriter
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.PlayServicesUrlRewriter")
@interface MPDroidPlayServicesUrlRewriter : JavaObject <MPDroidHurlStackUrlRewriter>

// constructors
- (instancetype)initWithDeviceId:(NSString *)deviceId context:(AndroidContext *)context; /* <init> */


// properties


//static valueless fields


// methods
- (NSString *)rewriteUrl:(NSString *)url; /* rewriteUrl */


@end
