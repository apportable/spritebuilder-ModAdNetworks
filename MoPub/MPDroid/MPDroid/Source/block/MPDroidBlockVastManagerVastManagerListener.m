//
//  MPDroidBlockVastManagerVastManagerListener.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.util.vast.VastManager.VastManagerListener
//  See MPDroid/MPDroidBlockVastManagerVastManagerListener.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockVastManagerVastManagerListener.h"
//other required types
#import <MPDroid/MPDroidVastVideoConfiguration.h>


@implementation MPDroidBlockVastManagerVastManagerListener

// overrides
- (void)onVastVideoConfigurationPrepared:(MPDroidVastVideoConfiguration *)vastVideoConfiguration
{
    if (self.onVastVideoConfigurationPreparedHandler)
    {
        self.onVastVideoConfigurationPreparedHandler(vastVideoConfiguration);
    }
}



// bridges
@bridge (callback) onVastVideoConfigurationPrepared: = onVastVideoConfigurationPrepared;


@end
