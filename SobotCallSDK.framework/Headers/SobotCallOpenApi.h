//
//  SobotCallOpenApi.h
//  SobotCallSDK（仅支持v6账户使用）
//
//  Created by zhangxy on 2023/1/4.
//

#import <Foundation/Foundation.h>

#import <SobotCallSDK/SobotCallClient.h>


NS_ASSUME_NONNULL_BEGIN

// code == 1成功
typedef void(^SobotCallResultBlock)(NSInteger code,id _Nullable obj,NSString *_Nullable msg);

//webstom的消息订阅
typedef BOOL (^SobotCallApiScribeMessage)(NSString * _Nullable common,NSDictionary *header,NSString *messageId,NSDictionary *content);

@interface SobotCallOpenApi : NSObject

@property(nonatomic,strong) SobotCallApiScribeMessage callScribeMessageHandler;

///////////////////////////////////////////
/// 登录 host，初始化（配置语言/环境，把host等值使用上等）、登录（获取token）、签入、签出等
//////////////////////////////////////////
//第一步
/// 初始化
/// @param config 配置类
/// @param resultBlock 回调结果
+(void)initWithConfig:(SobotCallCacheEntity *) config result:(SobotCallResultBlock) resultBlock;

//第二步
///  登录
/// @param account 账号
/// @param loginPwd 密码
/// @param token token
/// @param resultBlock 登录结果回调
///  账号必填，密码和token 两者必须有一个有值
+(void)loginWithAcount:(NSString *)account
              password:(NSString * )loginPwd
                 token:(NSString *)token
                result:(SobotCallResultBlock) resultBlock;

//第三步  消息订阅 （webscoket订阅消息） 在登录方法中合并

#pragma mark - 以下接口需要在登录成功之后 获取到呼叫接口的accessToken后才能调用成功（accesstoken连接webscoket使用）

/// 查询座席可用的接听方式 (登录成功后调用签入后)
/// @param resultBlock 查询座席可用的接听方式回调  (SobotCallNetworkCode  成功和失败的状态码,id _Nullable obj,NSDictionary *_Nullable dict,NSString *_Nullable jsonString);
/// 返回值 详情请查看接入文档
+(void)queryLoginBingInfo:(SobotCallResultBlock) resultBlock;

///查询座席的签入信息 （签入前）
+(void)queryPhoneType:(SobotCallResultBlock) resultBlock;


/// 查询呼叫相关域名
/// {"apiVersion":"6.0.0","status":"Success","code":200,"message":"请求服务成功","reason":"请求服务成功","kind":"Map","metaData":{},"data":{"stompSocket":"wss://hk.sobot.com/v6.0.0/webmsg/cc-webmsg","janusSocket":"wss://rtc.hk.sobot.cc/sip:10001@Cq5ONZpK.sg.sobot.cc"},"retMsg":"请求服务成功","retCode":"000000"}
///
/// 
+(void)queryWebmsgUrls:(SobotCallResultBlock) resultBlock;

/// 查座席可用的分机号 （登录成功后调用）
/// @param resultBlock 回调结果
+(void)queryUnusedExts:(SobotCallResultBlock)resultBlock;


/// 修改分机号语言编码
/// @param ext 分机号
/// @param langCode 编码
/// @param resultBlock 结果
+(void)updateExtLangCode:(NSString *) ext langCode:(NSString *) langCode result:(SobotCallResultBlock)resultBlock;


/// 查询座席状态列表 （登录成功后调用）
/// @param resultBlock  回调结果
+(void)queryStates:(SobotCallResultBlock)resultBlock;

///  签入
/// @param ext 分机号码
/// @param agentStatus 座席状态 （勿扰和在线）
/// @param callWay  2.sip   3.手机登录  (不支持网页的签入方式)
/// @param bindMobile  绑定的手机号码 （手机登录的方式 该字段必填）
/// @param thisQueues  接待技能组组号集合 （可以为空） 呼叫技能组组号的集合，定义座席可以接待哪些技能组的分配电话。该字段仅限“呼叫功能设置\座席手动选择技能组签入”设置启用之后才生效；未启用时，系统按照座席加入的全部呼叫技能组进行签入。
/// @param resultBlock 结果回调
+(void)agentLoginWithExt:(NSString *)ext
             agentStatus:(int )agentStatus
                 callWay:(int)callWay
              bindMobile:(NSString*)bindMobile
              thisQueues:(NSArray *)thisQueues
             ResultBlock:(SobotCallResultBlock)resultBlock;

//##### ● 重置离线(退出登录)
// 签出
+(void)logOut:(SobotCallResultBlock)resultBlock;



/// 重置离线
/// @param resultBlock 结果
+(void)logResetOut:(SobotCallResultBlock)resultBlock;

