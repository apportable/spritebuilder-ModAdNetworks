//
//  MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener.m
// 
//  An adapter to the java interface com.mopub.mraid.MraidBridge.MraidWebView.OnVisibilityChangedListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidBridge.MraidWebView.OnVisibilityChangedListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener.h>
//other required types
#import "block/include/MPDroidBlockMraidBridgeMraidWebViewOnVisibilityChangedListener.h"


@implementation MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener

//properties
@bridge (method, instance) onVisibilityChanged: = onVisibilityChanged;


//methods


//convenience class method
+ (MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener *)listenerWithBlock:(void (^)(BOOL))onVisibilityChangedHandler
{
    MPDroidMraidBridgeMraidWebViewOnVisibilityChangedListener *listener = [[MPDroidBlockMraidBridgeMraidWebViewOnVisibilityChangedListener alloc] init];
    listener.onVisibilityChangedHandler = onVisibilityChangedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onVisibilityChangedHandler != nil)
    {
        Block_release(_onVisibilityChangedHandler);
        _onVisibilityChangedHandler = nil;
    }
    [super dealloc];
}


@end
