//
//  MPDroidMoPubViewOnAdFailedListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.OnAdFailedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdFailedListener.html for documentation.
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
Java interface: MPDroidMoPubViewOnAdFailedListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$OnAdFailedListener")
@protocol MPDroidMoPubViewOnAdFailedListener 

// properties


// methods
- (void)OnAdFailed:(MPDroidMoPubView *)moPubViewParam; /* OnAdFailed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$OnAdFailedListener")
@interface MPDroidMoPubViewOnAdFailedListener : JavaObject <MPDroidMoPubViewOnAdFailedListener>

//properties for handlers
@property (nonatomic, copy) void (^OnAdFailedHandler)(MPDroidMoPubView *);


//convenience class method
+ (MPDroidMoPubViewOnAdFailedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdFailedHandler;

@end