//
//  MPDroidHttpHeaderParser.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.HttpHeaderParser
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HttpHeaderParser.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidCacheEntry;
@class MPDroidNetworkResponse;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHttpHeaderParser
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.HttpHeaderParser")
@interface MPDroidHttpHeaderParser : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (MPDroidCacheEntry *)parseCacheHeaders:(MPDroidNetworkResponse *)response; /* parseCacheHeaders */
+ (int64_t)parseDateAsEpoch:(NSString *)dateStr; /* parseDateAsEpoch */
+ (NSString *)parseCharset:(JavaObject <JavaMap> *)headers; /* parseCharset */


@end
