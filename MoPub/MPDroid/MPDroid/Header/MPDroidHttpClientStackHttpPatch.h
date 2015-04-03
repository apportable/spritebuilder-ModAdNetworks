//
//  MPDroidHttpClientStackHttpPatch.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.HttpClientStack.HttpPatch
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/HttpClientStack.HttpPatch.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <ApacheKit/ApacheHttpEntityEnclosingRequestBase.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaURI;


//defines and their comments (static fields with values)
#define MPDroidHttpClientStackHttpPatchMethodName @"PATCH"

/**
Java class: MPDroidHttpClientStackHttpPatch
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.HttpClientStack$HttpPatch")
@interface MPDroidHttpClientStackHttpPatch : ApacheHttpEntityEnclosingRequestBase 

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithURI:(JavaURI *)uri; /* <init> */
- (instancetype)initWithUri:(NSString *)uri; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSString *method; /* getMethod */


//static valueless fields


// methods


@end
