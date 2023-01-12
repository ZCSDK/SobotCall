//
//  SobotCallRecordEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/19.
//

#import <SobotCallSDK/SobotCallDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallRecordEntity : SobotBaseEntity

//呼叫类型（1：呼出；0：呼入）
@property (nonatomic,strong) NSString *direction;//": 1,   这里统一使用V6的返回值callType 来处理 callType;// 2.呼入；3.外呼；

// 呼叫结果类型
//10：座席接听 11：振铃未接听 12：IVR放弃  13：排队失败 14：非服务时间来电 15：呼入话机异常 16：呼入网络异常 20：客户接听 770：客户关机
//771：客户停机 772：暂时无法接通 773：客户正在通话 774：号码空号 781：客户拒接 21：客户未接听 24：客户未接听 25：呼出话机异常 26：呼出网络异常
@property (nonatomic,strong) NSString *callResult;//": "21",

// 呼叫开始时间，时间戳（毫秒）
@property (nonatomic,strong) NSString *startTime;//": 1552359504694,

// 呼叫时长（秒）
@property (nonatomic,strong) NSString *callDuration;//": 65,

// 被叫号码
@property (nonatomic,strong) NSString *callee;//": "18513666499",

// 主叫号码
@property (nonatomic,strong) NSString *caller;//": "18611622736",

@property (nonatomic,strong) NSString *abandonFlag;//": 0,
@property (nonatomic,strong) NSString *agentAlertingTime;//": 1552359505392,
@property (nonatomic,strong) NSString *agentAlertingTimeStr;//": "20190312105825392",
@property (nonatomic,strong) NSString *agentEndTime;//": 1552359570380,
@property (nonatomic,strong) NSString *agentEndTimeStr;//": "20190312105930380",
@property (nonatomic,strong) NSString *agentStartTime;//": 1552359517632,
@property (nonatomic,strong) NSString *agentStartTimeStr;//": "20190312105837632",
@property (nonatomic,strong) NSString *agentid;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSNumber *alertingTimeDuration;//": 65,
@property (nonatomic,strong) NSString *businessId;//": "",
@property (nonatomic,strong) NSString *businessName;//": "",
@property (nonatomic,strong) NSString *businessTypeId;//": "",
@property (nonatomic,strong) NSString *businessTypeName;//": "",
@property (nonatomic,strong) NSString *bussinessTypePathId;//": "",
@property (nonatomic,strong) NSString *bussinessTypePathName;//": "",
@property (nonatomic,strong) NSString *callFlag;//": 0,
@property (nonatomic,strong) NSString *callRecordId;//": "095dfd9e-78ac-4931-ba56-ba590d21e77b",
@property (nonatomic,strong) NSString *callSucc;//": false,
@property (nonatomic,strong) NSString *callWay;//": 3,
@property (nonatomic,strong) NSString *calleeId;//": "",
@property (nonatomic,strong) NSString *calleeName;//": "",
@property (nonatomic,strong) NSString *callerId;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *callerName;//": "张新耀",
@property (nonatomic,strong) NSString *companyId;//": "73afd340f45148d58f71c33477439c7a",
@property (nonatomic,strong) NSString *departmentId;//": "73afd340f45148d58f71c33477439c7a|a8d80156696c435a9e28095c0c0037b4",

@property (nonatomic,strong) NSString *disNumber;//": "02180344314",
@property (nonatomic,strong) NSString *duration;//": 0,
@property (nonatomic,strong) NSString *endTime;//": 1552359570380,
@property (nonatomic,strong) NSString *endTimeStr;//": "20190312105930380",
@property (nonatomic,strong) NSString *ender;//": 2,
@property (nonatomic,strong) NSString *endtype;//": 3,
@property (nonatomic,strong) NSString *enterGroupFlag;//": 1,
@property (nonatomic,strong) NSString *existFlag;//": "0",
@property (nonatomic,strong) NSString *fee;//": 0.1,
@property (nonatomic,strong) NSString *feeDuration;//": 1,
@property (nonatomic,strong) NSString *groupId;//": "73afd340f45148d58f71c33477439c7a_2",
@property (nonatomic,strong) NSString *groupName;//": "张新耀测试组电销",
@property (nonatomic,strong) NSString *groupType;//": 3,
@property (nonatomic,strong) NSString *handleStatus;//": -1,


