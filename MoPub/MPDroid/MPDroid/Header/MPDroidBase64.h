//
//  MPDroidBase64.h
// 
//  Bridges to the java object com.mopub.mobileads.util.Base64
//  See http://developer.android.com/reference/com/mopub/mobileads/util/Base64.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)
#define MPDroidBase64Default 0
#define MPDroidBase64NoPadding 1
#define MPDroidBase64NoWrap 2
#define MPDroidBase64Crlf 4
#define MPDroidBase64UrlSafe 8
#define MPDroidBase64NoClose 16

/**
Java class: MPDroidBase64
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.util.Base64")
@interface MPDroidBase64 : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (NSData *)decodeWithStr:(NSString *)str flags:(int32_t)flags; /* decode */
+ (NSData *)decodeWithInput:(NSData *)input flags:(int32_t)flags; /* decode */
+ (NSData *)decodeWithInput:(NSData *)input offset:(int32_t)offset length:(int32_t)length flags:(int32_t)flags; /* decode */
+ (NSString *)encodeToString:(NSData *)input flags:(int32_t)flags; /* encodeToString */
+ (NSString *)encodeToString:(NSData *)input offset:(int32_t)offset length:(int32_t)length flags:(int32_t)flags; /* encodeToString */
+ (NSData *)encodeWithInput:(NSData *)input flags:(int32_t)flags; /* encode */
+ (NSData *)encodeWithInput:(NSData *)input offset:(int32_t)offset length:(int32_t)length flags:(int32_t)flags; /* encode */


@end
