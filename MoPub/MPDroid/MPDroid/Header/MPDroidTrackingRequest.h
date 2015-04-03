//
//  MPDroidTrackingRequest.h
// 
//  Bridges to the java object com.mopub.network.TrackingRequest
//  See http://developer.android.com/reference/com/mopub/network/TrackingRequest.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidRequest.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@protocol MPDroidTrackingRequestListener;
@class MPDroidResponse;
@class MPDroidNetworkResponse;
@class JavaVoid;
@protocol JavaIterable;
@class AndroidContext;
@class MPDroidMoPubEventsType;


//defines and their comments (static fields with values)


/**
Java class: MPDroidTrackingRequest
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.network.TrackingRequest")
@interface MPDroidTrackingRequest : MPDroidRequest 

// constructors


// properties


//static valueless fields


// methods
- (void)deliverResponse:(JavaVoid *)aVoid; /* deliverResponse */
+ (void)makeTrackingHttpRequest:(JavaObject <JavaIterable> *)urls context:(AndroidContext *)context; /* makeTrackingHttpRequest */
+ (void)makeTrackingHttpRequest:(JavaObject <JavaIterable> *)urls context:(AndroidContext *)context type:(MPDroidMoPubEventsType *)type; /* makeTrackingHttpRequest */
+ (void)makeTrackingHttpRequest:(JavaObject <JavaIterable> *)urls context:(AndroidContext *)context listener:(JavaObject <MPDroidTrackingRequestListener> *)listener type:(MPDroidMoPubEventsType *)type; /* makeTrackingHttpRequest */
// Duplicated: + (void)makeTrackingHttpRequest:(NSString *)url context:(AndroidContext *)context; /* makeTrackingHttpRequest */
+ (void)makeTrackingHttpRequest:(NSString *)url context:(AndroidContext *)context listener:(JavaObject <MPDroidTrackingRequestListener> *)listener; /* makeTrackingHttpRequest */
// Duplicated: + (void)makeTrackingHttpRequest:(NSString *)url context:(AndroidContext *)context type:(MPDroidMoPubEventsType *)type; /* makeTrackingHttpRequest */
// Duplicated: + (void)makeTrackingHttpRequest:(NSString *)url context:(AndroidContext *)context listener:(JavaObject <MPDroidTrackingRequestListener> *)listener type:(MPDroidMoPubEventsType *)type; /* makeTrackingHttpRequest */
- (void)deliverResponse; /* deliverResponse */


@end
