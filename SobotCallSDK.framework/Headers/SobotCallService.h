//
//  SobotCallService.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <SobotCallLib/SobotCallHttps.h>
//typedef NS_ENUM(NSInteger,SobotCallNetworkCode) {
//    CALL_CODE_FAILED = 0,
//    CALL_CODE_SUCCEEDED = 1,
//    
//};
/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^NetworkResultBlock)(SobotCallNetworkCode code,NSDictionary *_Nullable dict,NSString *_Nullable jsonString);

NS_ASSUME_NONNULL_BEGIN
// 版本号、初始化、渠道
/// <#Description#>
@interface SobotCallService : NSObject

/// 登录
/// @param email 用户名
/// @param passwrod 密码
/// @param resultBlock 结果
+(void)login:(NSString *) email pwd:(NSString *) passwrod result:(NetworkResultBlock) resultBlock;



/// 根据登录token获取access_token
/// @param token 座席登录的token
/// @param resultBlock 回调
+(void)getAccessToken:(NSString *) token result:(NetworkResultBlock) resultBlock;



/// 查询呼叫相关域名
/// {"apiVersion":"6.0.0","status":"Success","code":200,"message":"请求服务成功","reason":"请求服务成功","kind":"Map","metaData":{},"data":{"stompSocket":"wss://hk.sobot.com/v6.0.0/webmsg/cc-webmsg","janusSocket":"wss://rtc.hk.sobot.cc/sip:10001@Cq5ONZpK.sg.sobot.cc"},"retMsg":"请求服务成功","retCode":"000000"}
+(void)getCallWebmsgUrls:(NetworkResultBlock)resultBlock;

/// 退出登录
/// @param loginUser 当前登录的用户名(邮箱)
/// @param resultBlock 结果
+(void)logOut:(NSString *)loginUser result:(NetworkResultBlock)resultBlock;


/// 查询座席合规配置
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getLoginUserInfo:(void(^)(NSString *urlString)) startBlock
success:(__nullable NetworkResultBlock )successBlock failed:(__nullable NetworkResultBlock )failedBlock;



/// 查询分机帐号
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getAgentSipAccount:(void(^)(NSString *urlString)) startBlock
success:(__nullable NetworkResultBlock )successBlock failed:(__nullable NetworkResultBlock )failedBlock;

+(void)getAgentSipAccount:(NSString *) searchExt page:(NSInteger ) curPage start:(void(^)(NSString *urlString)) startBlock
                  success:(__nullable NetworkResultBlock )successBlock failed:(__nullable NetworkResultBlock )failedBlock;



/// 修改分机语言编码
/// @param ext 分机号
/// @param langCodeTxt 编码
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)updateAgentSipLangCode:(NSString *) ext langCodeTxt:(NSString *) langCodeTxt success:(void(^)(NSString *urlString)) startBlock
success:(__nullable NetworkResultBlock )successBlock failed:(__nullable NetworkResultBlock )failedBlock;



/// 查询座席可签入的技能组
/// @param agentID 坐席ID
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getAgentGroups:(NSString *) agentID
              start:(void(^)(NSString *urlString)) startBlock
            success:(__nullable NetworkResultBlock )successBlock
               failed:(__nullable NetworkResultBlock )failedBlock;

/// 查询座席状态
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getAgentConfigStatusList:(void(^)(NSString *urlString)) startBlock
success:(__nullable NetworkResultBlock )successBlock failed:(__nullable NetworkResultBlock )failedBlock;



/// 查询座席登录方式
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getAgentPhoneTypes:(NSString *)agentID success:(void (^)(NSString * _Nonnull))startBlock success:(NetworkResultBlock)successBlock failed:(NetworkResultBlock)failedBlock;





/// 我的外呼任务
/// @param page 当前也
/// @param startBlock startBlock description
/// @param finishBlock finishBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getAppAllTaskDetailsWithPage:(int)page
                               name:(NSString*)name
                         startBlock:(void(^)(NSString *urlString)) startBlock
                             finish:(void(^)(id response,NSData  *data)) finishBlock
                            success:(__nullable NetworkResultBlock )successBlock
                             failed:(__nullable NetworkResultBlock )failedBlock;

/// 获取单条呼叫任务详情
/// @param model 任务id
/// @param pageNo pageNo description
/// @param pageSize pageSize description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getTaskDetailsWithTaskId:(id )model
                         pageNo:(int)pageNo
                       pageSize:(int)pageSize
                          start:(void (^)(NSString * _Nonnull urlString))startBlock
                        success:(NetworkResultBlock)successBlock
                         failed:(NetworkResultBlock)failedBlock;


