//
//  MPDroidPreconditionsNoThrow.h
// 
//  Bridges to the java object com.mopub.common.Preconditions.NoThrow
//  See http://developer.android.com/reference/com/mopub/common/Preconditions.NoThrow.html for documentation.
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
Java class: MPDroidPreconditionsNoThrow
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.Preconditions$NoThrow")
@interface MPDroidPreconditionsNoThrow : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties


//static valueless fields


// methods
+ (void)setStrictModeByStrictMode:(BOOL)strictMode; /* setStrictMode */
+ (BOOL)checkArgument:(BOOL)expression; /* checkArgument */
+ (BOOL)checkArgument:(BOOL)expression errorMessage:(NSString *)errorMessage; /* checkArgument */
+ (BOOL)checkArgument:(BOOL)expression errorMessageTemplate:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkArgument */
+ (BOOL)checkState:(BOOL)expression; /* checkState */
+ (BOOL)checkState:(BOOL)expression errorMessage:(NSString *)errorMessage; /* checkState */
+ (BOOL)checkState:(BOOL)expression errorMessageTemplate:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkState */
+ (BOOL)checkNotNull:(JavaObject *)reference; /* checkNotNull */
+ (BOOL)checkNotNull:(JavaObject *)reference errorMessage:(NSString *)errorMessage; /* checkNotNull */
+ (BOOL)checkNotNull:(JavaObject *)reference errorMessageTemplate:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkNotNull */
+ (BOOL)checkUiThread; /* checkUiThread */
+ (BOOL)checkUiThread:(NSString *)errorMessage; /* checkUiThread */
+ (BOOL)checkUiThread:(NSString *)errorMessageTemplate errorMessageArgs:(NSArray * BRIDGE_ARRAY(JavaObject))errorMessageArgs; /* checkUiThread */


@end
