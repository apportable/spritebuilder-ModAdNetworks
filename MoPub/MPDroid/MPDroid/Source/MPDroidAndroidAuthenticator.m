//
//  MPDroidAndroidAuthenticator.m
// 
//  Bridges to the java object com.mopub.volley.toolbox.AndroidAuthenticator
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/AndroidAuthenticator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidAndroidAuthenticator.h>
//other required types
#import <AndroidKit/AndroidContext.h>
#import <AndroidKit/AndroidAccount.h>


@implementation MPDroidAndroidAuthenticator


//constructors
@bridge (constructor) initWithContext:account:authTokenType:;
@bridge (constructor) initWithContext:account:authTokenType:notifyAuthFailure:;


//properties
@bridge (instance, method) account = getAccount;

@bridge (instance, method) authToken = getAuthToken;



//methods
@bridge (method, instance) invalidateAuthToken: = invalidateAuthToken;


@end
