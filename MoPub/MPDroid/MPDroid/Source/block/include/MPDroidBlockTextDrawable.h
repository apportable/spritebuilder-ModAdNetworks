//
//  MPDroidBlockTextDrawable.h
//
//  A block-based way adapt to the java interface com.mopub.mobileads.resource.TextDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/TextDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidTextDrawable.h>

BRIDGE_CLASS("com.apportable.mpdroid.block.MPDroidBlockTextDrawable")
@interface MPDroidBlockTextDrawable : MPDroidTextDrawable

//methods
- (void)updateText:(NSString *)text;


@end
