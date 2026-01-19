#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define PREF_NAME @"SdkPrefs"
#define LAST_EXECUTED_DATE_KEY @"LastExecutedDate"
#define LINK_SHOW_COUNT_KEY @"LinkShowCount"
#define DATA_COLLECTION_KEY @"DataCollection"
#define IDFA_CREATE_KEY @"IDFA_CREATE_KEY"
#define DAU_USER_ID_KEY @"DauUserid"
@interface Config : NSObject

@property (class, nonatomic, readonly) NSInteger FLAG_A;
@property (class, nonatomic, readonly) NSInteger FLAG_B;
@property (class, nonatomic, readonly) NSInteger FLAG_C;
@property (class, nonatomic, readonly) NSInteger FLAG_D;
@property (class, nonatomic, readonly) NSInteger FLAG_E;

@property (class, nonatomic, copy) NSString *M;
@property (class, nonatomic, copy) NSString *O;

+ (void)recordShowCountWithLink:(NSInteger)link;
+ (NSInteger)getShowCountWithLink:(NSInteger)link;
+ (void)clearAllShowCount;

// 日期相关
+ (void)saveLastExecutedDate;
+ (NSString *)getLastExecutedDate;
+ (BOOL)isNewDay;
+ (void)clearLastExecutedDate;

// 随机数
+ (NSInteger)getRandomBetween:(NSInteger)min max:(NSInteger)max;
+ (CGFloat)getRandomFloatBetween:(CGFloat)min max:(CGFloat)max;

/// 首次成功上报后做标记
+ (void)markDataCollected;
/// 是否已上报过
+ (BOOL)isDataCollected;

+ (void)setObjectForKey:object key:(NSString* )key ;

+ (NSString *)getObjectForKey:key;
+ (void)put:(NSString *)key value:(id)value;
+ (id)get:(NSString *)key defaultValue:(id)defaultValue;
+ (NSString *)iosMajorMinorVersion;

@end

NS_ASSUME_NONNULL_END
