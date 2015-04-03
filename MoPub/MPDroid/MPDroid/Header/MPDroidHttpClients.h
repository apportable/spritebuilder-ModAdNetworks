//
//  MPDroidHttpClients.h
// 
//  Bridges to the java object com.mopub.mobileads.util.HttpClients
//  See http://developer.android.com/reference/com/mopub/mobileads/util/HttpClients.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol ApacheHttpClient;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHttpClients
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.util.HttpClients")
@interface MPDroidHttpClients : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)safeShutdown:(JavaObject <ApacheHttpClient> *)httpClient; /* safeShutdown */


@end
