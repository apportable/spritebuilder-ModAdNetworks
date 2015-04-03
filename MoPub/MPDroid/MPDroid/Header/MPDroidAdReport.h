//
//  MPDroidAdReport.h
// 
//  Bridges to the java object com.mopub.common.AdReport
//  See http://developer.android.com/reference/com/mopub/common/AdReport.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols
#import <JavaKit/JavaSerializable.h>


//necessary forward declarations, classes and protocols
@class JavaLocale;
@class JavaStringBuilder;
@class MPDroidClientMetadata;
@class MPDroidAdResponse;


//defines and their comments (static fields with values)
#define MPDroidAdReportSerialversionuid 1ll
#define MPDroidAdReportDateFormatPattern @"M/d/yy hh:mm:ss a z"

/**
Java class: MPDroidAdReport
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.AdReport")
@interface MPDroidAdReport : JavaObject <JavaSerializable>

// constructors
- (instancetype)initWithAdUnitId:(NSString *)adUnitId clientMetadata:(MPDroidClientMetadata *)clientMetadata adResponse:(MPDroidAdResponse *)adResponse; /* <init> */


// properties
@property (nonatomic, readonly, copy) NSString *responseString; /* getResponseString */


//static valueless fields


// methods
- (NSString *)description; /* toString */


@end
