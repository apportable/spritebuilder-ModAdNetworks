//
//  MPDroidBlockMraidControllerUseCustomCloseListener.h
//
//  A block-based way adapt to the java interface com.mopub.mraid.MraidController.UseCustomCloseListener
//  See http://developer.android.com/reference/com/mopub/mraid/MraidController.UseCustomCloseListener.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidMraidControllerUseCustomCloseListener.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockMraidControllerUseCustomCloseListener")
@interface MPDroidBlockMraidControllerUseCustomCloseListener : MPDroidMraidControllerUseCustomCloseListener

//methods
- (void)useCustomCloseChanged:(BOOL)useCustomClose;


@end
