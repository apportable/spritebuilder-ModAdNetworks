//
//  MPDroidRequestFuture.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.RequestFuture
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/RequestFuture.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <JavaKit/JavaFuture.h>
#import <MPDroid/MPDroidResponseListener.h>
#import <MPDroid/MPDroidResponseErrorListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidRequest;
@class JavaTimeUnit;
@class MPDroidVolleyError;
@class JavaLong;


//defines and their comments (static fields with values)


/**
Java class: MPDroidRequestFuture
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.RequestFuture")
@interface MPDroidRequestFuture : JavaObject <JavaFuture, MPDroidResponseListener, MPDroidResponseErrorListener>

// constructors


// properties
@property (nonatomic, readonly, getter=isCancelled, assign) BOOL cancelled; /* isCancelled */
@property (nonatomic, readonly, getter=isDone, assign) BOOL done; /* isDone */


//static valueless fields


// methods
+ (MPDroidRequestFuture *)newFuture; /* newFuture */
- (void)setRequest:(MPDroidRequest *)request; /* setRequest */
- (BOOL)cancelWithMayInterruptIfRunning:(BOOL)mayInterruptIfRunning; /* cancel */
- (JavaObject *)result; /* get */
- (JavaObject *)objectForTimeout:(int64_t)timeout timeUnit:(JavaTimeUnit *)unit; /* get */
- (void)onResponse:(JavaObject *)response; /* onResponse */
- (void)onErrorResponse:(MPDroidVolleyError *)error; /* onErrorResponse */


@end
