//
//  MPDroidIntentNotResolvableException.h
// 
//  Bridges to the java object com.mopub.exceptions.IntentNotResolvableException
//  See http://developer.android.com/reference/com/mopub/exceptions/IntentNotResolvableException.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaKit/JavaException.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaThrowable;


//defines and their comments (static fields with values)


/**
Java class: MPDroidIntentNotResolvableException
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.exceptions.IntentNotResolvableException")
@interface MPDroidIntentNotResolvableException : JavaException 

// constructors
- (instancetype)initWithThrowable:(JavaThrowable *)throwable; /* <init> */


// properties


//static valueless fields


// methods


@end
