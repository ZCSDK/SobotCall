//
//  SobotCallView.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/8.
//
// 拨号/接听
//


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SobotCallingType) {
    SobotCallingTypeAccpet     = 1, // 接听  挂断、一个接听
    SobotCallingTypeCallUp     = 2, // 拨号  拨号完成，变成挂断
};

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallingView : UIView


// 仅使用，初始化赋值
@property(nonatomic,assign) SobotCallingType callType;
// 呼叫任务
@property (nonatomic, strong)  id callModel;


@property (nonatomic, strong)  NSString *displayNumber;
@property (nonatomic, strong)  NSString *campaignName;
@property (nonatomic, strong)  NSString *taskDetailId;


// type =4 销毁
@property (nonatomic, strong)  void(^SobotCallingBlock) (int type);

/**
 *  创建对象方法
 */
-(instancetype)initWithCallingView:(SobotCallingType) type callNumber:(NSString *) number hiddenFlag:(int) hiddenFlag;

- (void)show;

- (void)dissmisMenu;

// linphone 对方接电话了
-(void)linphoneCallEventEstablished;
@end

NS_ASSUME_NONNULL_END
