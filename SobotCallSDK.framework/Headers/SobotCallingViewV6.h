//
//  SobotCallingViewV6.h
//  SobotCallSDK
//
//  Created by lizh on 2023/7/11.
//

#import <UIKit/UIKit.h>
#import "SobotCallingView.h"
#import <SobotCommon/SobotCommon.h>
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,SobotCallingEventType) {
    SobotCallingEventTypeAnswer = 1, // 等待接听
    SobotCallingEventTypeAccpet = 2, // 通话中
    SobotCallingEventTypeMute_on = 3, // 静音
    SobotCallingEventTypeMute_off = 4, // 静音
    SobotCallingEventTypeHold_on = 5, // 会话保持
    SobotCallingEventTypeHold_off = 6, // 会话保持
    SobotCallingEventTypehf_on = 7, // 免提 开
    SobotCallingEventTypehf_off = 8,// 免提 关
    SobotCallingEventTypeCallUp = 9,// 外呼中
    SobotCallingEventTypeKeyboardOn = 10,// 软键盘打开
    SobotCallingEventTypeKeyboardOff = 11,// 软键盘关闭
    SobotCallingEventTypeShifted = 12,// 被转移
    SobotCallingEventTypeConsult_1 = 13,// 被咨询来电
    SobotCallingEventTypeConsult_2 = 14,// 被咨询 接听咨询来电
    SobotCallingEventTypeConsult_3 = 15,// 被咨询 被拉入三方会话
    SobotCallingEventTypeShowTel = 16,// 手机方式接听 来电显示占位页面
    SobotCallingEventTypeInternal = 17,// 内部通话
    SobotCallingEventTypeInternalAccpet = 18, // 内部通话中
};

typedef NS_ENUM(NSInteger,SobotCallingViewV6Status) {
    
    SobotCallingViewV6Status_Calling     = 1, // 呼叫中
    SobotCallingViewV6Status_ring     = 2, // 振铃中
    SobotCallingViewV6Status_Accpet   = 3, // 通话中
    SobotCallingViewV6Status_hold     = 4, // 保持中
};

@interface SobotCallingViewV6 : UIView
// 仅使用，初始化赋值
@property(nonatomic,assign) SobotCallingType callType;
// 呼叫任务
@property (nonatomic, strong)  id callModel;
@property(nonatomic,assign) SobotCallingEventType callEventType;//显示状态

@property (nonatomic, strong)  NSString *displayNumber;
@property (nonatomic, strong)  NSString *campaignName;
@property (nonatomic, strong)  NSString *taskDetailId;
@property (nonatomic, strong) NSMutableArray *statusArray;
// type =4 销毁
@property (nonatomic, strong)  void(^SobotCallingBlock) (int type);

@property(nonatomic,assign)SobotCallingViewV6Status viewStatus;// 记录状态 点击缩小的时候使用

@property(nonatomic,copy) NSString *callID;

@property(nonatomic,copy) NSString * tickName;  // 外呼任务的昵称
/**
 *  创建对象方法
 */
-(instancetype)initWithCallingView:(SobotCallingType) type callNumber:(NSString *) number hiddenFlag:(int) hiddenFlag statusArray:(NSMutableArray *)statusArray;

-(instancetype)initWithCallingView:(SobotCallingType) type callNumber:(NSString *) number hiddenFlag:(int) hiddenFlag statusArray:(NSMutableArray *)statusArray callModel:(id _Nullable)callModel;

-(void)handUp;

- (void)show;

- (void)dissmisMenu;

// linphone 对方接电话了
-(void)linphoneCallEventEstablished;

// 开始接听计时
-(void)startCallingTimer;

// 暂停计时
-(void)pauseCallingTimer;

// 设置外呼页面的状态
-(void)showBtnsType:(SobotCallingEventType)callEventType isRefresh:(BOOL)isRefresh;

// 断网重连 并且重新设置 计时器的数据
-(void)showBtnsType:(SobotCallingEventType)callEventType isRefresh:(BOOL)isRefresh obj:(NSDictionary *)obj;

-(void)setcallingRingMsg:(NSString *)ip nick:(NSString *)nick phoneNum:(NSString *)phone obj:(id)obj;

// 接听事件
-(void)answerBtnClick:(SobotButton *)sender;

// 挂断事件
-(void)hangUPBtnClick:(SobotButton*)sender;
@end

NS_ASSUME_NONNULL_END
