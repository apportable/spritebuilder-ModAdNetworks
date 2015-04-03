//
//  MPDroidIntents.h
// 
//  Bridges to the java object com.mopub.common.util.Intents
//  See http://developer.android.com/reference/com/mopub/common/util/Intents.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidIntent;
@class AndroidContext;
@class JavaClass;
@class AndroidBundle;


//defines and their comments (static fields with values)
#define MPDroidIntentsPlayGoogleCom @"play.google.com"
#define MPDroidIntentsMarketAndroidCom @"market.android.com"
#define MPDroidIntentsMarket @"market"
#define MPDroidIntentsHttp @"http"
#define MPDroidIntentsHttps @"https"

/**
Java class: MPDroidIntents
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.util.Intents")
@interface MPDroidIntents : JavaObject 

// constructors


// properties


//static valueless fields


// methods
+ (void)startActivity:(AndroidContext *)context intent:(AndroidIntent *)intent; /* startActivity */
+ (AndroidIntent *)startActivityIntentForContext:(AndroidContext *)context class:(JavaClass *)clazz bundle:(AndroidBundle *)extras; /* getStartActivityIntent */
+ (BOOL)deviceCanHandleIntent:(AndroidContext *)context intent:(AndroidIntent *)intent; /* deviceCanHandleIntent */
+ (BOOL)isHttpUrl:(NSString *)url; /* isHttpUrl */
+ (BOOL)isDeepLink:(NSString *)url; /* isDeepLink */
+ (BOOL)canHandleApplicationUrl:(AndroidContext *)context url:(NSString *)url; /* canHandleApplicationUrl */
+ (BOOL)canHandleApplicationUrl:(AndroidContext *)context url:(NSString *)url logError:(BOOL)logError; /* canHandleApplicationUrl */
+ (BOOL)isNativeBrowserScheme:(NSString *)url; /* isNativeBrowserScheme */
+ (AndroidIntent *)intentForNativeBrowserScheme:(NSString *)url; /* intentForNativeBrowserScheme */


@end
