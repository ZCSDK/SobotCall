//
//  SobotCallUITools.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//
//  v1 和 v6 兼容

#import <Foundation/Foundation.h>
#import "SobotCallService.h"
#import <SobotCallLib/SobotCallAgentStatusEntity.h>
#import <SobotCallLib/SobotCallSipInfo.h>
#import "SobotCallingView.h"
#import "SobotCallApi.h"
#import <SobotCallLib/SobotCallTaskEntity.h>
#import "SobotCallingViewV6.h"
#import <SobotCallLib/SobotCallTaskListContactsEntity.h>

#import <SobotCallSDK/SobotDragView.h>

typedef NS_ENUM(NSUInteger, SobotCallUIToolsSipType) {
    SobotCallUIToolsSipType_RegisterOK, // 注册成功
    SobotCallUIToolsSipType_RegisterFAIL, // 注册失败
//    SobotCallUIToolsSipType,
};

#define SOBOT_CALL_RINGING @"CALL_RINGING"
#define SOBOT_CALL_INCOMMING @"CALLIncomming"
#define SOBOT_CALL_CLOSED @"CALLClosed"

// 使用是添加”_客户账号“
#define SOBOT_CALL_SUPPORTVERSION @"SobotSupportCallVersion"
#define SOBOT_CALL_V1VersionKey @"v1"
#define SOBOT_CALL_V6VersionKey @"v6"

NS_ASSUME_NONNULL_BEGIN
typedef void(^SobotCallUIResultBlock)(SobotCallNetworkCode code,id _Nullable obj,NSDictionary *_Nullable dict,NSString *_Nullable jsonString);

typedef void(^SobotCallStatusUpdateBlock)(SobotCallNetworkCode code,int agentState,NSString *_Nullable reasonCode,id _Nullable dict);

typedef void(^SobotCallUISipResultBlock)(SobotCallUIToolsSipType type ,NSString *_Nullable jsonString); // sip话机代理事件

@interface SobotCallUITools : NSObject

@property(nonatomic,assign) BOOL sipIsLogin;// 记录SIP话机是否已经登录成功，如果登录成功了，就不在将注册成功的信息回调

@property (nonatomic,strong) SobotCallUISipResultBlock sipResultBlock;
@property(nonatomic,copy) NSString *wrapUpDuration;// 整理中时长

@property (nonatomic,assign) int from;// 是否从外呼任务3个列表页面进入的拨号页面
/*
 *记录临时数据 如果是从任务列表点击的拨号记录当前的任务model，底部弹窗跳转详情使用（解决因用户手动刷新列表 列表正好没有该数据无法比对的场景）
 */
@property (nonatomic,strong) SobotCallTaskListContactsEntity *callEntity;

@property (nonatomic,strong) SobotCallStatusUpdateBlock callstatusUpdateBlock;

@property (nonatomic,strong) SobotCallAgentStatusEntity * _Nullable curStatusEntity;

@property(nonatomic,strong) SobotNetworkObserve *netWorkTools;

@property(nonatomic,strong)NSMutableDictionary *callViewDict;// 记录外呼页面 当前各种状态数据，处理页面缩小在放大后UI刷新不及时的问题
@property(nonatomic,strong) SobotDragView * _Nullable callTopView;// 通话中的悬浮窗
@property(nonatomic,strong) SobotDragView * _Nullable callBottomView;// 拨号按钮
@property(nonatomic,strong)NSMutableArray *statusArray;

+(SobotCallUITools *)shareSobotCallUITools;
-(void)registeSip:(SobotCallSipInfo *)info resultBlock:(SobotCallUISipResultBlock) resultBlock;
-(void)unRegister;
-(void)hangUpWithApi;
-(void)answer;
-(void)answerWithApi;
-(BOOL)isRegistered;
-(void)startRing;
-(void)stopRing;
// 退出登录清理缓存登录用户
-(void)clearLoginUser;
#pragma mark -- linphone start
// 启动linphone
-(void)startLinphone;

// 关闭linphone
-(void)closeLinphone;

// 登录时判断是否注册过
-(BOOL)isRegisteredWithCallWay:(int)callWay;

-(SobotCallingView*)getSobotCallView;

