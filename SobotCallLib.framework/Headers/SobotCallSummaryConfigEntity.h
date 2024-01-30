//
//  SobotCallSummaryConfigEntity.h
//  SobotCallSDK
//
//  Created by zhangxy on 2023/7/25.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallSummaryConfigEntity : SobotBaseEntity

@property (nonatomic,assign) int enabled;//": 1,
//": {
//    "__custom_hold_music": "https://img-sg.sobot.com/cc/8d96aeec346f4d749105177d2a33bec8/sound-files/2.wav"
//},
@property (nonatomic,strong) NSDictionary * extensions;//
@property (nonatomic,strong) NSString * configid;//": "0525cf78e8e44635b626ce0e7890fd2e",
@property (nonatomic,assign) int agentErrorOffLine;//": 0,
@property (nonatomic,assign) int phoneErrorSetBusy;//": 1,
@property (nonatomic,strong) NSString * phoneErrorSetBusyCount;//": "1",
@property (nonatomic,strong) NSString * noAnswerSetBusy;//": 1,
@property (nonatomic,strong) NSString * noAnswerSetBusyCount;//": "1",
@property (nonatomic,assign) int queueLength;//": 0,
@property (nonatomic,assign) int duplicateCall;//": 0,
@property (nonatomic,assign) int oneDayCallCount;//": 0,
@property (nonatomic,assign) int twoDaysCallCount;//": 0,
@property (nonatomic,assign) int tipSoundType;//": 1,
@property (nonatomic,strong) NSString * tipSoundContent;//": "默认背景音乐",
@property (nonatomic,strong) NSString * tipSoundId;//": "96cd02cf8b6a485890b5daf27aa8f014",
@property (nonatomic,assign) int summaryClassificationRequired;//": 0,
@property (nonatomic,assign) int summaryClassificationLevelLimit;//": 0,
@property (nonatomic,assign) int summaryTemplateRequired;//": 0,
@property (nonatomic,assign) int userHangupAgentTipSound;//": 1,
//": [{
//    "enabled": 1,
//    "creatorId": "0910ba8d7bd243a5aa86f0b5bbc77b10",
//    "creationTime": 1684311322492,
//    "updateUserId": "0910ba8d7bd243a5aa86f0b5bbc77b10",
//    "updatedTime": 1684311322492,
//    "companyId": "8d96aeec346f4d749105177d2a33bec8",
//    "lastTalkTime": 3,
//    "announcedAgentId": 0,
//    "soundType": 2,
//    "soundContent": "客户已挂机",
//    "businessId": "8d96aeec346f4d749105177d2a33bec8",
//    "businessType": 3,
//    "sort": 1,
//    "language": "zh"
//}],
@property (nonatomic,strong) NSArray * userHangupAgentTipSounds;
@property (nonatomic,assign) int agentNoAnswerUserTipSound;//": 1,
//[{
//   "enabled": 1,
//   "creatorId": "e2bf45dacf1a46a0b26855234a7d96b8",
//   "creationTime": 1686141114575,
//   "updateUserId": "e2bf45dacf1a46a0b26855234a7d96b8",
//   "updatedTime": 1686141114575,
//   "companyId": "8d96aeec346f4d749105177d2a33bec8",
//   "lastTalkTime": 3,
//   "announcedAgentId": 0,
//   "soundType": 2,
//   "soundContent": "It is not answered now. Please redial later000Ii12212",
//   "businessId": "8d96aeec346f4d749105177d2a33bec8",
//   "businessType": 9,
//   "sort": 1,
//   "language": "zh"
//}],
@property (nonatomic,strong) NSArray * agentNoAnswerUserTipSounds;//":
@property (nonatomic,assign) int agentAnswerUserTipSound;//": 0,
@property (nonatomic,assign) int thirdNoAnswerUserTipSound;//": 1,
//": [{
//    "enabled": 1,
//    "creatorId": "e2bf45dacf1a46a0b26855234a7d96b8",
//    "creationTime": 1686141114594,
//    "updateUserId": "e2bf45dacf1a46a0b26855234a7d96b8",
//    "updatedTime": 1686141114594,
//    "companyId": "8d96aeec346f4d749105177d2a33bec8",
//    "lastTalkTime": 3,
//    "announcedAgentId": 0,
//    "soundType": 2,
//    "soundContent": "It is not answered now. Please redial later",
//    "businessId": "8d96aeec346f4d749105177d2a33bec8",
//    "businessType": 11,
//    "sort": 1,
//    "language": "zh"
//}],
@property (nonatomic,strong) NSArray * thirdNoAnswerUserTipSounds;
@property (nonatomic,assign) int thirdAnswerUserTipSound;//": 0,
@property (nonatomic,assign) int sipOfflineAgentLogout;//": 0,
@property (nonatomic,assign) int agentLoginPhoneType;//": "",
@property (nonatomic,assign) int agentSelectQueueCheckin;//": 0,
@property (nonatomic,assign) int agentSyncPlayCustomerPrompted;//": 0,
//[{
//    "companyId": "8d96aeec346f4d749105177d2a33bec8",
//    "id": "1623880708831318017",
//    "progressCode": 1,
//    "progressName": "待处理",
//    "progressDesc": null,
//    "operationAuthority": 0,
//    "enabled": 1,
//    "creationTime": 1675998305887,
//    "updatedTime": 1675998305887,
//    "creatorId": "0910ba8d7bd243a5aa86f0b5bbc77b10",
//    "updateUserId": "0910ba8d7bd243a5aa86f0b5bbc77b10"
@property (nonatomic,strong) NSArray *summaryHandleProgressList;
@property (nonatomic,strong) NSString * companyId;//": "8d96aeec346f4d749105177d2a33bec8",
@property (nonatomic,assign) int summaryFlag;//": 1, // 是否开启服务端总结 V6
@property (nonatomic,assign) int handleProgressFlag;//": 1,
@property (nonatomic,assign) int onlinePlan;//": 1,
@property (nonatomic,assign) int callPlan;//": 1,
@property (nonatomic,assign) int multiPlanFlag;//": 0,

//requiredFlag： 1  --启用（选择“无效记录”时，服务分类、服务模板变为非必填。）
@property (nonatomic,assign) int requiredFlag;//": 0,
@property (nonatomic,strong) NSString * creationTime;//": 1676002150474,
@property (nonatomic,strong) NSString * updatedTime;//": 1676002150474,
@property (nonatomic,strong) NSString * creatorId;//": "0910ba8d7bd243a5aa86f0b5bbc77b10",
@property (nonatomic,strong) NSString * updateUserId;//": "0910ba8d7bd243a5aa86f0b5bbc77b10",
@property (nonatomic,strong) NSString * summaryConfigId;//": "1623896834193756162"
@end

NS_ASSUME_NONNULL_END
