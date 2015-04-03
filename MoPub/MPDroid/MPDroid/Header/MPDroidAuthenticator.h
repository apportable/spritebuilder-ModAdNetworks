//
//  MPDroidAuthenticator.h
// 
//  Bridges to the java interface com.mopub.volley.toolbox.Authenticator
//  See http://developer.android.com/reference/com/mopub/volley/toolbox/Authenticator.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.4
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//import implemented protocols


//necessary forward declarations, classes and protocols


//static fields


/**
Java interface: MPDroidAuthenticator
Comments: 
(null)
*/
BRIDGE_INTERFACE("com.mopub.volley.toolbox.Authenticator")
@protocol MPDroidAuthenticator 

// properties
@property (nonatomic, readonly, copy) NSString *authToken;


// methods
- (void)invalidateAuthToken:(NSString *)authToken; /* invalidateAuthToken */



@end

BRIDGE_ADAPTER_INTERFACE("com.mopub.volley.toolbox.Authenticator")
@interface MPDroidAuthenticator : JavaObject <MPDroidAuthenticator>

//properties for handlers


//convenience class method


@end