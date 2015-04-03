//
//  MPDroidAndroidAuthenticator.h
// 
//  Bridges to the java object com.mopub.volley.toolbox.AndroidAuthenticator
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/AndroidAuthenticator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <MPDroid/MPDroidAuthenticator.h>


//necessary forward declarations, classes and protocols
@class AndroidAccount;
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidAndroidAuthenticator
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.volley.toolbox.AndroidAuthenticator")
@interface MPDroidAndroidAuthenticator : JavaObject <MPDroidAuthenticator>

// constructors
- (instancetype)initWithContext:(AndroidContext *)context account:(AndroidAccount *)account authTokenType:(NSString *)authTokenType; /* <init> */
- (instancetype)initWithContext:(AndroidContext *)context account:(AndroidAccount *)account authTokenType:(NSString *)authTokenType notifyAuthFailure:(BOOL)notifyAuthFailure; /* <init> */


// properties
@property (nonatomic, readonly, retain) AndroidAccount *account; /* getAccount */
@property (nonatomic, readonly, copy) NSString *authToken; /* getAuthToken */


//static valueless fields


// methods
- (void)invalidateAuthToken:(NSString *)authToken; /* invalidateAuthToken */


@end
