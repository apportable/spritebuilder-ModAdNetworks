//
//  MPDroidPositioningSourcePositioningListener.m
// 
//  An adapter to the java interface com.mopub.nativeads.PositioningSource.PositioningListener
//  See http://developer.android.com/reference/com/mopub/nativeads/PositioningSource.PositioningListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidPositioningSourcePositioningListener.h>
//other required types
#import <MPDroid/MPDroidMoPubNativeAdPositioningMoPubClientPositioning.h>
#import "block/include/MPDroidBlockPositioningSourcePositioningListener.h"


@implementation MPDroidPositioningSourcePositioningListener

//properties
@bridge (method, instance) onFailed = onFailed;
@bridge (method, instance) onLoad: = onLoad;


//methods


//convenience class method
+ (MPDroidPositioningSourcePositioningListener *)listener
{
    return [[[MPDroidBlockPositioningSourcePositioningListener alloc] init] autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onLoadHandler != nil)
    {
        Block_release(_onLoadHandler);
        _onLoadHandler = nil;
    }
    if (_onFailedHandler != nil)
    {
        Block_release(_onFailedHandler);
        _onFailedHandler = nil;
    }
    [super dealloc];
}


@end