/// 外呼任务发起呼叫
// @param model 呼叫想起接口 SobotCallTaskDetailEntity
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)makeCallWithTaskModel:(NSMutableDictionary *)params
                          start:(void (^)(NSString * _Nonnull urlString))startBlock
                        success:(NetworkResultBlock)successBlock
                     failed:(NetworkResultBlock)failedBlock;

/// V6 获取通话记录的接口
/// @param pamas pamas description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)postCallServiceCallRecordWithPamas:(NSDictionary *)pamas
                               startBlock:(void(^)(NSString *urlString)) startBlock
                                  success:(__nullable NetworkResultBlock )successBlock
                                   failed:(__nullable NetworkResultBlock )failedBlock;


///  V6 获取通话记录详情接口
/// @param callID callID description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getCallRecordDetailWithCallID:(NSString *)callID
                          startBlock:(void(^)(NSString *urlString)) startBlock
                             success:(__nullable NetworkResultBlock )successBlock
                              failed:(__nullable NetworkResultBlock )failedBlock;


/// 清理注册信息
/// @param aor aor description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)postClearUserWithSip:(NSString *)aor
                 startBlock:(void(^)(NSString *urlString)) startBlock
                    success:(__nullable NetworkResultBlock )successBlock
                     failed:(__nullable NetworkResultBlock )failedBlock;


///  重连恢复话务状态
/// @param simpSessionId simpSessionId description
/// @param currentInstanceId currentInstanceId description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getRecoverAgentStatus:(NSString *)simpSessionId
               currentInstanceId:(NSString *)currentInstanceId
                      startBlock:(void(^)(NSString *urlString)) startBlock
                         success:(__nullable NetworkResultBlock )successBlock
                          failed:(__nullable NetworkResultBlock )failedBlock;


///  重连回复座席状态
/// @param simpSessionId simpSessionId description
/// @param currentInstanceId currentInstanceId description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getRecoverAgentCallStatus:(NSString *)simpSessionId
               currentInstanceId:(NSString *)currentInstanceId
                      startBlock:(void(^)(NSString *urlString)) startBlock
                         success:(__nullable NetworkResultBlock )successBlock
                          failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询座席的外呼外显规则
/// @param agentID  座席id
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getOutboundRoutesAgentId:(NSString *)agentID
                     startBlock:(void(^)(NSString *urlString)) startBlock
                        success:(__nullable NetworkResultBlock )successBlock
                          failed:(__nullable NetworkResultBlock )failedBlock;


///  切换座席的外呼外显规则
/// @param explicitRule explicitRule description
/// @param explicitCode explicitCode description
/// @param explicitNumber explicitNumber description
/// @param agentID agentID description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)updateModOutboundRoutesWithExplicitRule:(NSString *)explicitRule
                                explicitCode:(NSString *)explicitCode
                              explicitNumber:(NSString *)explicitNumber
                                     AgentId:(NSString *)agentID
                                     success:(__nullable NetworkResultBlock )successBlock
                                      failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询座席置忙原因
/// @param agentID 座席id
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)queryAgentBusyStatusWithAgentId:(NSString *) agentID
                               success:(void(^)(NSString *urlString)) startBlock
                               success:(__nullable NetworkResultBlock )successBlock
                                failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询座席可签入的技能组
/// @param agentID 座席id
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)queryReceptionQueuesWithAgentId:(NSString *) agentID
                                    success:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                                     failed:(__nullable NetworkResultBlock )failedBlock;

/// 查询座席可使用的分机信息
/// @param agentID agentID description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getAgentExts:(NSString *) agentID
              start:(void(^)(NSString *urlString)) startBlock
            success:(__nullable NetworkResultBlock )successBlock
             failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询座席签入绑定信息
/// @param agentID agentID description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getLoginBingInfo:(NSString *)agentID
                  start:(void (^)(NSString * _Nonnull))startBlock
                success:(NetworkResultBlock)successBlock
                 failed:(NetworkResultBlock)failedBlock;



/// 查询当前电话区号
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)searchcallingCode:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                  failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询电话区号列表
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)searchArealist:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
               failed:(__nullable NetworkResultBlock )failedBlock;


/// 更新电话区号列表
/// @param callingCode callingCode description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)updateAreaCodeResult:(NSString *)callingCode
                 startBlock:(void(^)(NSString *urlString)) startBlock
                    success:(__nullable NetworkResultBlock )successBlock
                     failed:(__nullable NetworkResultBlock )failedBlock;




