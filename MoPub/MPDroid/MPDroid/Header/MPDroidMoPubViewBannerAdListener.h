//
//  MPDroidMoPubViewBannerAdListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.MoPubView.BannerAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/MoPubView.BannerAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidMoPubErrorCode;
@class MPDroidMoPubView;


//static fields


/**
Java interface: MPDroidMoPubViewBannerAdListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.MoPubView$BannerAdListener")
@protocol MPDroidMoPubViewBannerAdListener 

// properties


// methods
- (void)onBannerLoaded:(MPDroidMoPubView *)banner; /* onBannerLoaded */
- (void)onBannerFailed:(MPDroidMoPubView *)banner moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode; /* onBannerFailed */
- (void)onBannerClicked:(MPDroidMoPubView *)banner; /* onBannerClicked */
- (void)onBannerExpanded:(MPDroidMoPubView *)banner; /* onBannerExpanded */
- (void)onBannerCollapsed:(MPDroidMoPubView *)banner; /* onBannerCollapsed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.MoPubView$BannerAdListener")
@interface MPDroidMoPubViewBannerAdListener : JavaObject <MPDroidMoPubViewBannerAdListener>

//properties for handlers
@property (nonatomic, copy) void (^onBannerLoadedHandler)(MPDroidMoPubView *);
@property (nonatomic, copy) void (^onBannerFailedMoPubErrorCodeHandler)(MPDroidMoPubView *, MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onBannerClickedHandler)(MPDroidMoPubView *);
@property (nonatomic, copy) void (^onBannerExpandedHandler)(MPDroidMoPubView *);
@property (nonatomic, copy) void (^onBannerCollapsedHandler)(MPDroidMoPubView *);


//convenience class method
+ (MPDroidMoPubViewBannerAdListener *)listener;

@end