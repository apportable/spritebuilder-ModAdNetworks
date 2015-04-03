//
//  MPDroidVastManagerVastManagerListener.m
// 
//  An adapter to the java interface com.mopub.mobileads.util.vast.VastManager.VastManagerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastManager.VastManagerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidVastManagerVastManagerListener.h>
//other required types
#import <MPDroid/MPDroidVastVideoConfiguration.h>
#import "block/include/MPDroidBlockVastManagerVastManagerListener.h"


@implementation MPDroidVastManagerVastManagerListener

//properties
@bridge (method, instance) onVastVideoConfigurationPrepared: = onVastVideoConfigurationPrepared;


//methods


//convenience class method
+ (MPDroidVastManagerVastManagerListener *)listenerWithBlock:(void (^)(MPDroidVastVideoConfiguration *))onVastVideoConfigurationPreparedHandler
{
    MPDroidVastManagerVastManagerListener *listener = [[MPDroidBlockVastManagerVastManagerListener alloc] init];
    listener.onVastVideoConfigurationPreparedHandler = onVastVideoConfigurationPreparedHandler;
    return [listener autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_onVastVideoConfigurationPreparedHandler != nil)
    {
        Block_release(_onVastVideoConfigurationPreparedHandler);
        _onVastVideoConfigurationPreparedHandler = nil;
    }
    [super dealloc];
}


@end
