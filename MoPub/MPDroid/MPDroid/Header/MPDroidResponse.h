//
//  MPDroidResponse.h
// 
//  Bridges to the java object com.mopub.volley.Response
//  See http://developer.android.com/reference/com/mopub/volley/Response.html for documentation.
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
@class MPDroidVolleyError;


//defines and their comments (static fields with values)


/**
Java class: MPDroidResponse
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.Response")
@interface MPDroidResponse : JavaObject 

// constructors


// properties
@property (nonatomic, readonly, retain) JavaObject *result; /* result */
@property (nonatomic, readonly, retain) MPDroidCacheEntry *cacheEntry; /* cacheEntry */
@property (nonatomic, readonly, retain) MPDroidVolleyError *error; /* error */
@property (nonatomic, assign) BOOL intermediate; /* intermediate */
@property (nonatomic, readonly, getter=isSuccess, assign) BOOL success; /* isSuccess */


//static valueless fields


// methods
+ (MPDroidResponse *)successWithResult:(JavaObject *)result entry:(MPDroidCacheEntry *)cacheEntry; /* success */
+ (MPDroidResponse *)errorWithVolleyError:(MPDroidVolleyError *)error; /* error */


@end