//号码隐藏 0.不隐藏 1.中间隐藏 2.末尾隐藏
@property (nonatomic,strong) NSString *hiddenFlag;//": 0,
@property (nonatomic,strong) NSString *hold;//": 0,
@property (nonatomic,strong) NSString *holdCount;//": 0,
@property (nonatomic,strong) NSString *holdTime;//": 0,
@property (nonatomic,strong) NSString *recordId;//": "095dfd9e-78ac-4931-ba56-ba590d21e77b",
@property (nonatomic,strong) NSString *inQueueTime;//": 0,
@property (nonatomic,strong) NSString *inQueueTimeStr;//": "",
@property (nonatomic,strong) NSString *isLeaveMsg;//": 0,
@property (nonatomic,strong) NSString *isOutCallInTask;//": 1,
@property (nonatomic,strong) NSString *isqueue;//": 0,
@property (nonatomic,strong) NSString *leaveMsgUrl;//": "",
@property (nonatomic,strong) NSString *lineType;//": 5,
@property (nonatomic,strong) NSString *nick;//": "",
@property (nonatomic,strong) NSString *numberCity;//": "北京",
@property (nonatomic,strong) NSString *numberProvice;//": "北京",
@property (nonatomic,strong) NSString *outQueueTime;//": 0,
@property (nonatomic,strong) NSString *outQueueTimeStr;//": "",
@property (nonatomic,strong) NSString *passPlatformType;//": 1,
@property (nonatomic,strong) NSString *platformType;//": 0,
@property (nonatomic,strong) NSString *qualityStatus;//": 0,
@property (nonatomic,strong) NSString *queueDuration;//": 0,
@property (nonatomic,strong) NSString *queueState;//": 1,
@property (nonatomic,strong) NSString *receiveStaffIds;//": "2e1735de978642b6a4330a070d70c4d3,2e1735de978642b6a4330a070d70c4d3,2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *receiveStaffNames;//": "张新耀,张新耀",
@property (nonatomic,strong) NSString *remarks;//": "",
@property (nonatomic,strong) NSString *satisfyLevel;//": 2,
@property (nonatomic,strong) NSString *satisfyNumber;//": 0,
@property (nonatomic,strong) NSString *satisfyValue;//": "",
@property (nonatomic,strong) NSString *serviceEmail;//": "zhangxy@sobot.com",
@property (nonatomic,strong) NSString *staffId;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *staffName;//": "张新耀",
@property (nonatomic,strong) NSString *startTimeStr;//": "20190312105824694",
@property (nonatomic,strong) NSString *summaryStaffName;//": "",
@property (nonatomic,strong) NSString *summaryUpdateTime;//": 0,
@property (nonatomic,strong) NSString *summaryUpdateTimeStr;//": "",
@property (nonatomic,strong) NSString *taskId;//": "",
@property (nonatomic,strong) NSString *taskStatus;//": 0,
@property (nonatomic,strong) NSString *transferCount;//": 0,
@property (nonatomic,strong) NSString *transferFlag;//": 0,
@property (nonatomic,strong) NSString *unHold;//": 0,
@property (nonatomic,strong) NSString *userAlertingTime;//": 1552359517682,
@property (nonatomic,strong) NSString *userAlertingTimeStr;//": "20190312105837682",
@property (nonatomic,strong) NSString *userAnswerTime;//": 0,
@property (nonatomic,strong) NSString *userAnswerTimeStr;//": "",
@property (nonatomic,strong) NSString *userCompanyId;//": "",
@property (nonatomic,strong) NSString *userCompanyName;//": "",
@property (nonatomic,strong) NSString *userId;//": "",
@property (nonatomic,strong) NSString *userName;//": "",
@property (nonatomic,strong) NSString *voiceAliyunUrl;//": "",
@property (nonatomic,strong) NSString *voiceRonglianUrl;//


