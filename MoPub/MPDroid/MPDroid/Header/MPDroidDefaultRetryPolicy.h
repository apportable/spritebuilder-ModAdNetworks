//
//  MPDroidDefaultRetryPolicy.h
// 
//  Bridges to the java object com.mopub.volley.DefaultRetryPolicy
//  See http://developer.android.com/reference/com/mopub/volley/DefaultRetryPolicy.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidRetryPolicy.h>


//necessary forward declarations, classes and protocols
@class MPDroidVolleyError;


//defines and their comments (static fields with values)
#define MPDroidDefaultRetryPolicyDefaultTimeoutMs 2500
#define MPDroidDefaultRetryPolicyDefaultMaxRetries 1
#define MPDroidDefaultRetryPolicyDefaultBackoffMult 1.000000

/**
Java class: MPDroidDefaultRetryPolicy
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.DefaultRetryPolicy")
@interface MPDroidDefaultRetryPolicy : JavaObject <MPDroidRetryPolicy>

// constructors
- (instancetype)init; /* <init> */
- (instancetype)initWithInitialTimeoutMs:(int32_t)initialTimeoutMs maxNumRetries:(int32_t)maxNumRetries backoffMultiplier:(float)backoffMultiplier; /* <init> */


// properties
@property (nonatomic, readonly, assign) int32_t currentRetryCount; /* getCurrentRetryCount */
@property (nonatomic, readonly, assign) int32_t currentTimeout; /* getCurrentTimeout */


//static valueless fields


// methods
- (void)retryWithVolleyError:(MPDroidVolleyError *)error; /* retry */


@end
