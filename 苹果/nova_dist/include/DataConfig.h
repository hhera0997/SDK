#import <Foundation/Foundation.h>
@class DataInfo, DataMotion;

@interface DataConfig : NSObject
@property (nonatomic, assign) NSInteger tt;       // 是否测试
@property (nonatomic, assign) NSInteger rLI;      // reloadInterval
@property (nonatomic, assign) NSInteger wVC;      // webViewCount
@property (nonatomic, strong) NSArray<NSNumber *> *pm;   //0:请求随机数量randomCount  1:最大加载时间maxLoadTime  2:点击滑动操作后停留时间stayTime 3:点击率随机值
@property (nonatomic, strong) NSArray<NSString *> *pms;  //

@property (nonatomic, strong) NSArray<DataInfo *> *aL; // adsLink
@property (nonatomic, strong) NSArray<DataMotion *> *mL; // motionList

+ (instancetype)modelWithDict:(NSDictionary *)dict;
@end
