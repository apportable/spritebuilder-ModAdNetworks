@class GMSAdRequest;
@class GMSAdRequestBuilder;

//You probably should put each of these classes in their own file, since bridging the entire API surface of the AdMob SDK would expand each of these classes quite a bit, but to give a clear overview of the necessary steps we have put the bare minimum here.

BRIDGE_CLASS("com.google.android.gms.ads.AdSize")
@interface AdSize : JavaObject

+ (AdSize *)BANNER;

@end


BRIDGE_CLASS("com.google.android.gms.ads.AdRequest")
@interface GMSAdRequest : JavaObject

- (instancetype)initWithBuilder:(GMSAdRequestBuilder *)builder;

@end


BRIDGE_CLASS("com.google.android.gms.ads.AdRequest$Builder")
@interface GMSAdRequestBuilder : JavaObject

@property (nonatomic, readonly, retain) GMSAdRequest *build;

- (instancetype)init;
- (GMSAdRequestBuilder *)addTestDevice:(NSString *)deviceId; /* addTestDevice */

@end


BRIDGE_CLASS("com.google.android.gms.ads.AdView")
@interface GMSAdView : AndroidViewGroup

@property (nonatomic, assign) AdSize *adSize;
@property (nonatomic, copy) NSString *adUnitId;

- (instancetype)initWithContext:(AndroidContext *)context;

- (void)loadAd:(GMSAdRequest *)adRequest;
- (void)pause;
- (void)resume;

@end
