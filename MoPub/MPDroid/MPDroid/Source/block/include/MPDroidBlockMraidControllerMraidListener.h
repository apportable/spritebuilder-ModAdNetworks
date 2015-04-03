//
//  MPDroidBlockMraidControllerMraidListener.h
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidController.MraidListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.MraidListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidControllerMraidListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMraidControllerMraidListener")
@interface MPDroidBlockMraidControllerMraidListener : MPDroidMraidControllerMraidListener

//methods
- (void)onLoaded:(AndroidView *)view;
- (void)onFailedToLoad;
- (void)onExpand;
- (void)onOpen;
- (void)onClose;


@end
