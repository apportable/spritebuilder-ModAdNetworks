//
//  MPDroidAdAlertReporter.h
// 
//  Bridges to the java object com.mopub.mobileads.AdAlertReporter
//  See http://developer.android.com/reference/com/mopub/mobileads/AdAlertReporter.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class JavaArrayList;
@class AndroidContext;
@class AndroidBitmap;
@class AndroidView;
@class AndroidIntent;


//defines and their comments (static fields with values)
#define MPDroidAdAlertReporterEmailRecipient @"creative-review@mopub.com"
#define MPDroidAdAlertReporterEmailScheme @"mailto:"
#define MPDroidAdAlertReporterScreenShotFilename @"mp_adalert_screenshot.png"
#define MPDroidAdAlertReporterParametersFilename @"mp_adalert_parameters.txt"
#define MPDroidAdAlertReporterMarkupFilename @"mp_adalert_markup.html"
#define MPDroidAdAlertReporterDateFormatPattern @"M/d/yy hh:mm:ss a z"
#define MPDroidAdAlertReporterImageQuality 25
#define MPDroidAdAlertReporterBodySeparator @"\
=================\
"

/**
Java class: MPDroidAdAlertReporter
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.AdAlertReporter")
@interface MPDroidAdAlertReporter : JavaObject 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context view:(AndroidView *)view adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties


//static valueless fields


// methods
- (void)send; /* send */


@end