-(SobotCallingViewV6*)getSobotCallViewV6;

-(void)answerClickV6;
-(void)hangUPClickV6;


-(void)showDragView:(UIView *)v status:(SobotDragViewType)status viewStatus:(SobotCallingViewV6Status)viewStatus frame:(CGRect)frame;
-(void)hideDragView;

#pragma mark 检查呼叫权限
+(BOOL) checkCallModule:(NSString *) key;

#pragma mark 关闭键盘
- (void)hideKeyBoard;

#pragma mark -- linphone end

// *************** V1 呼叫View使用 ********************
-(SobotCallingView *)showCallingView:(SobotCallingType) type callNumber:(NSString *)number hiddenFlag:(int )scanFtype;
/// 呼叫UI
/// @param type 呼入Accpet/呼出CallUp
/// @param number 当前可操作号码
/// @param displayNumber 当前显示号码
/// @param scanFtype 显示规则
-(SobotCallingView *)showCallingView:(SobotCallingType) type callNumber:(NSString *)number displayNumber:(NSString *) displayNumber  hiddenFlag:(int )scanFtype autoShow:(BOOL) isAutoShow;

-(SobotCallingView *)showCallingView:(SobotCallingType) type callNumber:(NSString *)number displayNumber:(NSString *) displayNumber  hiddenFlag:(int )scanFtype autoShow:(BOOL) isAutoShow callModel:(id)callModel;
// *************** V1 呼叫View使用 end********************

// *************** V6 呼叫View ********************
-(SobotCallingViewV6 *)showCallingViewV6:(SobotCallingType) type callNumber:(NSString *)number hiddenFlag:(int )scanFtype statusArray:(NSMutableArray *)statusArray;
/// 呼叫UI
/// @param type 呼入Accpet/呼出CallUp
/// @param number 当前可操作号码
/// @param displayNumber 当前显示号码
/// @param scanFtype 显示规则
-(SobotCallingViewV6 *)showCallingViewV6:(SobotCallingType) type callNumber:(NSString *)number displayNumber:(NSString *) displayNumber  hiddenFlag:(int )scanFtype autoShow:(BOOL) isAutoShow statusArray:(NSMutableArray *)statusArray;


-(SobotCallingViewV6 *)showCallingViewV6:(SobotCallingType) type callNumber:(NSString *)number displayNumber:(NSString *) displayNumber  hiddenFlag:(int )scanFtype autoShow:(BOOL) isAutoShow callModel:(id)callModel statusArray:(NSMutableArray *)statusArray;

-(void)postLocalNotification:(NSString *)message dict:(NSDictionary *) userInfo;// 来电后台发送通知

-(NSString *)getWrapUpDuration;
// *************** V6 end********************


/// 当前是否为v6版本
+(BOOL) isSupportV6;


/// 获取服务总结配置
/// - Parameter resultBlock: 结果
+(void)getSummaryConfig:(void (^)(int code,id model,NSString *_Nullable msg)) resultBlock;

/// 设置监听回调
+(void)hangUpWithApiResult:(SobotCallUIResultBlock) resultBlock;



+(void)callOutWithApi:(NSString *) number group:(NSString *)groupId callWay:(int ) callway obj:(nonnull id)taskObj  hiddenNumber:(NSString *)hiddenNumber isAddUserData:(BOOL)isAdd reult:(SobotCallUIResultBlock) resultBlock;

// 首次进入，设置座席状态
// 判断版本v1/v6，获取sip，获取座席状态,obj 为agentStatusEntity对象
+(void)configAgentStatus:(SobotCallUIResultBlock) resultBlock;


// 获取我的任务列表数据 v1和V6的获取接口 在工具类中做处理，页面只接受返回数据和传参
+(void)getAllTaskDetailsWithPage:(int)page name:(NSString*)name result:(SobotCallUIResultBlock) resultBlock;


/// 查询座席分机号，数组
/// @param resultBlock 失败/成功
+(void)getAgentSipAccount:(SobotCallUIResultBlock) resultBlock;


/// 查询座席所在技能组信息
/// @param resultBlock 失败/成功
+(void)getAgentGroup:(SobotCallUIResultBlock) resultBlock;
 

