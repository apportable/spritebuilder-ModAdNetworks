//
//  MPDroidDownloadResponse.h
// 
//  Bridges to the java object com.mopub.common.DownloadResponse
//  See http://developer.android.com/reference/com/mopub/common/DownloadResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol ApacheHeader;
@protocol ApacheHttpResponse;
@class MPDroidResponseHeader;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDownloadResponse
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.DownloadResponse")
@interface MPDroidDownloadResponse : JavaObject 

// constructors
- (instancetype)initWithHttpResponse:(JavaObject <ApacheHttpResponse> *)httpResponse; /* <init> */


// properties
@property (nonatomic, readonly, assign) int64_t contentLength; /* getContentLength */
@property (nonatomic, readonly, assign) int32_t statusCode; /* getStatusCode */
@property (nonatomic, readonly, copy) NSData *byteArray; /* getByteArray */


//static valueless fields


// methods
- (NSString *)firstHeaderForResponseHeader:(MPDroidResponseHeader *)responseHeader; /* getFirstHeader */


@end
