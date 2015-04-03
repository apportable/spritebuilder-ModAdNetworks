//
//  MPDroidMraidNativeCommandHandler.h
// 
//  Bridges to the java object com.mopub.mraid.MraidNativeCommandHandler
//  See http://developer.android.com/reference/com/mopub/mraid/MraidNativeCommandHandler.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaDate;
@class AndroidView;
@protocol JavaMap;
@class AndroidContext;
@class AndroidActivity;


//defines and their comments (static fields with values)
#define MPDroidMraidNativeCommandHandlerMimeTypeHeader @"Content-Type"
#define MPDroidMraidNativeCommandHandlerMaxNumberDaysInMonth 31
#define MPDroidMraidNativeCommandHandlerAndroidCalendarContentType @"vnd.android.cursor.item/event"

/**
Java class: MPDroidMraidNativeCommandHandler
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.MraidNativeCommandHandler")
@interface MPDroidMraidNativeCommandHandler : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (BOOL)isStorePictureSupported:(AndroidContext *)context; /* isStorePictureSupported */


@end
