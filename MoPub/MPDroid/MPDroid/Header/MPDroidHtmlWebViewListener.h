//
//  MPDroidHtmlWebViewListener.h
// 
//  Bridges to the java interface com.mopub.mobileads.HtmlWebViewListener
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlWebViewListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidBaseHtmlWebView;
@class MPDroidMoPubErrorCode;


//static fields


/**
Java interface: MPDroidHtmlWebViewListener
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.HtmlWebViewListener")
@protocol MPDroidHtmlWebViewListener 

// properties


// methods
- (void)onLoaded:(MPDroidBaseHtmlWebView *)htmlWebView; /* onLoaded */
- (void)onFailed:(MPDroidMoPubErrorCode *)errorCode; /* onFailed */
- (void)onClicked; /* onClicked */
- (void)onCollapsed; /* onCollapsed */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.HtmlWebViewListener")
@interface MPDroidHtmlWebViewListener : JavaObject <MPDroidHtmlWebViewListener>

//properties for handlers
@property (nonatomic, copy) void (^onLoadedHandler)(MPDroidBaseHtmlWebView *);
@property (nonatomic, copy) void (^onFailedHandler)(MPDroidMoPubErrorCode *);
@property (nonatomic, copy) void (^onClickedHandler)();
@property (nonatomic, copy) void (^onCollapsedHandler)();


//convenience class method
+ (MPDroidHtmlWebViewListener *)listener;

@end