//
//  MPDroidMoPubViewOnAdClosedListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.OnAdClosedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdClosedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubView;


//static fields


/**
Java interface: MPDroidMoPubViewOnAdClosedListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$OnAdClosedListener")
@protocol MPDroidMoPubViewOnAdClosedListener 

// properties


// methods
- (void)OnAdClosed:(MPDroidMoPubView *)moPubViewParam; /* OnAdClosed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$OnAdClosedListener")
@interface MPDroidMoPubViewOnAdClosedListener : JavaObject <MPDroidMoPubViewOnAdClosedListener>

//properties for handlers
@property (nonatomic, copy) void (^OnAdClosedHandler)(MPDroidMoPubView *);


//convenience class method
+ (MPDroidMoPubViewOnAdClosedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdClosedHandler;

@end