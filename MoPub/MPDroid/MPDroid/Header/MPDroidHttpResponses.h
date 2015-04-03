//
//  MPDroidHttpResponses.h
// 
//  Bridges to the java object com.mopub.common.HttpResponses
//  See http://developer.android.com/reference/com/mopub/common/HttpResponses.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidDownloadResponse;
@class JavaJSONObject;
@class AndroidBitmap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidHttpResponses
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.HttpResponses")
@interface MPDroidHttpResponses : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (AndroidBitmap *)asBitmap:(MPDroidDownloadResponse *)downloadResponse; /* asBitmap */
+ (JavaJSONObject *)asJsonObject:(MPDroidDownloadResponse *)downloadResponse; /* asJsonObject */
+ (NSString *)asResponseString:(MPDroidDownloadResponse *)downloadResponse; /* asResponseString */


@end
