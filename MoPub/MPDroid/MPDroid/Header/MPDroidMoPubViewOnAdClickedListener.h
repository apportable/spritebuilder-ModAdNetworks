//
//  MPDroidMoPubViewOnAdClickedListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.OnAdClickedListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdClickedListener.html for documentation.
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
Java interface: MPDroidMoPubViewOnAdClickedListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$OnAdClickedListener")
@protocol MPDroidMoPubViewOnAdClickedListener 

// properties


// methods
- (void)OnAdClicked:(MPDroidMoPubView *)moPubViewParam; /* OnAdClicked */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$OnAdClickedListener")
@interface MPDroidMoPubViewOnAdClickedListener : JavaObject <MPDroidMoPubViewOnAdClickedListener>

//properties for handlers
@property (nonatomic, copy) void (^OnAdClickedHandler)(MPDroidMoPubView *);


//convenience class method
+ (MPDroidMoPubViewOnAdClickedListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdClickedHandler;

@end