/// 关联客户
/// @param customerId 客户ID
/// @param callId 通话id
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)recordLinkSysUser:(NSString *) customerId
                  callid:(NSString *) callId
                                    success:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                  failed:(__nullable NetworkResultBlock )failedBlock;

// searchText
// page
+(void)queryEnterpriseList:(NSDictionary *) params
                                    success:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                    failed:(__nullable NetworkResultBlock )failedBlock;

#pragma mark - 查询Vip等级信息
+(void)queryVipLevelList:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                  failed:(__nullable NetworkResultBlock )failedBlock;
    

/// 查询用户信息
/// @param customerId 客户id
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)querySysUser:(NSString *) customerId
                                    success:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
             failed:(__nullable NetworkResultBlock )failedBlock;


/// 搜素客户
/// @param params pageNo，pageSize，searchValue
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)querySysUserList:(NSDictionary *) params
                                    success:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                 failed:(__nullable NetworkResultBlock )failedBlock;


+(void)saveOrUpdateAppUser:(NSDictionary *) params start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
              failed:(__nullable NetworkResultBlock )failedBlock;


+(void)updateAppUser:(NSDictionary *) params start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
              failed:(__nullable NetworkResultBlock )failedBlock;

/// 保存服务总结
/// @param params 保存内容
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败 
+(void)saveSummaryInfo:(NSDictionary *) params start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                failed:(__nullable NetworkResultBlock )failedBlock;

/// 查询服务总结分类
/// @param planType 根据分类来，配置中获取
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)querySummaryTypes:(int ) planType
                                    start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                  failed:(__nullable NetworkResultBlock )failedBlock;

#pragma mark - 查询服务总结配置
+(void)querySummaryConfig:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                   failed:(__nullable NetworkResultBlock )failedBlock;

#pragma mark - 查询服务总结自定义字段
/// - Parameters:
///   - businessType: 1用户，3服务总结
///   - startBlock: 开始
///   - successBlock: 成功
///   - failedBlock: 失败
+(void)querySummaryFields:(int )businessType start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                   failed:(__nullable NetworkResultBlock )failedBlock;

// 查询服务总结模板

+(void)querySummaryTemplate:(NSDictionary *) params start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                     failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询服务总结分类
/// @param params callID
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)querySummaryInfo:(NSDictionary *) params start:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                 failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询国家
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)queryCountryList:(void(^)(NSString *urlString)) startBlock
                                    success:(__nullable NetworkResultBlock )successBlock
                 failed:(__nullable NetworkResultBlock )failedBlock;

/// 查询州/省
/// @param countryId 国家id
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)queryProvinceList:(NSString * _Nullable) countryId
                   start:(void(^)(NSString *urlString)) startBlock
                 success:(__nullable NetworkResultBlock )successBlock
                 failed:(__nullable NetworkResultBlock )failedBlock;

/// 查询城市
/// @param provinceId 省id
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)queryCityList:(NSString * _Nullable) provinceId
                   start:(void(^)(NSString *urlString)) startBlock
                 success:(__nullable NetworkResultBlock )successBlock
                 failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询地区
/// @param cityId 城市id
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)queryAreaList:(NSString * _Nullable) cityId
                   start:(void(^)(NSString *urlString)) startBlock
                 success:(__nullable NetworkResultBlock )successBlock
                 failed:(__nullable NetworkResultBlock )failedBlock;


/// 根据通话ID查询通话中的用户信息
/// @param callID 通话ID
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)searchCallUserData:(NSString *)callID
               startBlock:(void(^)(NSString *urlString)) startBlock
                  success:(__nullable NetworkResultBlock )successBlock
                   failed:(__nullable NetworkResultBlock )failedBlock;


/// 根据通话电话号 查询关联用户
/// @param phoneNumber phoneNumber description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)searchCallUsersWithPhone:(NSString *)phoneNumber
                     startBlock:(void(^)(NSString *urlString)) startBlock
                        success:(__nullable NetworkResultBlock )successBlock
                         failed:(__nullable NetworkResultBlock )failedBlock;


/// 回拨
/// @param callID callID description
/// @param sourceId sourceId description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)goCallBackWithCallId:(NSString *)callID
                   sourceId:(NSString *)sourceId
                 sourceType:(NSString *)sourceType
               startBlock:(void(^)(NSString *urlString)) startBlock
                  success:(__nullable NetworkResultBlock )successBlock
                     failed:(__nullable NetworkResultBlock )failedBlock;


