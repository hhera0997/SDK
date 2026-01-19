#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "rtb/RTBPoller.h"
#import "rtb/RTBClient.h"
#import "rtb/BidRequest.h"
NS_ASSUME_NONNULL_BEGIN

/// 模拟你的 DataConfig/Config 结构（最少字段，按需扩展）
@class DataConfig;
typedef void(^AdvIdResult)(NSString *advId, BOOL isIDFA); // isIDFA=YES 表示返回的是 IDFA

@interface RtbManager : NSObject

/// 公开字段
@property (nonatomic, copy) NSString *ua;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic, copy) NSString *gaid; // 在 iOS 用 IDFA 填充（若允许），否则全 0
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryIso2;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *city;
@property (nonatomic, assign) double latitude;
@property (nonatomic, assign) double longitude;

/// 只读：像素宽高、网络类型（1=Ethernet(几乎无),2=WiFi,3=Cellular,0=未知）、设备类型（1=手机,2=平板）
@property (nonatomic, assign, readonly) NSInteger w;
@property (nonatomic, assign, readonly) NSInteger h;
@property (nonatomic, assign, readonly) NSInteger connectiontype;
@property (nonatomic, assign, readonly) NSInteger devicetype;

- (instancetype)init;
- (void)setConfig:(DataConfig *)wc ua:(NSString *)ua configDict:(NSDictionary *)configDict;
- (void)fetchGeoInfoWithArea:(void (^)(BOOL success,
                                       NSDictionary *geoInfo,
                                       NSString *area,
                                       NSError *error))completion;
/// 开始收集（等价 collectData）
- (void)collectData;
- (void)sendRtbRequest;
- (void)parseBidRequestDictionary:(NSDictionary *)root;
@end

NS_ASSUME_NONNULL_END
