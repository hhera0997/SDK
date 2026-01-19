#import <Foundation/Foundation.h>

@interface DataEnable : NSObject
@property (nonatomic, assign) NSInteger st;   // 是否开启 0: 关闭 1: 打开
@property (nonatomic, assign) NSInteger wi;   // 是否可以创建前端展示 0: 关闭 1: 打开
@property (nonatomic, copy) NSString *key;    // 配置文件

// 工厂方法：用 NSDictionary 创建
+ (instancetype)modelWithDict:(NSDictionary *)dict;
@end
