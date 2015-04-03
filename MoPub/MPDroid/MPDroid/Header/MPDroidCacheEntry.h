//
//  MPDroidCacheEntry.h
// 
//  Bridges to the java object com.mopub.volley.Cache.Entry
//  See http://developer.android.com/reference/com/mopub/volley/Cache.Entry.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidCacheEntry
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.Cache$Entry")
@interface MPDroidCacheEntry : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, copy) NSData *data; /* data */
@property (nonatomic, copy) NSString *etag; /* etag */
@property (nonatomic, assign) int64_t serverDate; /* serverDate */
@property (nonatomic, assign) int64_t softTtl; /* softTtl */
@property (nonatomic, retain) JavaObject <JavaMap> *responseHeaders; /* responseHeaders */
@property (nonatomic, readonly, getter=isExpired, assign) BOOL expired; /* isExpired */


//static valueless fields


// methods
- (BOOL)refreshNeeded; /* refreshNeeded */


@end
