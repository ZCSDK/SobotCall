//
//  SobotCallRecordEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/19.
//

#import <SobotCallLib/SobotCallLibDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallRecordEntity : SobotBaseEntity

//呼叫类型（1：呼出；0：呼入）
@property (nonatomic,strong) NSString *direction;//;//": 1,   这里统一使用V6的返回值callType 来处理 callType;// 2.呼入；3.外呼；

// 呼叫结果类型
//10：座席接听 11：振铃未接听 12：IVR放弃  13：排队失败 14：非服务时间来电 15：呼入话机异常 16：呼入网络异常 20：客户接听 770：客户关机
//771：客户停机 772：暂时无法接通 773：客户正在通话 774：号码空号 781：客户拒接 21：客户未接听 24：客户未接听 25：呼出话机异常 26：呼出网络异常
@property (nonatomic,strong) NSString *callResult;//;//": "21",
// 新增字段mainDialType(呼叫类型)  :   Internal (内部通话),  Inbound(呼入"),   RegularMakeCall (普通外呼),   TwoWayToPSTN(双向回呼),  ClickToCallback(点击拨号),  PreviewOutbound(预览外呼),  PredictiveOutbound(预测外呼)   
@property (nonatomic,copy) NSString *mainDialType;

//@property (nonatomic,copy) NSString *callType;// 1.内部通话 2 呼入 3 外呼
// 呼叫开始时间，时间戳（毫秒）
@property (nonatomic,strong) NSString *startTime;//;//": 1552359504694,

// 呼叫时长（秒）
@property (nonatomic,strong) NSString *callDuration;//;//": 65,

// 被叫号码
@property (nonatomic,strong) NSString *callee;//;//": "18513666499",

// 主叫号码
@property (nonatomic,strong) NSString *caller;//;//": "18611622736",

@property (nonatomic,strong) NSString *abandonFlag;//;//": 0,
@property (nonatomic,strong) NSString *agentAlertingTime;//;//": 1552359505392,
@property (nonatomic,strong) NSString *agentAlertingTimeStr;//;//": "20190312105825392",
@property (nonatomic,strong) NSString *agentEndTime;//;//": 1552359570380,
@property (nonatomic,strong) NSString *agentEndTimeStr;//;//": "20190312105930380",
@property (nonatomic,strong) NSString *agentStartTime;//;//": 1552359517632,
@property (nonatomic,strong) NSString *agentStartTimeStr;//;//": "20190312105837632",
@property (nonatomic,strong) NSString *agentid;//;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSNumber *alertingTimeDuration;//;//": 65,
@property (nonatomic,strong) NSString *businessId;//;//": "",
@property (nonatomic,strong) NSString *businessName;//;//": "",
@property (nonatomic,strong) NSString *businessTypeId;//;//": "",
@property (nonatomic,strong) NSString *businessTypeName;//;//": "",
@property (nonatomic,strong) NSString *bussinessTypePathId;//;//": "",
@property (nonatomic,strong) NSString *bussinessTypePathName;//;//": "",
@property (nonatomic,strong) NSString *callFlag;//;//": 0,
@property (nonatomic,strong) NSString *callRecordId;//;//": "095dfd9e-78ac-4931-ba56-ba590d21e77b",
@property (nonatomic,strong) NSString *callSucc;//;//": false,
@property (nonatomic,strong) NSString *callWay;//;//": 3,
@property (nonatomic,strong) NSString *calleeId;//;//": "",
@property (nonatomic,strong) NSString *calleeName;//;//": "",
@property (nonatomic,strong) NSString *callerId;//;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *callerName;//;//": "张新耀",
@property (nonatomic,strong) NSString *companyId;//;//": "73afd340f45148d58f71c33477439c7a",
@property (nonatomic,strong) NSString *departmentId;//;//": "73afd340f45148d58f71c33477439c7a|a8d80156696c435a9e28095c0c0037b4",

