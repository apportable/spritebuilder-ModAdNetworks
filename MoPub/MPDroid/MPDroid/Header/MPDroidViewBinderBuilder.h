//
//  MPDroidViewBinderBuilder.h
// 
//  Bridges to the java object com.mopub.nativeads.ViewBinder.Builder
//  See http://developer.android.com/reference/com/mopub/nativeads/ViewBinder.Builder.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidViewBinder;
@protocol JavaMap;


//defines and their comments (static fields with values)


/**
Java class: MPDroidViewBinderBuilder
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.nativeads.ViewBinder$Builder")
@interface MPDroidViewBinderBuilder : JavaObject 

// constructors
- (instancetype)initWithLayoutId:(int32_t)layoutId; /* <init> */


// properties
@property (nonatomic, readonly, retain) MPDroidViewBinder *build; /* build */


//static valueless fields


// methods
- (MPDroidViewBinderBuilder *)titleId:(int32_t)titleId; /* titleId */
- (MPDroidViewBinderBuilder *)textId:(int32_t)textId; /* textId */
- (MPDroidViewBinderBuilder *)callToActionId:(int32_t)callToActionId; /* callToActionId */
- (MPDroidViewBinderBuilder *)mainImageId:(int32_t)mainImageId; /* mainImageId */
- (MPDroidViewBinderBuilder *)iconImageId:(int32_t)iconImageId; /* iconImageId */
- (MPDroidViewBinderBuilder *)addExtras:(JavaObject <JavaMap> *)resourceIds; /* addExtras */
- (MPDroidViewBinderBuilder *)addExtra:(NSString *)key resourceId:(int32_t)resourceId; /* addExtra */


@end
