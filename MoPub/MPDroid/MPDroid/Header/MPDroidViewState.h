//
//  MPDroidViewState.h
// 
//  Bridges to the java object com.mopub.mraid.ViewState
//  See http://developer.android.com/reference/com/mopub/mraid/ViewState.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaEnum.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidViewState
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mraid.ViewState")
@interface MPDroidViewState : JavaEnum 

// constructors


// properties
@property (nonatomic, readonly, copy) NSString *toJavascriptString; /* toJavascriptString */


//static valueless fields
+ (MPDroidViewState *)loading;
+ (MPDroidViewState *)defaultValue;
+ (MPDroidViewState *)resized;
+ (MPDroidViewState *)expanded;
+ (MPDroidViewState *)hidden;

// methods


@end
