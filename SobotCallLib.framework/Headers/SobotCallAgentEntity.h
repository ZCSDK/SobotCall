//
//  SobotCallAgentEntity.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/6.
//

#import <SobotCommon/SobotCommon.h>
#import <SobotCallLib/SobotCallAgentStatusEntity.h>
#import <SobotCallLib/SobotCallSipInfo.h>
#import <SobotCallLib/SobotCallAgentGroup.h>

NS_ASSUME_NONNULL_BEGIN


@class SobotCallSipInfo;
@class SobotCallAgentStatusEntity;
/**
 呼叫座席状态信息
 */
@interface SobotCallAgentEntity : SobotBaseEntity


@property (nonatomic,strong) NSString *agentId;//": "2856580f156a4f9ea73dd4e9ac86896e",
@property (nonatomic,assign) int agentStatus;//": "1",agentStatus
@property (nonatomic,strong) NSString *breakIn;//": "",
@property (nonatomic,strong) NSString *breakIned;//": "",
@property (nonatomic,strong) NSString *callInPop;//": "open",
@property (nonatomic,strong) NSString *callInPopTime;//": "after",
@property (nonatomic,strong) NSString *callOutPop;//": "close",
@property (nonatomic,strong) NSString *callOutPopTime;//": "after",
//1网页电话，2sip话机，3手机
@property (nonatomic,assign) int callWay;//": "3",
@property (nonatomic,strong) NSString *callout;//": "0",
@property (nonatomic,strong) NSString *handlerType;//": 0,
@property (nonatomic,strong) NSString *hold;//": "false",
@property (nonatomic,strong) NSString *listen;//": "",
@property (nonatomic,strong) NSString *listened;//": "",
@property (nonatomic,strong) NSString *mbTrsfStatus;//": "",
@property (nonatomic,strong) NSString *paasFlag;//"test_sobot-paas;//",
@property (nonatomic,strong) NSString *time;//": 1551765395410,
@property (nonatomic,strong) NSString *transfer;//": "0",
@property (nonatomic,strong) NSString *trsfFlag;//": "",
@property (nonatomic,strong) NSString *trsferStatus;//": "",
@property (nonatomic,strong) NSString *userPhone;//": "",
@property (nonatomic,strong) NSString *userhangup;//": "0"


@property (nonatomic,strong) NSString *agentNumber;//": "0"  // 获取座席状态接口中此字段是 代表手机号

//0呼入 1呼出
@property (nonatomic,strong) NSString *direction;


@property (nonatomic,strong) NSString *serviceNo;
// 通agentId
@property (nonatomic,strong) NSString *serviceId;


//@property (nonatomic,assign) BOOL enabled;
//@property (nonatomic,strong) NSString *creatorId;//": "400b80f9a83f4d789fbd5a3e7ec9ba05",
//@property (nonatomic,strong) NSString *creationTime;//": 1639726462659,
//@property (nonatomic,strong) NSString *updatedTime;//": 1639726462660,
//@property (nonatomic,strong) NSString *companyId;//": "ccfffd4fbb254c909872424a7664c92f",
//@property (nonatomic,strong) NSString *agentUuid;//": "400b80f9a83f4d789fbd5a3e7ec9ba05",
//@property (nonatomic,strong) NSString *phoneNo;//": "15313500917",
//@property (nonatomic,strong) NSString *agentEmail;//": "gygy-5@sobot.com",
//@property (nonatomic,strong) NSString *agentIPAddress;//": "219.142.251.154",
//@property (nonatomic,strong) NSString *permissionTime;//": "2021-12-17 15:34:22",
//@property (nonatomic,strong) NSString *agentMacAddress;//": "Mozilla/5.0 (Windows


@property (nonatomic,strong) NSString *agentUuid;
@property (nonatomic,strong) NSString *agentName;//": "jc_v6_cs1",
@property (nonatomic,strong) NSString *phone;//": "18889671923",
@property (nonatomic,strong) NSString *currentPhoneType;//": "sip",
@property (nonatomic,strong,getter=getPhoneTypeString) NSString *currentPhoneTypeStr;//": "sip",
@property (nonatomic,strong) NSString *ext;//": "5001",

// 当前分机号登录信息
@property (nonatomic,strong) SobotCallSipInfo *extSipInfo;

@property (nonatomic,strong) NSMutableArray *receptionQueues;
@property (nonatomic,assign) BOOL unbindExtOnLogout;

//{"phoneType": "sip",
//"default": true}
// webrtc/sip/pstn
@property (nonatomic,strong) NSMutableArray *phoneTypes;


@property (nonatomic,strong) NSMutableArray *statusArray;
@property (nonatomic,strong) NSMutableArray *sipAccoutArray;



@property (nonatomic,strong) NSString *name;

-(NSString *) getAgentStatusStr:(BOOL ) isV6;

-(NSString *) getAgentStatusStrWithCode:(int)code v6:(BOOL) isV6;

-(SobotCallAgentEntity*)copyCallAgentEntity:(SobotCallAgentEntity*)model;
@end

NS_ASSUME_NONNULL_END
