//
//  MPDroidRequestParametersBuilder.h
// 
//  Bridges to the java object com.mopub.nativeads.RequestParameters.Builder
//  See http://developer.android.com/reference/com/mopub/nativeads/RequestParameters.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class JavaEnumSet;
@class MPDroidRequestParameters;
@class AndroidLocation;


//defines and their comments (static fields with values)


/**
Java class: MPDroidRequestParametersBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.RequestParameters$Builder")
@interface MPDroidRequestParametersBuilder : JavaObject 

// constructors
- (instancetype)init; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidRequestParameters *build; /* build */


//static valueless fields


// methods
- (MPDroidRequestParametersBuilder *)keywordsWithKeywords:(NSString *)keywords; /* keywords */
- (MPDroidRequestParametersBuilder *)locationWithLocation:(AndroidLocation *)location; /* location */
- (MPDroidRequestParametersBuilder *)desiredAssets:(JavaEnumSet *)desiredAssets; /* desiredAssets */


@end
