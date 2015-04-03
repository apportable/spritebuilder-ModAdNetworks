//
//  MPDroidBlockVastManagerVastManagerListener.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.util.vast.VastManager.VastManagerListener
//  See http://developer.android.com/reference/com/mopub/mobileads/util/vast/VastManager.VastManagerListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidVastManagerVastManagerListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockVastManagerVastManagerListener")
@interface MPDroidBlockVastManagerVastManagerListener : MPDroidVastManagerVastManagerListener

//methods
- (void)onVastVideoConfigurationPrepared:(MPDroidVastVideoConfiguration *)vastVideoConfiguration;


@end