@property (nonatomic,strong) NSString *agentName;//;//": 0,
@property (nonatomic,strong) NSString *disNumber;//;//": "02180344314",
@property (nonatomic,strong) NSString *duration;//;//": 0,
@property (nonatomic,strong) NSString *endTime;//;//": 1552359570380,
@property (nonatomic,strong) NSString *endTimeStr;//;//": "20190312105930380",
@property (nonatomic,strong) NSString *ender;//;//": 2,
@property (nonatomic,strong) NSString *endtype;//;//": 3,
@property (nonatomic,strong) NSString *enterGroupFlag;//;//": 1,
@property (nonatomic,strong) NSString *existFlag;//;//": "0",
@property (nonatomic,strong) NSString *fee;//;//": 0.1,
@property (nonatomic,strong) NSString *feeDuration;//;//": 1,
@property (nonatomic,strong) NSString *groupId;//;//": "73afd340f45148d58f71c33477439c7a_2",
@property (nonatomic,strong) NSString *groupName;//;//": "张新耀测试组电销",
@property (nonatomic,strong) NSString *groupType;//;//": 3,
@property (nonatomic,strong) NSString *handleStatus;//;//": -1,


//号码隐藏 0.不隐藏 1.中间隐藏 2.末尾隐藏
@property (nonatomic,strong) NSString *hiddenFlag;//;//": 0,
@property (nonatomic,strong) NSString *hold;//;//": 0,
@property (nonatomic,strong) NSString *holdCount;//;//": 0,
@property (nonatomic,strong) NSString *holdTime;//;//": 0,
@property (nonatomic,strong) NSString *recordId;//;//": "095dfd9e-78ac-4931-ba56-ba590d21e77b",
@property (nonatomic,strong) NSString *inQueueTime;//;//": 0,
@property (nonatomic,strong) NSString *inQueueTimeStr;//;//": "",
@property (nonatomic,strong) NSString *isLeaveMsg;//;//": 0,
@property (nonatomic,strong) NSString *isOutCallInTask;//;//": 1,
@property (nonatomic,strong) NSString *isqueue;//;//": 0,
@property (nonatomic,strong) NSString *leaveMsgUrl;//;//": "",
@property (nonatomic,strong) NSString *lineType;//;//": 5,
@property (nonatomic,strong) NSString *nick;//;//": "",
@property (nonatomic,strong) NSString *numberCity;//;//": "北京",
@property (nonatomic,strong) NSString *numberProvice;//;//": "北京",
@property (nonatomic,strong) NSString *outQueueTime;//;//": 0,
@property (nonatomic,strong) NSString *outQueueTimeStr;//;//": "",
@property (nonatomic,strong) NSString *passPlatformType;//;//": 1,
@property (nonatomic,strong) NSString *platformType;//;//": 0,
@property (nonatomic,strong) NSString *qualityStatus;//;//": 0,
@property (nonatomic,strong) NSString *queueDuration;//;//": 0,
@property (nonatomic,strong) NSString *queueState;//;//": 1,
@property (nonatomic,strong) NSString *receiveStaffIds;//;//": "2e1735de978642b6a4330a070d70c4d3,2e1735de978642b6a4330a070d70c4d3,2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *receiveStaffNames;//;//": "张新耀,张新耀",
@property (nonatomic,strong) NSString *remarks;//;//": "",
@property (nonatomic,strong) NSString *satisfyLevel;//;//": 2,
@property (nonatomic,strong) NSString *satisfyNumber;//;//": 0,
@property (nonatomic,strong) NSString *satisfyValue;//;//": "",
@property (nonatomic,strong) NSString *serviceEmail;//;//": "zhangxy@sobot.com",
@property (nonatomic,strong) NSString *staffId;//;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *staffName;//;//": "张新耀",
@property (nonatomic,strong) NSString *startTimeStr;//;//": "20190312105824694",
@property (nonatomic,strong) NSString *summaryStaffName;//;//": "",
@property (nonatomic,strong) NSString *summaryUpdateTime;//;//": 0,
@property (nonatomic,strong) NSString *summaryUpdateTimeStr;//;//": "",
@property (nonatomic,strong) NSString *taskId;//;//": "",
@property (nonatomic,strong) NSString *taskStatus;//;//": 0,
@property (nonatomic,strong) NSString *transferCount;//;//": 0,
@property (nonatomic,strong) NSString *transferFlag;//;//": 0,
@property (nonatomic,strong) NSString *unHold;//;//": 0,
@property (nonatomic,strong) NSString *userAlertingTime;//;//": 1552359517682,
@property (nonatomic,strong) NSString *userAlertingTimeStr;//;//": "20190312105837682",
@property (nonatomic,strong) NSString *userAnswerTime;//;//": 0,
@property (nonatomic,strong) NSString *userAnswerTimeStr;//;//": "",
@property (nonatomic,strong) NSString *userCompanyId;//;//": "",
@property (nonatomic,strong) NSString *userCompanyName;//;//": "",
@property (nonatomic,strong) NSString *userId;//;//": "",
@property (nonatomic,strong) NSString *userName;//;//": "",
@property (nonatomic,strong) NSString *voiceAliyunUrl;//;//": "",
@property (nonatomic,strong) NSString *voiceRonglianUrl;//


