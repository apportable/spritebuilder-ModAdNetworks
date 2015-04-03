//
//  MPDroidMoPubViewOnAdLoadedListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.OnAdLoadedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdLoadedListener.html for documentation.
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
Java interface: MPDroidMoPubViewOnAdLoadedListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$OnAdLoadedListener")
@protocol MPDroidMoPubViewOnAdLoadedListener 

// properties


// methods
- (void)OnAdLoaded:(MPDroidMoPubView *)moPubViewParam; /* OnAdLoaded */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$OnAdLoadedListener")
@interface MPDroidMoPubViewOnAdLoadedListener : JavaObject <MPDroidMoPubViewOnAdLoadedListener>

//properties for handlers
@property (nonatomic, copy) void (^OnAdLoadedHandler)(MPDroidMoPubView *);


//convenience class method
+ (MPDroidMoPubViewOnAdLoadedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdLoadedHandler;

@end