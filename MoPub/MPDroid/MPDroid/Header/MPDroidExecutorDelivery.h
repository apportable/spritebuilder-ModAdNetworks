//
//  MPDroidExecutorDelivery.h
// 
//  Bridges to the java object com.mopub.volley.ExecutorDelivery
//  See http://developer.android.com/reference/com/mopub/volley/ExecutorDelivery.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidResponseDelivery.h>


//necessary forward declarations, classes and protocols
@class MPDroidRequest;
@class MPDroidResponse;
@class AndroidHandler;
@class MPDroidVolleyError;
@protocol JavaRunnable;
@protocol JavaExecutor;


//defines and their comments (static fields with values)


/**
Java class: MPDroidExecutorDelivery
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.ExecutorDelivery")
@interface MPDroidExecutorDelivery : JavaObject <MPDroidResponseDelivery>

// constructors
- (instancetype)initWithHandler:(AndroidHandler *)handler; /* <init> */
- (instancetype)initWithExecutor:(JavaObject <JavaExecutor> *)executor; /* <init> */


// properties


//static valueless fields


// methods
- (void)postResponse:(MPDroidRequest *)request response:(MPDroidResponse *)response; /* postResponse */
- (void)postResponse:(MPDroidRequest *)request response:(MPDroidResponse *)response runnable:(JavaObject <JavaRunnable> *)runnable; /* postResponse */
- (void)postError:(MPDroidRequest *)request volleyError:(MPDroidVolleyError *)error; /* postError */


@end