@property (nonatomic,strong) NSString *customerName;//
@property (nonatomic,strong) NSString *customerDept;//


// ======================= 以下为V6新增 ================================
@property (nonatomic,assign) int callType;//": 3,
// 呼叫类型: 1.呼叫 2.转移 3.咨询 4.监听 5.抢接 6.强插
@property (nonatomic,assign) int dialType;//": 3,
@property (nonatomic,copy) NSString *fromAgentUUID;//":"FromAgentUUID",  // 呼叫的来源座席UUID
@property (nonatomic,copy) NSString *fromAgentID;//":"FromAgentID",  //呼叫的来源座席工号
@property (nonatomic,copy) NSString *fromAgentName;//":"FromAgentName",  //呼叫的来源座席姓名
@property (nonatomic,copy) NSString *fromQueueID;//":"FromQueueID",  //呼叫的来源技能组编码
@property (nonatomic,copy) NSString *fromQueueName;//":"FromQueueName",  //呼叫的来源技能组名称
@property (nonatomic,assign) BOOL lastAgentFlag;//":false  // 是否是最后一个服务座席


@property (nonatomic,assign) int mainFlag;//": 1,
//@property (nonatomic,copy) NSString *companyId;//": "a4c242898fe844f58bc6f94bdf958a4c",
@property (nonatomic,copy) NSString *callID;//": "0cdcc57c0cc5dN41fd79badQd00b1d4cee8c",
@property (nonatomic,copy) NSString *customerNumber;//": "",
@property (nonatomic,copy) NSString *screenNumber;//": "18****78969",
@property (nonatomic,copy) NSString *encryptCustomerNumber;//": "E8032000DC7D9C891B8CB21FB19A3A8436BC78F4",
@property (nonatomic,copy) NSString *areaPrefix;//": "0086",
@property (nonatomic,copy) NSString *areaCode;//": "010",
@property (nonatomic,copy) NSString *areaProvince;//": "北京",
@property (nonatomic,copy) NSString *areaCity;//": "北京",
@property (nonatomic,copy) NSString *customerId;//": "1f76469c961e4fe4a5adc4b9099e77d9",
@property (nonatomic,copy) NSString *gatewayNumber;//": "01051393551",
@property (nonatomic,copy) NSString *userStartTime;//": 0,
//@property (nonatomic,copy) NSString *startTime;//": 1690354302559,
@property (nonatomic,copy) NSString *alertTime;//": 1690354304481,
@property (nonatomic,copy) NSString *answerTime;//": 0,
@property (nonatomic,copy) NSString *bridgeTime;//": 0,
//@property (nonatomic,copy) NSString *endTime;//": 1690354310239,
//@property (nonatomic,copy) NSString *duration;//": 0,
@property (nonatomic,assign) int alertDuration;//": 6,
@property (nonatomic,assign) int totalDuration;//": 8,
//@property (nonatomic,copy) NSString *callResult;//": 7,
@property (nonatomic,copy) NSString *callDistributedResult;//": 0,
@property (nonatomic,copy) NSString *callDistributedTotalDuration;//": 0,
@property (nonatomic,copy) NSString *callDistributedFirstTime;//": 0,
@property (nonatomic,copy) NSString *earlyDetectCause;//": "无人接听",
@property (nonatomic,copy) NSString *hangupDisposition;//": 2,
@property (nonatomic,copy) NSString *hangupCause;//": "ORIGINATOR_CANCEL",
// 通话语音数据
@property (nonatomic,copy) NSDictionary *attachedData;
@property (nonatomic,copy) NSString *recordUrl;//": "",
@property (nonatomic,copy) NSString *satisfyStartTime;//": 0,
@property (nonatomic,copy) NSString *satisfyEndTime;//": 0,
@property (nonatomic,copy) NSString *firstSatisfyDigit;//": "",
@property (nonatomic,copy) NSString *secondSatisfyDigit;//": "",
@property (nonatomic,copy) NSString *satisfyResult;//": "",
@property (nonatomic,assign) int satisfyFlag;//": 0,
@property (nonatomic,copy) NSString *platformId;//": "a4c242898fe844f58bc6f94bdf958a4c",
//@property (nonatomic,copy) NSString *departmentId;//": "a4c242898fe844f58bc6f94bdf958a4c|c5189f09205443c1906f40a74b0a6142|dec50390378d48cda9f945f810da6c7a,呼叫虚拟组;",
@property (nonatomic,assign) int numberType;//": 1,
@property (nonatomic,copy) NSString *chargeDepartmentId;//": "a4c242898fe844f58bc6f94bdf958a4c|c5189f09205443c1906f40a74b0a6142|dec50390378d48cda9f945f810da6c7a",
@property (nonatomic,copy) NSString *feeSeconds;//": 0,
@property (nonatomic,copy) NSString *feeMinutes;//": 0,
//@property (nonatomic,copy) NSString *fee;//": 0.0,
@property (nonatomic,copy) NSString *firstRouteId;//": "",
@property (nonatomic,copy) NSString *firstRouteName;//": "",
@property (nonatomic,copy) NSString *firstIVRId;//": "",
@property (nonatomic,copy) NSString *firstIVRName;//": "",
@property (nonatomic,copy) NSString *firstQueueID;//": "",
@property (nonatomic,copy) NSString *firstQueueName;//": "",
@property (nonatomic,copy) NSString *firstAgentUUID;//": "a111bce9312e4722a64b5add581b3445",
@property (nonatomic,copy) NSString *firstAgentID;//": "00140",
@property (nonatomic,copy) NSString *firstAgentName;//": "冯 利景",
@property (nonatomic,copy) NSString *firstAgentDN;//": "00009",
@property (nonatomic,copy) NSString *firstAgentPhoneType;//": 1,
@property (nonatomic,copy) NSString *firstAgentPSTN;//": "",
@property (nonatomic,copy) NSString *lastQueueID;//": "",
@property (nonatomic,copy) NSString *lastQueueName;//": "",
@property (nonatomic,copy) NSString *lastAgentUUID;//": "a111bce9312e4722a64b5add581b3445",
@property (nonatomic,copy) NSString *belongAgentUUID;//": "a111bce9312e4722a64b5add581b3445",
@property (nonatomic,copy) NSString *lastAgentID;//": "00140",
@property (nonatomic,copy) NSString *belongAgentID;//": "00140",
@property (nonatomic,copy) NSString *lastAgentName;//": "冯 利景",
@property (nonatomic,copy) NSString *belongAgentName;//": "冯 利景",
@property (nonatomic,copy) NSString *lastAgentDN;//": "00009",
@property (nonatomic,copy) NSString *belongAgentDN;//": "00009",
@property (nonatomic,copy) NSString *lastAgentPhoneType;//": 1,
@property (nonatomic,copy) NSString *belongAgentPhoneType;//": 1,
@property (nonatomic,copy) NSString *lastAgentPSTN;//": "",
@property (nonatomic,copy) NSString *belongAgentPSTN;//": "",
@property (nonatomic,assign) int agentCount;//": 1,
//@property (nonatomic,copy) NSString *transferCount;//": 0,
@property (nonatomic,assign) int consultCount;//": 0,
@property (nonatomic,copy) NSArray *ivrTraces;//": [],
@property (nonatomic,copy) NSArray *groupTraces;//": [],
@property (nonatomic,copy) NSString *summaryId;//": "0cdcc57c0cc5dN41fd79badQd00b1d4cee8c",
@property (nonatomic,copy) NSString *summaryClassifyIds;//": "1526570143300792321",
@property (nonatomic,copy) NSString *summaryClassifyNames;//": "222",
@property (nonatomic,copy) NSString *summaryTemplateId;//": "1549668085844152322",
@property (nonatomic,copy) NSString *summaryTemplateName;//": "测试模板",
@property (nonatomic,copy) NSString *summaryHandleProgress;//": 2,
@property (nonatomic,copy) NSString *summaryFlag;//": 1,
@property (nonatomic,copy) NSArray *customerFields;//
@property (nonatomic,copy) NSString *remark;//": "455445",
@property (nonatomic,copy) NSString *firstDistributedQueueId;//": "",
@property (nonatomic,copy) NSString *firstDistributedQueueName;//": "",
@property (nonatomic,copy) NSString *lastDistributedQueueId;//": "",
@property (nonatomic,copy) NSString *lastDistributedQueueName;//": "",
@property (nonatomic,copy) NSString *qualityId;//": "",
@property (nonatomic,copy) NSString *qualityDistribution;//": false,
@property (nonatomic,copy) NSString *hasLeaveMessage;//": false,

