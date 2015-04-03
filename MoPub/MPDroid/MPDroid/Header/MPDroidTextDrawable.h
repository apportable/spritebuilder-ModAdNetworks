//
//  MPDroidTextDrawable.h
// 
//  Bridges to the java interface com.mopub.mobileads.resource.TextDrawable
//  See http://developer.android.com/reference/com/mopub/mobileads/resource/TextDrawable.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidTextDrawable
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.mobileads.resource.TextDrawable")
@protocol MPDroidTextDrawable 

// properties


// methods
- (void)updateText:(NSString *)text; /* updateText */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.mobileads.resource.TextDrawable")
@interface MPDroidTextDrawable : JavaObject <MPDroidTextDrawable>

//properties for handlers
@property (nonatomic, copy) void (^updateTextHandler)(NSString *);


//convenience class method
+ (MPDroidTextDrawable *)drawableWithBlock:(void (^)(NSString *))updateTextHandler;

@end