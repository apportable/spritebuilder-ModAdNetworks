//
//  MPDroidAuthFailureError.h
// 
//  Bridges to the java object com.mopub.volley.AuthFailureError
//  See http://developer.android.com/reference/com/mopub/volley/AuthFailureError.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidVolleyError.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaException;
@class AndroidIntent;
@class MPDroidNetworkResponse;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAuthFailureError
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.AuthFailureError")
@interface MPDroidAuthFailureError : MPDroidVolleyError 

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithIntent:(AndroidIntent *)intent; /* <init> */
- (instancetype)initWithNetworkResponse:(MPDroidNetworkResponse *)response; /* <init> */
- (instancetype)initWithMessage:(NSString *)message; /* <init> */
- (instancetype)initWithMessage:(NSString *)message exception:(JavaException *)reason; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSString *message; /* getMessage */
@property (nonatomic, readonly, retain) AndroidIntent *resolutionIntent; /* getResolutionIntent */


//static valueless fields


// methods


@end