//"leaveMessageTraces": [{
//    "areaCity": "北京",
//    "areaProvince": "北京",
//    "callID": "45b9beb60311aN11ee889c02525400785b43",
//    "destinationResultId": "",
//    "recordEndTime": 1690969955855,
//    "recordDuration": 3,
//    "recordUrl": "https://openapi.soboten.com/callservice/v6//cc-audios/recordings/db760fa1077eeN4a1b8907f2898685ef0497",
//    "destination": 0,//// 去向 （1.工单 2.留言信箱）
//    "recordStartTime": 1690969952175,
//    "customerNumber": "18500256199",
//    "gatewayNumber": "01051393543",
//    "destinationResultCode": "" // 留言编号
//}],
@property (nonatomic,copy) NSArray *leaveMessageTraces;//": "",
@property (nonatomic,copy) NSString *systemAnswered;//": false,
@property (nonatomic,copy) NSString *inboundRouteResult;//": 0,
@property (nonatomic,copy) NSString *joinedIVR;//": false,
@property (nonatomic,copy) NSString *joinedLastDistributedQueue;//": false,
@property (nonatomic,copy) NSString *offeredAgent;//": true,
@property (nonatomic,copy) NSString *offeredHumanAgent;//": true,
@property (nonatomic,copy) NSString *ringedAgent;//": false,
@property (nonatomic,copy) NSString *agentAnswered;//": false,
@property (nonatomic,copy) NSString *humanAgentAnswered;//": false,
@property (nonatomic,copy) NSString *customerAnswered;//": false,
@property (nonatomic,copy) NSString *inboundTransferedHumanAgent;//": false,
@property (nonatomic,copy) NSString *resultMonth;//": "2023-07",
@property (nonatomic,copy) NSString *weekOfYear;//": "30",
@property (nonatomic,copy) NSString *resultDate;//": "2023-07-26",
@property (nonatomic,copy) NSString *resultHour;//": "1400",
@property (nonatomic,copy) NSString *resultHalfHour;//": "1430",
@property (nonatomic,copy) NSString *resultDateHour;//": "202307261400",
@property (nonatomic,copy) NSString *resultDateHalfHour;//": "202307261430",
@property (nonatomic,copy) NSString *partyId;//": "19ba16ba01ae0N49c478b17Q5cefcb5bc86b",
@property (nonatomic,copy) NSString *robotTemplateId;//": "",
@property (nonatomic,copy) NSString *robotTemplateName;//": "",
@property (nonatomic,copy) NSString *triggerAgentMemory;//": 0,
@property (nonatomic,copy) NSString *partyRole;//": 1,
@property (nonatomic,copy) NSString *thisDN;//": "",
@property (nonatomic,copy) NSString *outboundCustomerNetworkReached;//": 1,
@property (nonatomic,copy) NSString *queueCount;//": 0,
@property (nonatomic,copy) NSString *conferenceCount;//": 0,
@property (nonatomic,copy) NSString *robotCall;//": false,
@property (nonatomic,copy) NSString *agentUUIDs;//": "a111bce9312e4722a64b5add581b3445",
@property (nonatomic,copy) NSString *queueIds;//": "",
@property (nonatomic,copy) NSString *partyIds;//": "0cdcc57c0cc5dN41fd79badQd00b1d4cee8c,",
@property (nonatomic,copy) NSString *customerNick;//": "景",
@property (nonatomic,copy) NSString *callDistributedDuration;//": 0,
@property (nonatomic,copy) NSString *sourceId;//": "",

