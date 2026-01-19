#import <Foundation/Foundation.h>

@interface DataMotion : NSObject

@property (nonatomic, assign) NSInteger mMIC;
@property (nonatomic, assign) NSInteger mMAC;
@property (nonatomic, assign) NSInteger mPX_SF;    //点击X区域，屏幕宽度百分比
@property (nonatomic, assign) NSInteger mPX_ST;
@property (nonatomic, assign) NSInteger mPY_SF;    //滑动y，像素值
@property (nonatomic, assign) NSInteger mPY_ST;
@property (nonatomic, assign) NSInteger mPY_CF;    //点击Y区域，屏幕高度百分比
@property (nonatomic, assign) NSInteger mPY_CT;
@property (nonatomic, assign) NSInteger dTS;
@property (nonatomic, assign) NSInteger dTE;
@property (nonatomic, assign) NSInteger cFX;
@property (nonatomic, assign) NSInteger cFY;
@property (nonatomic, assign) NSInteger r_F;   // 0: 无动作  1: 往后随机一个动作，并结束整个动作数组  2:goBack  3:goForward  4:二次滑动  5：初次不滑动二次滑动

+ (instancetype)modelWithDict:(NSDictionary *)dict;
@end
