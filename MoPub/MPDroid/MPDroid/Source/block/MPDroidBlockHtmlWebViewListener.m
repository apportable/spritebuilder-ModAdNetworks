//
//  MPDroidBlockHtmlWebViewListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.HtmlWebViewListener
//  See MPDroid/MPDroidBlockHtmlWebViewListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockHtmlWebViewListener.h"
//other required types
#import <MPDroid/MPDroidBaseHtmlWebView.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>


@implementation MPDroidBlockHtmlWebViewListener

// overrides
- (void)onLoaded:(MPDroidBaseHtmlWebView *)htmlWebView
{
    if (self.onLoadedHandler)
    {
        self.onLoadedHandler(htmlWebView);
    }
}

- (void)onFailed:(MPDroidMoPubErrorCode *)errorCode
{
    if (self.onFailedHandler)
    {
        self.onFailedHandler(errorCode);
    }
}

- (void)onClicked
{
    if (self.onClickedHandler)
    {
        self.onClickedHandler();
    }
}

- (void)onCollapsed
{
    if (self.onCollapsedHandler)
    {
        self.onCollapsedHandler();
    }
}



// bridges
@bridge (callback) onLoaded: = onLoaded;
@bridge (callback) onFailed: = onFailed;
@bridge (callback) onClicked = onClicked;
@bridge (callback) onCollapsed = onCollapsed;


@end