// 1通话记录   2工单
@property (nonatomic,assign) int sourceType;//": 0,
@property (nonatomic,copy) NSString *sourceCode;//": "",
@property (nonatomic,copy) NSString *gatewayNumberNick;//": "400服务5",
@property (nonatomic,copy) NSString *departmentIds;//": "dec50390378d48cda9f945f810da6c7a",
@property (nonatomic,copy) NSString *inboundRepeatCount;//": 0,
@property (nonatomic,copy) NSString *fromChannel;//": "CallCenter",
@property (nonatomic,copy) NSString *serviceProvider;//": "",
@property (nonatomic,copy) NSString *trunkType;//": "",
//@property (nonatomic,copy) NSString *summaryUpdateTime;//": 1690360481668,
@property (nonatomic,copy) NSString *campaignId;//": "",
@property (nonatomic,copy) NSString *campaignRecordId;//": "",
@property (nonatomic,copy) NSString *callingListId;//": "",
@property (nonatomic,copy) NSString *callerNumber;//": "01051393551",
@property (nonatomic,copy) NSString *callerAgentUUID;//": "a111bce9312e4722a64b5add581b3445",
@property (nonatomic,copy) NSString *callerAgentID;//": "00140",
@property (nonatomic,copy) NSString *callerAgentName;//": "冯 利景",
@property (nonatomic,copy) NSString *callerDN;//": "",
@property (nonatomic,copy) NSString *calleeNumber;//": "18600978969",
@property (nonatomic,copy) NSString *calleeAgentUUID;//": "",
@property (nonatomic,copy) NSString *calleeAgentID;//": "",
@property (nonatomic,copy) NSString *calleeAgentName;//": "",
@property (nonatomic,copy) NSString *calleeDN;//": "",
@property (nonatomic,copy) NSString *callbackStatus;//": 0,
@property (nonatomic,copy) NSString *lastCallbackAgent;//": "",
@property (nonatomic,copy) NSString *lastCallbackTime;//": 0,
@property (nonatomic,copy) NSString *totalCallbackDuration;//": 0,
@property (nonatomic,copy) NSString *notAnswerNumber;//": 4,
@property (nonatomic,copy) NSString *followupStatus;//": 1,
@property (nonatomic,copy) NSString *lastFollowupAgent;//": "",
@property (nonatomic,copy) NSString *lastFollowupTime;//": 0,
@property (nonatomic,copy) NSString *lastFollowupComment;//": "",
@property (nonatomic,copy) NSString *lastLeftMessageRecordUrl;//": "",
@property (nonatomic,copy) NSString *lastLeftMessageDuration;//": 0,
@property (nonatomic,copy) NSString *orderNo;//": 0,
@property (nonatomic,copy) NSString *fromCallID;//": "",
@property (nonatomic,copy) NSString *downBillType;//": "",
@property (nonatomic,copy) NSString *firstCallAgentUUID;//": "a111bce9312e4722a64b5add581b3445",
@property (nonatomic,copy) NSString *firstCallAgentID;//": "00140",
@property (nonatomic,copy) NSString *firstCallAgentName;//": "冯 利景",
@property (nonatomic,copy) NSString *accumAgentRingingDuration;//": 2,
@property (nonatomic,copy) NSString *accumQueuesWithoutAgentDuration;//": 0,
@property (nonatomic,copy) NSString *satisfyTemplateId;//": "",
@property (nonatomic,copy) NSString *satisfyTemplateName;//": "",
@property (nonatomic,copy) NSString *userData;//": "{}",
@property (nonatomic,copy) NSString *creationTime;//": 1690368687662,
@property (nonatomic,copy) NSString *referenceID;//": 0,
@property (nonatomic,copy) NSString *messageID;//": "MainCDRInfo",
@property (nonatomic,copy) NSString *FCRStatus;//": 0



-(NSString *)getResulName;

@end

NS_ASSUME_NONNULL_END
