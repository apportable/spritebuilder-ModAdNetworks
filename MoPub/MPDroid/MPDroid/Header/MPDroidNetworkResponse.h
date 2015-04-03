//
//  MPDroidNetworkResponse.h
// 
//  Bridges to the java object com.mopub.volley.NetworkResponse
//  See http://developer.android.com/reference/com/mopub/volley/NetworkResponse.html for documentation.
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
Java class: MPDroidNetworkResponse
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.NetworkResponse")
@interface MPDroidNetworkResponse : JavaObject 

// constructors
- (instancetype)initWithStatusCode:(int32_t)statusCode data:(NSData *)data map:(JavaObject <JavaMap> *)headers notModified:(BOOL)notModified; /* <init> */
- (instancetype)initWithData:(NSData *)data; /* <init> */
- (instancetype)initWithData:(NSData *)data map:(JavaObject <JavaMap> *)headers; /* <init> */


// properties
@property (nonatomic, readonly, assign) int32_t statusCode; /* statusCode */
@property (nonatomic, readonly, copy) NSData *data; /* data */
@property (nonatomic, readonly, retain) JavaObject <JavaMap> *headers; /* headers */
@property (nonatomic, readonly, assign) BOOL notModified; /* notModified */


//static valueless fields


// methods


@end
