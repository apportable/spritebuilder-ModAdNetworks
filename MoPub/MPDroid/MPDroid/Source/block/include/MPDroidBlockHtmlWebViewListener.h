//
//  MPDroidBlockHtmlWebViewListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.HtmlWebViewListener
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlWebViewListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidHtmlWebViewListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockHtmlWebViewListener")
@interface MPDroidBlockHtmlWebViewListener : MPDroidHtmlWebViewListener

//methods
- (void)onLoaded:(MPDroidBaseHtmlWebView *)htmlWebView;
- (void)onFailed:(MPDroidMoPubErrorCode *)errorCode;
- (void)onClicked;
- (void)onCollapsed;


@end
