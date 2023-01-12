//
//  SobotCallService.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,SobotCallNetworkCode) {
    CALL_CODE_FAILED = 0,
    CALL_CODE_SUCCEEDED = 1,
    
};
/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^NetworkResultBlock)(SobotCallNetworkCode code,NSDictionary *_Nullable dict,NSString *_Nullable jsonString);

NS_ASSUME_NONNULL_BEGIN
// 版本号、初始化、渠道
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
+(void)getAgentSipAccount:(NSString *) agentID success:(void(^)(NSString *urlString)) startBlock
success:(__nullable NetworkResultBlock )successBlock failed:(__nullable NetworkResultBlock )failedBlock;



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
/// @param model 呼叫想起接口 SobotCallTaskDetailEntity
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)makeCallWithTaskModel:(id )model
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
+(void)postOutboundRoutesAgentId:(NSString *)agentID
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
+(void)postModOutboundRoutesWithExplicitRule:(NSString *)explicitRule
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
@end

NS_ASSUME_NONNULL_END
