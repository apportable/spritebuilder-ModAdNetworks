//
//  MPDroidMoPubNativeMoPubNativeEventListener.m
// 
//  An adapter to the java interface com.mopub.nativeads.MoPubNative.MoPubNativeEventListener
//  See http://developer.android.com/reference/com/mopub/nativeads/MoPubNative.MoPubNativeEventListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidMoPubNativeMoPubNativeEventListener.h>
//other required types
#import <AndroidKit/AndroidView.h>
#import "block/include/MPDroidBlockMoPubNativeMoPubNativeEventListener.h"


@implementation MPDroidMoPubNativeMoPubNativeEventListener

//properties
@bridge (method, instance) onNativeClick: = onNativeClick;
@bridge (method, instance) onNativeImpression: = onNativeImpression;


//methods


//convenience class method
+ (MPDroidMoPubNativeMoPubNativeEventListener *)listener
{
    return [[[MPDroidBlockMoPubNativeMoPubNativeEventListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onNativeImpressionHandler != nil)
    {
        Block_release(_onNativeImpressionHandler);
        _onNativeImpressionHandler = nil;
    }
    if (_onNativeClickHandler != nil)
    {
        Block_release(_onNativeClickHandler);
        _onNativeClickHandler = nil;
    }
    [super dealloc];
}


@end
