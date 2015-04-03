//
//  MPDroidMraidJavascriptCommand.h
// 
//  Bridges to the java object com.mopub.mraid.MraidJavascriptCommand
//  See http://developer.android.com/reference/com/mopub/mraid/MraidJavascriptCommand.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidPlacementType;


//defines and their comments (static fields with values)


/**
Java class: MPDroidMraidJavascriptCommand
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.MraidJavascriptCommand")
@interface MPDroidMraidJavascriptCommand : JavaEnum 

// constructors


// properties


//static valueless fields
+ (MPDroidMraidJavascriptCommand *)close;
+ (MPDroidMraidJavascriptCommand *)expand;
+ (MPDroidMraidJavascriptCommand *)useCustomClose;
+ (MPDroidMraidJavascriptCommand *)open;
+ (MPDroidMraidJavascriptCommand *)resize;
+ (MPDroidMraidJavascriptCommand *)setOrientationProperties;
+ (MPDroidMraidJavascriptCommand *)playVideo;
+ (MPDroidMraidJavascriptCommand *)storePicture;
+ (MPDroidMraidJavascriptCommand *)createCalendarEvent;
+ (MPDroidMraidJavascriptCommand *)unspecified;

// methods


@end
