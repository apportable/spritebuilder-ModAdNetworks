//
//  MPDroidPreconditions.h
// 
//  Bridges to the java object com.mopub.common.Preconditions
//  See http://developer.android.com/reference/com/mopub/common/Preconditions.html for documentation.
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
#define MPDroidPreconditionsEmptyArguments @""

/**
Java class: MPDroidPreconditions
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.Preconditions")
@interface MPDroidPreconditions : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (void)checkArgument:(BOOL)expression; /* checkArgument */
+ (void)checkArgument:(BOOL)expression errorMessage:(NSString *)errorMessage; /* checkArgument */
+ (void)checkArgument:(BOOL)expression errorMessageTemplate:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkArgument */
+ (void)checkState:(BOOL)expression; /* checkState */
+ (void)checkState:(BOOL)expression errorMessage:(NSString *)errorMessage; /* checkState */
+ (void)checkState:(BOOL)expression errorMessageTemplate:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkState */
+ (void)checkNotNull:(JavaObject *)reference; /* checkNotNull */
+ (void)checkNotNull:(JavaObject *)reference errorMessage:(NSString *)errorMessage; /* checkNotNull */
+ (void)checkNotNull:(JavaObject *)reference errorMessageTemplate:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkNotNull */
+ (void)checkUiThread; /* checkUiThread */
+ (void)checkUiThread:(NSString *)errorMessage; /* checkUiThread */
+ (void)checkUiThread:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkUiThread */


@end