/// 根据外呼手机号，查询用户信息头像/名称
/// @param number 外呼号码
/// @param resultBlock 成功/失败
+(void)getCallOutUserInfo:(NSString *) number result:(SobotCallUIResultBlock) resultBlock;


/// 查询状态配置列表
/// @param resultBlock 成功/失败
+(void)getAgentConfigStatusList:(SobotCallUIResultBlock) resultBlock;


/// 查询当前座席状态，轮训,仅v1使用，v6使用SobotCallMessageTools设置回调
/// @param resultBlock 成功/失败
+(void)getAgentCurrentStatus:(SobotCallUIResultBlock) resultBlock;


/// 获取所有支持的登录方式  sip 手机 web（app端不显示web） V1 + V6
/// @param resultBlock 成功/失败
+(void)getAgentPhoneTypes:(SobotCallUIResultBlock) resultBlock;


/// 座席迁出，就是设置离线状态
+(void)agentLogOut:(SobotCallUIResultBlock) resultBlock;

/// 座席迁入，设置状态为非离线
/// 2=sip,3pstn手机
+(void)agentLoginWithCallWay:(SobotCallAgentEntity *)loginInfo resultBlock:(SobotCallUIResultBlock) resultBlock;


/// 获取账号登录模式，仅支持v1 话机绑定方案  0绑定座席  1动态绑定(仅支持手机模式)
+(void)getCallModelFlagResult:(SobotCallUIResultBlock) resultBlock;

/// 获取注册信息，仅v1使用，和getAgentSipAccount合并
+(void)getUserSipAccount:(NSString *)customNumber result:(SobotCallUIResultBlock) resultBlock;

/// 设置座席状态 V1和V6
+(void)setAgentStatus:(NSString *)agentStatus result:(SobotCallUIResultBlock) resultBlock;


/// 获取 通话记录
/// @param pamas pamas descriptio
/// @param resultBlock resultBlock description
+(void)getCallServiceCallRecordWithPamas:(NSDictionary *)pamas result:(SobotCallUIResultBlock) resultBlock;


/// 获取通话详情
/// @param pamas 入参
/// @param resultBlock resultBlock description
+(void)getServiceCallRecordByPhoneWithPamas:(NSDictionary *)pamas result:(SobotCallUIResultBlock) resultBlock;

/// 获取联系计划列表
/// @param pageNo   pageSize 入参
/// @param resultBlock resultBlock description
+(void)getCallContactPlanListWithPageNo:(int)pageNo pageSize:(int)pageSize result:(SobotCallUIResultBlock) resultBlock;

/// 删除联系计划
/// @param param   param 入参
/// @param resultBlock resultBlock description
+(void)postDelegateCallContactPlanWithParam:(NSDictionary *)param result:(SobotCallUIResultBlock) resultBlock;


/// 新增和更新联系计划
/// @param type 1 新增 2 更新
/// @param param param description
/// @param resultBlock resultBlock description
+(void)postAddOrUpdateCallContactPlanWithType:(int)type param:(NSDictionary *)param result:(SobotCallUIResultBlock) resultBlock;


/// 获取单条呼叫任务详情
/// @param model taskIdn description
/// @param pageNo pageNo description
/// @param pageSize pageSize description
/// @param resultBlock resultBlock description
+(void)getTaskDetailsWithTaskId:(SobotCallTaskEntity *)model pageNo:(int)pageNo pageSize:(int)pageSize result:(SobotCallUIResultBlock) resultBlock;


/// 新增用户
/// @param param param description
/// @param resultBlock resultBlock description
+(void)addNewUser:(NSDictionary *)param result:(SobotCallUIResultBlock) resultBlock;


/// 更新用户
/// @param param param description
/// @param resultBlock resultBlock description
+(void)updateUser:(NSDictionary *)param result:(SobotCallUIResultBlock) resultBlock;

/// 获取通话记录详情
/// @param callID callID description
/// @param resultBlock resultBlock description
//+(void)getCallRecordDetailWithCallID:(NSString *)callID result:(SobotCallUIResultBlock) resultBlock;

//http://kong.call.sobot.local/v6/cc-config/opensips/clear-user
/// v6登录注册前先 清理一下 之前注册的数据 之后再注册登录
/// @param aor aor
/// @param resultBlock resultBlock description
+(void)clearUserBeforeLoginSip:(NSString *)aor result:(SobotCallUIResultBlock) resultBlock;

