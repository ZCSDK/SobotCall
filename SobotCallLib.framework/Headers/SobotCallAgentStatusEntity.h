//
//  SobotCallAgentStatus.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/8.
//

#import <SobotCommon/SobotCommon.h>

/*
 基本状态：
 -1：离线
 1：空闲
 0：忙碌
 2：振铃中
 3：通话中
 
 "12";//呼入振铃
 "13";//呼出振铃
 "31";//呼入通话
 "32";//呼出通话
 "34";//外呼中
 
 自定义状态：
 114：小休
 115：后处理
 116：培训
 117：会议
 118：用餐
 119：活动

// 转接
 311：转接中           //通话中A座席发起咨询转接（转接功能）
 421：振铃中           //B座席空闲被咨询转接振铃（转接功能）;
 331：转接中           //A座席向B座席转接，B接听后，A处于咨询转接中（转接功能） "331";
 341：转接中          //A座席向B座席转接，B接听后，B处于咨询转接中（转接功能） "341";

 监听
 412：振铃中          //管理座席空闲发起监听振铃（监听强插强拆） "412";
 362：通话中          //通话中被监听|管理员振铃（监听强插强拆） "362";
 322：监听中          //管理座席接通后发起监听（监听强插强拆） "322";
 332：通话中          //被监听座席，通话中被监听（监听强插强拆） "332";
 342：三方通话      //管理员强插通话成功（监听强插强拆） "342";
 352：三方通话      //被监听座席被强插（监听强插强拆） "352";

 316： 保持中

 三方通话
 314：咨询中    //发起方发起三方咨询振铃中状态（被三方咨询座席振铃，发起方的状态码） "314";
 424：振铃中   //被发起方三方咨询振铃状态（被三方咨询座席振铃，被发起方的状态码） "424";
 334：三方通话     //发起方三方咨询通话中状态（三方通话中，发起方的状态码） "334";
 344：三方通话      //被发起方三方咨询通话中状态（三方通话中，被发起方的状态码） "344";

 内部通话
 425：拨号中        //空闲->A座席发起拨号 (内部呼) "425";
 435：拨号中        //空闲->A座席振铃(内部呼) "435";
 445：振铃中        //空闲->B座席振铃(内部呼) "445";
 455：内部通话     //振铃->A座席通话"455";
 465：内部通话     //振铃->B座席通话 "465";
 
 */

typedef NS_ENUM(NSUInteger, SobotCallAgentStatusV6) {
    SobotCallAgentStatusV6_offline = 0, // -1：离线
    SobotCallAgentStatusV6_online = 1, // 1：空闲
    SobotCallAgentStatusV6_busy = 2, // v6 是忙碌
};

typedef NS_ENUM(NSUInteger, SobotCallAgentStatus) {
    SobotCallAgentStatus_unusual = -2, //  -2 话机异常的状态, 目前前端按离线处理

    SobotCallAgentStatus_offline = -1, // -1：离线
    SobotCallAgentStatus_online = 1, // 1：空闲
    SobotCallAgentStatus_busy = 0, // 0：忙碌,v6 是离线
    SobotCallAgentStatus_ringing = 2, // 2：振铃中, V6 等于2是忙碌
    SobotCallAgentStatus_calling = 3, // 3：通话中
    
    SobotCallAgentStatus_holidayV6 = 11,// V6 小休
    SobotCallAgentStatus_callInRing = 12, // 呼入振铃
    SobotCallAgentStatus_callOutRing = 13, // 呼出振铃
    SobotCallAgentStatus_callInAccept = 31, // 呼入通话
    SobotCallAgentStatus_callOutAccept = 32, // 呼出通话
    SobotCallAgentStatus_callingOut = 34, // 外呼中
    
    SobotCallAgentStatus_callingLock = 98, // 系统锁定
    
    SobotCallAgentStatus_holiday = 114, // 114：小休
    SobotCallAgentStatus_after_treatment = 115, // 115：后处理
    SobotCallAgentStatus_train = 116, // 116：培训
    SobotCallAgentStatus_meeting = 117, // 117：会议
    SobotCallAgentStatus_eating = 118, // 118：用餐
    SobotCallAgentStatus_activity = 119, // 119：活动
    
    SobotCallAgentStatus_transfer_311 = 311, // 311：转接中
    SobotCallAgentStatus_ringing_421 = 421, // 421：振铃中
    SobotCallAgentStatus_transfer_331 = 331, // 331：转接中
    SobotCallAgentStatus_transfer_341 = 341, // 341：转接中
    
    SobotCallAgentStatus_ringing_412 = 412, // 412：振铃中
    SobotCallAgentStatus_calling_362 = 362, // 362：通话中
    SobotCallAgentStatus_listening = 322, // 322：监听中
    SobotCallAgentStatus_calling_332 = 332, // 332：通话中
    SobotCallAgentStatus_third_calling_342 = 342, // 342：三方通话
    SobotCallAgentStatus_third_calling_352 = 352, // 352：三方通话
    SobotCallAgentStatus_keeping = 316, // 316： 保持中

    SobotCallAgentStatus_counseling = 314, // 314：咨询中
    SobotCallAgentStatus_ringing_424 = 424, //  424：振铃中
    SobotCallAgentStatus_third_calling_334 = 334, // 334：三方通话
    SobotCallAgentStatus_third_calling_344 = 344, // 344：三方通话
    
    SobotCallAgentStatus_dialing_425 = 425, // 425：拨号中
    SobotCallAgentStatus_dialing_435 = 435, // 435：拨号中
    SobotCallAgentStatus_ringing_445 = 445, // 445：振铃中
    SobotCallAgentStatus_intercom_455 = 455, // 455：内部通话
    SobotCallAgentStatus_intercom_465 = 465, // 465：内部通话
    
};

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallAgentStatusEntity : SobotBaseEntity

@property(nonatomic,assign) BOOL  enabled;//": 1,
@property(nonatomic,copy) NSString * extensions;//": {},
@property(nonatomic,copy) NSString * creatorId;//": "4dbe67bd3f774da0b7e3bca08696b031",
@property(nonatomic,copy) NSString * creationTime;//": 1638360177782,
@property(nonatomic,copy) NSString * updatedTime;//": 1641967693764,
@property(nonatomic,copy) NSString * companyId;//": "d837d5e4a7d44db69408c495a7088481",
@property(nonatomic,copy) NSString * statusid;//": "ce876c7db91b4137b88869c806de6f13",
@property(nonatomic,copy) NSString * name;//": "培训",
@property(nonatomic,copy) NSString * code;//": "12",

// 当code==2时，根据reasonCode>0判断显示内容
@property(nonatomic,copy) NSString * reasonCode;//": "12",
@property(nonatomic,copy) NSString * img;//": "12",
@property(nonatomic,copy) NSString * remarks;//": "企业自定义名称的状态，可以外呼，不可呼入"

//v1 的数据样式
//{
//               "dictCode":"1028",
//               "dictId":"114",
//               "dictName":"小休",
//               "dictRemark":"呼叫中心自定义状态 ",
//               "dictValue":"5"
//           },

-(NSString *) getAgentStatusStr:(BOOL) isV6;
-(NSString *) getAgentStatusImg:(BOOL) isV6;

@end

NS_ASSUME_NONNULL_END
