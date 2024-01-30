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
    SobotCallingTypeAccpet     = 1, // 接听 界面
    SobotCallingTypeCallUp     = 2, // 拨号  拨号完成，变成挂断 拨号界面
    SobotCallingTypeAccpetWait = 3,//  等待接听的界面
    SobotCallingTypeConsult    = 4,// 被咨询
    SobotCallingTypeShifted    = 5,// 被转移
    SobotCallingTypeToCalling  = 6,// 直接拉起外呼页面 外呼，中间不在显示拨号页面
    SobotCallingTypeToCallBack  = 7,// 直接拉起外呼页面 不调用外呼接口，中间不在显示拨号页面  ->回拨操作
    SobotCallingTypeToShowTel  = 8,// 手机方式接听时，显示占位页面
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

-(void)handUp;

- (void)show;

- (void)dissmisMenu;

// linphone 对方接电话了
-(void)linphoneCallEventEstablished;

// 开始接听计时
-(void)startCallingTimer;

// 暂停计时
-(void)pauseCallingTimer;

@end

NS_ASSUME_NONNULL_END
