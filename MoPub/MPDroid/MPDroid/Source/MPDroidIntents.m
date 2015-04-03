//
//  MPDroidIntents.m
// 
//  Bridges to the java object com.mopub.common.util.Intents
//  See http://developer.android.com/reference/com/mopub/common/util/Intents.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <MPDroid/MPDroidIntents.h>
//other required types
#import <AndroidKit/AndroidIntent.h>
#import <AndroidKit/AndroidContext.h>
#import <JavaKit/JavaClass.h>
#import <AndroidKit/AndroidBundle.h>


@implementation MPDroidIntents


//constructors


//properties


//methods
@bridge (method, static) startActivity:intent: = startActivity;
@bridge (method, static) startActivityIntentForContext:class:bundle: = getStartActivityIntent;
@bridge (method, static) deviceCanHandleIntent:intent: = deviceCanHandleIntent;
@bridge (method, static) isHttpUrl: = isHttpUrl;
@bridge (method, static) isDeepLink: = isDeepLink;
@bridge (method, static) canHandleApplicationUrl:url: = canHandleApplicationUrl;
@bridge (method, static) canHandleApplicationUrl:url:logError: = canHandleApplicationUrl;
@bridge (method, static) isNativeBrowserScheme: = isNativeBrowserScheme;
@bridge (method, static) intentForNativeBrowserScheme: = intentForNativeBrowserScheme;


@end
