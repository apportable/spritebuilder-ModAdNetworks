//
//  MPDroidCloseableLayout.h
// 
//  Bridges to the java object com.mopub.common.CloseableLayout
//  See http://developer.android.com/reference/com/mopub/common/CloseableLayout.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <AndroidKit/AndroidFrameLayout.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols
@class AndroidCanvas;
@class AndroidStateListDrawable;
@class AndroidRect;
@protocol MPDroidCloseableLayoutOnCloseListener;
@class AndroidContext;
@class AndroidMotionEvent;
@class MPDroidCloseableLayoutClosePosition;


//defines and their comments (static fields with values)
#define MPDroidCloseableLayoutCloseButtonSizeDp 30.000000
#define MPDroidCloseableLayoutCloseRegionSizeDp 50.000000
#define MPDroidCloseableLayoutCloseButtonPaddingDp 8.000000

/**
Java class: MPDroidCloseableLayout
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.CloseableLayout")
@interface MPDroidCloseableLayout : AndroidFrameLayout 

// constructors
- (instancetype)initWithContext:(AndroidContext *)context; /* <init> */


// properties
@property (nonatomic, getter=isCloseVisible, assign) BOOL closeVisible; /* isCloseVisible, setCloseVisible */


//static valueless fields


// methods
- (void)setOnCloseListener:(JavaObject <MPDroidCloseableLayoutOnCloseListener> *)onCloseListener; /* setOnCloseListener */
- (void)setClosePosition:(MPDroidCloseableLayoutClosePosition *)closePosition; /* setClosePosition */
- (void)drawWithCanvas:(AndroidCanvas *)canvas; /* draw */
- (void)applyCloseRegionBounds:(MPDroidCloseableLayoutClosePosition *)closePosition rect:(AndroidRect *)bounds rect:(AndroidRect *)closeBounds; /* applyCloseRegionBounds */
- (BOOL)onInterceptTouchEvent:(AndroidMotionEvent *)event; /* onInterceptTouchEvent */
- (BOOL)onTouchEvent:(AndroidMotionEvent *)event; /* onTouchEvent */


@end
