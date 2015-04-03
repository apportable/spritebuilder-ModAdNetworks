//
//  MPDroidDownloadResponse.m
// 
//  Bridges to the java object com.mopub.common.DownloadResponse
//  See http://developer.android.com/reference/com/mopub/common/DownloadResponse.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidDownloadResponse.h>
//other required types
#import <ApacheKit/ApacheHttpResponse.h>
#import <MPDroid/MPDroidResponseHeader.h>
#import <ApacheKit/ApacheHeader.h>


@implementation MPDroidDownloadResponse


//constructors
@bridge (constructor) initWithHttpResponse:;


//properties
@bridge (instance, method) contentLength = getContentLength;

@bridge (instance, method) statusCode = getStatusCode;

@bridge (instance, method) byteArray = getByteArray;



//methods
@bridge (method, instance) firstHeaderForResponseHeader: = getFirstHeader;


@end
