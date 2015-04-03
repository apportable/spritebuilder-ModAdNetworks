//
//  MPDroidTimer.h
// 
//  Bridges to the java object com.mopub.common.util.Timer
//  See http://developer.android.com/reference/com/mopub/common/util/Timer.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)


/**
Java class: MPDroidTimer
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Timer")
@interface MPDroidTimer : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, assign) int64_t time; /* getTime */


//static valueless fields


// methods
- (void)start; /* start */
- (void)stop; /* stop */


@end