/// 获取 是否开启签入选择技能组
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getQueueCheckinstartBlock:(void(^)(NSString *urlString)) startBlock
                  success:(__nullable NetworkResultBlock )successBlock
                     failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询是否是主通话 服务总结使用
/// @param callID callID description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getCdrAgentWithCallID:(NSString *)callID
                  startBlock:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                      failed:(__nullable NetworkResultBlock )failedBlock;


/// 获取外呼时的 英文城市显示
/// @param callID callID description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getUserCitytWithCallID:(NSString *)callID
                  startBlock:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                      failed:(__nullable NetworkResultBlock )failedBlock;




#pragma mark - 呼叫任务相关

/// 查询通话任务详情信息
/// - Parameters:
///   - campaignId: 任务id
///   - recordId: 通话记录id
///   - startBlock:  成功
///   - successBlock: successBlock description
///   - failedBlock: failedBlock description
+(void)getCallTaskDetailInfo:(NSString *)campaignId recordId:(NSString *) recordId
                  startBlock:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                      failed:(__nullable NetworkResultBlock )failedBlock;

/// 修改通话任务详情信息
/// - Parameters:
///   - campaignId: 任务id
///   - recordId: 通话记录id
///   - startBlock:  成功
///   - successBlock: successBlock description
///   - failedBlock: failedBlock description
+(void)saveCallTaskDetailInfo:(NSString *)campaignId
                     recordId:(NSString *) recordId
                   dataFields:(NSMutableArray *) dataFields
                  startBlock:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                       failed:(__nullable NetworkResultBlock )failedBlock;


/// 修改通话任务服务总结信息
/// - Parameters:
///   - campaignId: 任务id
///   - recordId: 通话记录id
///   - startBlock:  成功
///   - successBlock: successBlock description
///   - failedBlock: failedBlock description
+(void)getCallTaskSummary:(NSString *)campaignId recordId:(NSString *) recordId
                  startBlock:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                   failed:(__nullable NetworkResultBlock )failedBlock;



/// 修改通话任务服务总结信息
/// - Parameters:
///   - campaignId: 任务id
///   - recordId: 通话记录id
///   - exParams: exParams总结数据
///   - startBlock:  成功
///   - successBlock: successBlock description
///   - failedBlock: failedBlock description
+(void)saveCallTaskSummary:(NSString *)campaignId
                     recordId:(NSString *) recordId
                    dataFields:(NSMutableArray *) exFields
                  startBlock:(void(^)(NSString *urlString)) startBlock
                     success:(__nullable NetworkResultBlock )successBlock
                    failed:(__nullable NetworkResultBlock )failedBlock;



/// 修改通话任务记录列表
/// - Parameters:
///   - campaignId: 任务id
///   - campaignRecordId: 任务明细id
///   - startBlock:  成功
///   - successBlock: successBlock description
///   - failedBlock: failedBlock description
+(void)getCallTaskRecordList:(NSString *)campaignId
                     recordId:(NSString *) campaignRecordId
                               startBlock:(void(^)(NSString *urlString)) startBlock
                                  success:(__nullable NetworkResultBlock )successBlock
                      failed:(__nullable NetworkResultBlock )failedBlock;


/// 查询客服工作台任务明细列表
/// - Parameters:
///   - campaignId: 任务ID
///   - CampaignContactExecuteEnum: 执行状态名称，UNEXECUTE，ENEXECUTE，ENEXECUTE_UNTALK，ENEXECUTE_ENTALK，ALL,分别对应未执行，已执行，已执行未接听，已执行已接听，全部
///   - type:  查询条件 1.姓名 2.号码
///   - value: 模糊查询的文本框内容，姓名，号码
///   - currPage: 当前页数
///   - pageSize: 每页条数
///   - startBlock: startBlock description
///   - successBlock: successBlock description
///   - failedBlock: failedBlock description
+(void)postCallTaskContactsList:(NSString *)campaignId
     CampaignContactExecuteEnum:(NSString *)name
                           type:(int)type
                          value:(NSString *)value
                       currPage:(int)currPage
                       pageSize:(int)pageSize
                     startBlock:(void(^)(NSString *urlString)) startBlock
                        success:(__nullable NetworkResultBlock )successBlock
                         failed:(__nullable NetworkResultBlock )failedBlock;
@end


NS_ASSUME_NONNULL_END
