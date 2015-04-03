//
//  MPDroidDefaultBannerAdListener.h
// 
//  Bridges to the java object com.mopub.mobileads.DefaultBannerAdListener
//  See http://developer.android.com/reference/com/mopub/mobileads/DefaultBannerAdListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidMoPubViewBannerAdListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidMoPubErrorCode;
@class MPDroidMoPubView;


//defines and their comments (static fields with values)


/**
Java class: MPDroidDefaultBannerAdListener
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.DefaultBannerAdListener")
@interface MPDroidDefaultBannerAdListener : JavaObject <MPDroidMoPubViewBannerAdListener>

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
- (void)onBannerLoaded:(MPDroidMoPubView *)banner; /* onBannerLoaded */
- (void)onBannerFailed:(MPDroidMoPubView *)banner moPubErrorCode:(MPDroidMoPubErrorCode *)errorCode; /* onBannerFailed */
- (void)onBannerClicked:(MPDroidMoPubView *)banner; /* onBannerClicked */
- (void)onBannerExpanded:(MPDroidMoPubView *)banner; /* onBannerExpanded */
- (void)onBannerCollapsed:(MPDroidMoPubView *)banner; /* onBannerCollapsed */


@end