/// 获取登录用户信息
+(SobotLoginEntity *) getLoginUser;

/// 查询座席的外呼路由规则
/// @param resultBlock resultBlock description
+(void)getOutboundRoutesResult:(SobotCallUIResultBlock) resultBlock;


/// 切换座席的外呼外显规则
/// @param explicitRule 外显规则
/// @param explicitCode 动态外显方案编码
/// @param explicitNumber 外显号码
/// @param resultBlock resultBlock description
+(void)updateModOutboundRoutesWithExplicitRule:(NSString *)explicitRule
                                explicitCode:(NSString *)explicitCode
                              explicitNumber:(NSString *)explicitNumber
                                     agentId:(NSString *)agentID
                                 resultBlock:(SobotCallResultBlock)resultBlock;


/// 查询电话区号 get
/// @param resultBlock  resultBlock description
+(void)searchArealistResult:(SobotCallUIResultBlock) resultBlock;



/// 修改电话区号
/// @param callingCode callingCode description
/// @param resultBlock resultBlock description
+(void)updateAreaCodeWith:(NSString*)callingCode Result:(SobotCallUIResultBlock) resultBlock;


/// 搜索当前区号
/// @param resultBlock resultBlock description
+(void)searchCallingCode:(SobotCallUIResultBlock) resultBlock;


+(void)agentSendDtmf:(NSString *)dtmfDigits ResultBlock:(SobotCallResultBlock)resultBlock;


/// 查询通话中 用户信息
/// @param callID  通话ID
/// @param resultBlock resultBlock description
+(void)searchCallUserData:(NSString *)callID ResultBlock:(SobotCallResultBlock)resultBlock;


/// 查询通话 关联用户
/// @param phoneNumber phoneNumber description
/// @param resultBlock resultBlock description
+(void)searchCallUsersWithPhone:(NSString *)phoneNumber ResultBlock:(SobotCallResultBlock)resultBlock;




/// 注册janus
/// 当监听到坐席状态为在线是，主动注册一次
-(void)registerJanus;


/// 回拨
/// @param callid 通话ID
/// @param sourceId sourceId description
/// @param resultBlock resultBlock description
+(void)goCallBackWithCallId:(NSString *)callid sourceId:(NSString *)sourceId sourceType:(NSString *)sourceType ResultBlock:(SobotCallResultBlock)resultBlock;



/// 查询技能组开关是否开启
/// @param resultBlock resultBlock description
+(void)getQueueCheckinResultBlock:(SobotCallResultBlock)resultBlock;


/// 查询是否是主通路
/// @param callID callID description
/// @param resultBlock resultBlock description
+(void)getCdrAgentWithCallID:(NSString *)callID ResultBlock:(SobotCallResultBlock)resultBlock;


/// 海外版获取外呼号码的城市
/// @param callID callID description
/// @param resultBlock resultBlock description
+(void)getUserCityWithCallID:(NSString*)callID ResultBlock:(SobotCallResultBlock)resultBlock;



/// 获取任务列表的数据
/// @param campaignId campaignId description
/// @param name name description
/// @param type type description
/// @param value value description
/// @param currPage currPage description
/// @param pageSize pageSize description
/// @param resultBlock resultBlock description
+(void)getCallTaskContactsList:(NSString*)campaignId
    CampaignContactExecuteEnum:(NSString *)name
                           type:(int)type
                          value:(NSString *)value
                       currPage:(int)currPage
                       pageSize:(int)pageSize
                    ResultBlock:(SobotCallResultBlock)resultBlock;

/// 外呼任务拨号 弹窗+ 外呼
/// @param encryptCustomerNumber 电话号码密文
/// @param screenNumber 显示的电话号码
/// @param callModel 当前外呼任务的对象
/// @param taskModel 首页外呼任务model
-(void)showTaskCallAlterView:(NSString *)encryptCustomerNumber screenNumber:(NSString *)screenNumber model:(id)callModel  taskModel:(SobotCallTaskEntity *)taskModel;


@end

NS_ASSUME_NONNULL_END
