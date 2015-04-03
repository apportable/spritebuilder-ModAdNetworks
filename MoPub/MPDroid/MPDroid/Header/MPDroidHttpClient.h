//
//  MPDroidHttpClient.h
// 
//  Bridges to the java object com.mopub.common.HttpClient
//  See http://developer.android.com/reference/com/mopub/common/HttpClient.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class ApacheHttpGet;
@class JavaURI;
@class AndroidContext;
@class AndroidHttpClient;


//defines and their comments (static fields with values)
#define MPDroidHttpClientConnectionTimeout 10000
#define MPDroidHttpClientSocketTimeout 10000

/**
Java class: MPDroidHttpClient
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.HttpClient")
@interface MPDroidHttpClient : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (AndroidHttpClient *)httpClient; /* getHttpClient */
+ (ApacheHttpGet *)initializeHttpGet:(NSString *)url; /* initializeHttpGet */
+ (ApacheHttpGet *)initializeHttpGet:(NSString *)url context:(AndroidContext *)context; /* initializeHttpGet */
+ (NSString *)urlEncode:(NSString *)url; /* urlEncode */
+ (NSString *)webViewUserAgentForDefaultUserAgent:(NSString *)defaultUserAgent; /* getWebViewUserAgent */
+ (NSString *)webViewUserAgent; /* getWebViewUserAgent */
+ (void)setWebViewUserAgentByUserAgent:(NSString *)userAgent; /* setWebViewUserAgent */


@end
