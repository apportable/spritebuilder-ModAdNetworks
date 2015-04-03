//
//  MPDroidMoPubViewOnAdPresentedOverlayListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.OnAdPresentedOverlayListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdPresentedOverlayListener.html for documentation.
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
Java interface: MPDroidMoPubViewOnAdPresentedOverlayListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$OnAdPresentedOverlayListener")
@protocol MPDroidMoPubViewOnAdPresentedOverlayListener 

// properties


// methods
- (void)OnAdPresentedOverlay:(MPDroidMoPubView *)moPubViewParam; /* OnAdPresentedOverlay */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$OnAdPresentedOverlayListener")
@interface MPDroidMoPubViewOnAdPresentedOverlayListener : JavaObject <MPDroidMoPubViewOnAdPresentedOverlayListener>

//properties for handlers
@property (nonatomic, copy) void (^OnAdPresentedOverlayHandler)(MPDroidMoPubView *);


//convenience class method
+ (MPDroidMoPubViewOnAdPresentedOverlayListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *))OnAdPresentedOverlayHandler;

@end