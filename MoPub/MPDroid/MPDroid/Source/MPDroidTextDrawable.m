//
//  MPDroidTextDrawable.m
// 
//  An adapter to the java interface com.mopub.mobileads.resource.TextDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/TextDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <JavaFoundation/JavaInterface.h>
#import <MPDroid/MPDroidTextDrawable.h>
//other required types
#import "block/include/MPDroidBlockTextDrawable.h"


@implementation MPDroidTextDrawable

//properties
@bridge (method, instance) updateText: = updateText;


//methods


//convenience class method
+ (MPDroidTextDrawable *)drawableWithBlock:(void (^)(NSString *))updateTextHandler
{
    MPDroidTextDrawable *drawable = [[MPDroidBlockTextDrawable alloc] init];
    drawable.updateTextHandler = updateTextHandler;
    return [drawable autorelease];
}


//dealloc method
- (void)dealloc
{
    if (_updateTextHandler != nil)
    {
        Block_release(_updateTextHandler);
        _updateTextHandler = nil;
    }
    [super dealloc];
}


@end
