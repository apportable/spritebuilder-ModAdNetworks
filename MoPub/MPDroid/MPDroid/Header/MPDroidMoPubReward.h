//
//  MPDroidMoPubReward.h
// 
//  Bridges to the java object com.mopub.common.MoPubReward
//  See http://developer.android.com/reference/com/mopub/common/MoPubReward.html for documentation.
//
//  Copyright (c) Apportable. All rights reserved.
//
//  Generator version 2.1
//

#import <stdint.h>
#import <JavaFoundation/JavaObject.h>
//imports for implemented protocols


//necessary forward declarations, classes and protocols


//defines and their comments (static fields with values)
#define MPDroidMoPubRewardNoRewardLabel @""
#define MPDroidMoPubRewardNoRewardAmount -123

/**
Java class: MPDroidMoPubReward
Comments: 
(null)
*/
BRIDGE_CLASS("com.mopub.common.MoPubReward")
@interface MPDroidMoPubReward : JavaObject 

// constructors


// properties
@property (nonatomic, readonly, getter=isSuccessful, assign) BOOL successful; /* isSuccessful */
@property (nonatomic, readonly, copy) NSString *label; /* getLabel */
@property (nonatomic, readonly, assign) int32_t amount; /* getAmount */


//static valueless fields


// methods
+ (MPDroidMoPubReward *)failure; /* failure */
+ (MPDroidMoPubReward *)successWithRewardLabel:(NSString *)rewardLabel amount:(int32_t)amount; /* success */


@end
