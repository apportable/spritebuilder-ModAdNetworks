//
//  MPDroidTaskTracker.h
// 
//  Bridges to the java object com.mopub.mobileads.TaskTracker
//  See http://developer.android.com/reference/com/mopub/mobileads/TaskTracker.html for documentation.
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
Java class: MPDroidTaskTracker
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.TaskTracker")
@interface MPDroidTaskTracker : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, assign) int64_t currentTaskId; /* getCurrentTaskId */


//static valueless fields


// methods
- (void)newTaskStarted; /* newTaskStarted */
- (void)markTaskCompleted:(int64_t)taskId; /* markTaskCompleted */
- (BOOL)isMostCurrentTask:(int64_t)taskId; /* isMostCurrentTask */


@end