// ======================= 以下为V6新增 ================================
@property (nonatomic,copy) NSString *callID ;// 通话记录简称为：主话单; 1通电话有且仅有1个主话单id // "6bf3cbb167a14c7521993665adba687b"  V6查询子页面的入参使用
@property (nonatomic,copy) NSString *callType;// 2.呼入；3.外呼；
@property (nonatomic,copy) NSString *customerNumber;// //客户号码
@property (nonatomic,copy) NSString *customerName;// 客户昵称  "张三",
@property (nonatomic,copy) NSString *customerDept;// "宇宙银行"
@property (nonatomic,copy) NSString *screenNumber;// 脱敏后号码，取决于接口中[客户号码脱敏]  // 拨号用这个，
@property (nonatomic,copy) NSString *encryptCustomerNumber;// 加密后号码，取决于接口中[客户号码脱敏] // 显示用这个，这个是加密后的 加密规则由服务端处理
@property (nonatomic,copy) NSString *gatewayNumber;//中继号码
// V6接口返回值样式
//{
//  "apiVersion": "6.2",
//  "status": "Success",
//  "message": "",
//  "code": 200,
//  "reason": "OK",
//  "kind": "MainCDRInfo",
//  "data": {
//    "currPage": 1, //当前页
//    "pageSize": 15, //每页记录数
//    "total": 12    //总记录数
//    "list":[
//      {
//        "callID":"6bf3cbb167a14c7521993665adba687b", // callID
//        "callType": 2,
//        "customerNumber":"18618256606",  //客户号码
//        "areaCode":"0871",
//        "areaProvince":"云南省",
//        "areaCity":"昆明市",
//        "gatewayNumber":"95588",  // 客户腿的中继号码
//        "startTime":1637068156419,  //开始时间 unix时间戳(毫秒)
//        "alertTime":1637068256419, //客户腿的振铃时间 unix时间戳(毫秒)
//        "answerTime":1637068356419, //客户腿的接通时间 unix时间戳(毫秒)
//        "bridgeTime":1637068456419, //客户和座席桥接时间 unix时间戳(毫秒)
//        "endTime":1637068556419, //客户腿的挂断时间 unix时间戳(毫秒)
//        "duration":"100", //客户腿从桥接到挂断时长 单位: 秒
//        "totalDuration":"120", //客户腿从开始到挂断时长 单位: 秒
//        "callResult":, 2, // 客户腿 1.其他原因无法应答 2.欠费 3.客户号码黑名单 4.未找到座席侧 5.客户速挂6.座席侧未接听 7.客户未接听 8.双方已接听 9.中继号码停用
//        "earlyDetectCause":200, //呼叫PSTN号码失败的回铃音; 默认为 0
//        "hangupDisposition": 1, // 挂机方向
//        "recordUrl":"https://record.soboten.com/recordings/cc3738581df7413da5d3204364943e3d", //录音路径。录音下载需要统一认证
//        "satisfyStartTime":1637068656419,//满意度开始时间 unix时间戳(毫秒)
//        "satisfyEndTime":1637068756419,//满意度结束时间 unix时间戳(毫秒)
//        "firstSatisfyDigit":"2", //一级满意度DTMF按键; 取值范围 [0-9,*,#]; 没有则为空字符串
//        "secondSatisfyDigit":"3", //二级满意度DTMF按键; 取值范围 [0-9,*,#]; 没有则为空字符串
//        "platformId":"7d6c1b38caad4a539d92b73d390b664c", // 平台商户ID
//        "companyId":"825072edbd914f47aa8704de02f1cdb6", // 公司ID
//        "feeSeconds":100, // 计费-计费时长(秒)
//        "feeMinutes":2, // 计费-计费时长(分钟)
//        "firstRouteId":"3b36d0a056404a48b644c39ed82e22fe", // 第一次路由ID
//        "firstRouteName":"", // 第一次路由名称
//        "firstIVRId":"", // 第一次IVR ID
//        "firstIVRName":"", // 第一次IVR 名称
//        "firstDistributedQueueID":"", // 首次排队技能组ID
//        "firstDistributedQueueName":"", // 首次排队技能组名称
//        "lastQueueID":"", // 最后一次技能组ID
//        "lastQueueName":"", // 最后一次技能组名称
//        "lastAgentUUID":"", // 最后一次接待座席UUID
//        "lastAgentName":"", // 最后一次接待座席名称
//        "lastAgentID":"", // 最后一次接待座席工号
//        "lastAgentDN":"", // 最后一次接待座席分机
//        "lastAgentPhoneType":0, // 最后一次接待座席设备类型 1.webrtc 2.wechat 3.pstn 4.sip 5.sobotapp
//        "lastAgentPstn":"", //最后接待的座席使用的手机号码
//        "transferCount":1, //发起转接次数
//        "consultCount":1, //成功咨询次数
//        "callDistributedResult":2, //最后排队状态 1.排队中座席接听 2.排队超时 3.无可用座席4.排队中客户放弃 5.队列满 6.排队中异常挂机
//        "sourceType":2,  //来源对象类型 0:默认; 1:通话记录; 2: 工单; 3:会话记录
//        "sourceId": "", //来源对象Id
//        "ivrNodes":[
//            "ivrNode":{
//                "nodeId":"86dc99bc0afd11eca5a80a80ff2603de",
//                "nodeName":"放音",
//                "startTime":1637068356419  // unix时间戳(毫秒)
//            },
//            "ivrNode":{
//                "nodeId":"c3125c73950e4b37a695d908c087776a",
//                "nodeName":"转接座席",
//                "startTime":1637068456419  //unix时间戳(毫秒)
//            }
//        ],
//        "groupTraces":[
//          "groupCode":"1111@a168774eee324e4698a9b9fabc09f146",
//          "groupName":"技能组1111",
//          "fromType":3,
//          "fromId":"1111@a168774eee324e4698a9b9fabc09f146",
//          "fromName":"技能组1111",
//          "leavecause":3, //1.排队中座席接听 2.排队超时 3.无可用座席4.排队中客户放弃 5.队列满 6.排队中异常挂机
//          "startTime":1637068256419,  // unix时间戳(毫秒)
//          "endTime":1637068356419   //unix时间戳(毫秒)
//        ],
//        "attachedData":{
//            "customerName":"张三",
//            "customerDept":"宇宙银行"
//        }
//      }
//
//
//    ]
//
//  }
//}




@end

NS_ASSUME_NONNULL_END
