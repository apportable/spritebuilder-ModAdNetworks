//
//  MPDroidHtmlWebViewListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.HtmlWebViewListener
//  See http://developer.android.com/reference/com/mopub/mobileads/HtmlWebViewListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidHtmlWebViewListener.h>
//other required types
#import <MPDroid/MPDroidBaseHtmlWebView.h>
#import <MPDroid/MPDroidMoPubErrorCode.h>
#import "block/include/MPDroidBlockHtmlWebViewListener.h"


@implementation MPDroidHtmlWebViewListener

//properties
@bridge (method, instance) onClicked = onClicked;
@bridge (method, instance) onCollapsed = onCollapsed;
@bridge (method, instance) onFailed: = onFailed;
@bridge (method, instance) onLoaded: = onLoaded;


//methods


//convenience class method
+ (MPDroidHtmlWebViewListener *)listener
{
    return [[[MPDroidBlockHtmlWebViewListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onLoadedHandler != nil)
    {
        Block_release(_onLoadedHandler);
        _onLoadedHandler = nil;
    }
    if (_onFailedHandler != nil)
    {
        Block_release(_onFailedHandler);
        _onFailedHandler = nil;
    }
    if (_onClickedHandler != nil)
    {
        Block_release(_onClickedHandler);
        _onClickedHandler = nil;
    }
    if (_onCollapsedHandler != nil)
    {
        Block_release(_onCollapsedHandler);
        _onCollapsedHandler = nil;
    }
    [super dealloc];
}


@end
