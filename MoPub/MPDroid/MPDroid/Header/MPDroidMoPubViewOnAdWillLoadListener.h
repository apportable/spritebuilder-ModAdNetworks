//
//  MPDroidMoPubViewOnAdWillLoadListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.OnAdWillLoadListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.OnAdWillLoadListener.html for documentation.
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
Java interface: MPDroidMoPubViewOnAdWillLoadListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$OnAdWillLoadListener")
@protocol MPDroidMoPubViewOnAdWillLoadListener 

// properties


// methods
- (void)OnAdWillLoad:(MPDroidMoPubView *)moPubViewParam stringParam:(NSString *)stringParam; /* OnAdWillLoad */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$OnAdWillLoadListener")
@interface MPDroidMoPubViewOnAdWillLoadListener : JavaObject <MPDroidMoPubViewOnAdWillLoadListener>

//properties for handlers
@property (nonatomic, copy) void (^OnAdWillLoadStringParamHandler)(MPDroidMoPubView *, NSString *);


//convenience class method
+ (MPDroidMoPubViewOnAdWillLoadListener *)listenerWithBlock:(void (^)(MPDroidMoPubView *, NSString *))OnAdWillLoadStringParamHandler;

@end