/// 置忙
/// @param reasonCode 置忙原因  、 11：小休；12：小休（培训）；13：小休（会议）；14：小休（用餐）；15：小休（活动）；16：小休（自定义1）；17：小休（自定义2）；18：小休（自定义3）
/// @param resultBlock 结果回调
+(void)noReady:(int )reasonCode resultBlock:(SobotCallResultBlock)resultBlock;

/// 置闲
/// @param resultBlock 结果回调
+(void)ready:(SobotCallResultBlock)resultBlock;

/// 座席重置离线
/// @param resultBlock 结果回调
+(void)resetLogout:(SobotCallResultBlock)resultBlock;

/// 查询座席可用的置忙原因
/// @param resultBlock 结果回调
+(void)queryAgentBusyStatus:(SobotCallResultBlock)resultBlock;

/// 查询座席可签入的技能组
/// @param resultBlock 结果回调
+(void)queryReceptionQueues:(SobotCallResultBlock)resultBlock;

///////////////////////////////////////////
/// 呼叫能力，外呼，挂机，等
///////////////////////////////////////////

///  外呼
/// @param otherDN 客户号码
/// @param privacyNumber 客户号码加密
/// @param companyId 企业ID,如果不传，默认为登录时返回的companyId
/// @param ANI  指定客户侧的外显号码
/// @param outboundPlanCode  指定客户侧的外显号码方案编码 (可选 外呼路由编码，根据智齿系统设定的外呼路由编码，匹配一个外显号码呼叫客户)
/// @param resultBlock 结果回调
+(void)makeCallWithotherDN:(NSString *)otherDN
             privacyNumber:(NSString*)privacyNumber
                 companyId:(NSString*)companyId
                       ani:(NSString *)ANI
                  userData:(NSDictionary *)userData
          outboundPlanCode:(NSString *)outboundPlanCode
               ResultBlock:(SobotCallResultBlock)resultBlock;

///  接听
/// @param resultBlock 结果回调
+(void)answer:(SobotCallResultBlock)resultBlock;

///   挂机
/// @param resultBlock 结果回调
+(void)hangup:(SobotCallResultBlock)resultBlock;

///   保持
/// @param resultBlock 结果回调
+(void)holdCall:(SobotCallResultBlock)resultBlock;

///   取消保持
/// @param resultBlock 结果回调
+(void)retrieveCall:(SobotCallResultBlock)resultBlock;

///   静音
/// @param resultBlock 结果回调
+(void)muteCall:(SobotCallResultBlock)resultBlock;

///   取消静音
/// @param resultBlock 结果回调
+(void)unmute:(SobotCallResultBlock)resultBlock;

/// 查询播放类型
+(NSString *)searchPlayCategory;

///设置播放类型
+(void)changedPlayCategory:(SobotCallResultBlock) resultBlock;

///  发送满意度
/// @param resultBlock 结果回调
+(void)sendSatisfy:(SobotCallResultBlock)resultBlock;

///  延长整理时长
/// @param delayTime  延长时间 (30-900秒)
/// @param resultBlock 结果回调
+(void)delayACW:(int )delayTime ResultBlock:(SobotCallResultBlock)resultBlock;

///  结束整理
/// @param resultBlock 结果回调
+(void)completeACW:(SobotCallResultBlock)resultBlock;

/// 结束整理并置忙
/// @param resultBlock 结果回调
+(void)completeACWToBusy:(SobotCallResultBlock)resultBlock;


///  发送按键
/// @param dtmfDigits  按键对应值(一次请求发送一个按键值，如，801#，则依次发送8、0、1、#这些按键请求,该参数不可为空)
/// @param resultBlock 结果回调
+(void)agentSendDtmf:(NSString *)dtmfDigits ResultBlock:(SobotCallResultBlock)resultBlock;

///////////////////////////////////////////
/// 辅助功能，
///////////////////////////////////////////
/**
    查询座席的外呼路由规则   [1 ]
    修改座席的外呼路由规则 【1】
 */

/// 查询座席的外呼路由规则
/// @param resultBlock 结果回调
+(void)queryRoutes:(SobotCallResultBlock)resultBlock;

/// 修改座席的外呼路由规则
/// @param explicitRule 外显规则 (1：企业号码池随机匹配；2：动态外显号码方案匹配；3：座席号码池指定；单选；)
/// @param explicitCode 动态外显方案编码  外显规则为动态外显号码方案时必传
/// @param explicitNumber 外显号码  不使用外显规则，直接指定企业的某外显号码呼叫客户，外显号码和外显规则至少需要传一个
/// @param resultBlock 结果回调
+(void)agentSetRouteExplicitRule:(NSString *)explicitRule
                    explicitCode:(NSString *)explicitCode
                  explicitNumber:(NSString *)explicitNumber
                     resultBlock:(SobotCallResultBlock)resultBlock;

+(BOOL)getLoginSuccess;
@end

NS_ASSUME_NONNULL_END
