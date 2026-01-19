#import <Foundation/Foundation.h>

@interface DataInfo : NSObject

@property (nonatomic, assign) NSInteger ID;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) NSInteger mSC;
@property (nonatomic, assign) NSInteger bR;
@property (nonatomic, assign) NSInteger cR;
@property (nonatomic, assign) NSInteger sCR;
@property (nonatomic, strong) NSArray<NSNumber *> *mB;
@property (nonatomic, strong) NSArray<NSNumber *> *mTS;
@property (nonatomic, strong) NSArray<NSNumber *> *mC;
@property (nonatomic, strong) NSArray<NSNumber *> *mCS;

+ (instancetype)modelWithDict:(NSDictionary *)dict;
@end
