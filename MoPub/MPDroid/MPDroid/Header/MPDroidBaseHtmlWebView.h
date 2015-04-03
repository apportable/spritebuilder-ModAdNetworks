//
//  MPDroidBaseHtmlWebView.h
// 
//  Bridges to the java object com.mopub.mobileads.BaseHtmlWebView
//  See http://developer.android.com/reference/com/mopub/mobileads/BaseHtmlWebView.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <MPDroid/MPDroidBaseWebView.h>
//imports for implemented protocols
#import <MPDroid/MPDroidViewGestureDetectorUserClickListener.h>


//necessary forward declarations, classes and protocols
@class MPDroidAdReport;
@class MPDroidViewGestureDetector;
@class AndroidContext;


//defines and their comments (static fields with values)


/**
Java class: MPDroidBaseHtmlWebView
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.mobileads.BaseHtmlWebView")
@interface MPDroidBaseHtmlWebView : MPDroidBaseWebView <MPDroidViewGestureDetectorUserClickListener>

// constructors
- (instancetype)initWithContext:(AndroidContext *)context adReport:(MPDroidAdReport *)adReport; /* <init> */


// properties
@property (nonatomic, readonly, assign) BOOL wasClicked; /* wasClicked */


//static valueless fields


// methods
- (void)initializeWithIsScrollable:(BOOL)isScrollable; /* init */
- (void)loadUrl:(NSString *)url; /* loadUrl */
- (void)onUserClick; /* onUserClick */
- (void)onResetUserClick; /* onResetUserClick */


@end
