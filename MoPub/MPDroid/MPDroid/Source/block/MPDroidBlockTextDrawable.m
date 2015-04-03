//
//  MPDroidBlockTextDrawable.m
//
//  A block-based way adapt to the java interface com.mopub.mobileads.resource.TextDrawable
//  See MPDroid/MPDroidBlockTextDrawable.h for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.3
//

#import "include/MPDroidBlockTextDrawable.h"
//other required types


@implementation MPDroidBlockTextDrawable

// overrides
- (void)updateText:(NSString *)text
{
    if (self.updateTextHandler)
    {
        self.updateTextHandler(text);
    }
}



// bridges
@bridge (callback) updateText: = updateText;


@end
