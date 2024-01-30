//
//  SobotCallTaskEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/7.
//

#import <Foundation/Foundation.h>
#import <SobotCallLib/SobotCallLibDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallTaskEntity : SobotBaseEntity
// 名单Id
@property (nonatomic,strong) NSString *recordId;//": 0,

// 呼叫详情字段，活动Id
@property (nonatomic,strong) NSString *campaignId;//": 0,
@property (nonatomic,strong) NSString *campaignName;//": "我是测试任务",
//NotStarted(1, "NotStarted", "未开始"),
//    Running(2, "Running", "进行中"),
//    Pausing(3, "Pausing", "暂停中"),
//    Closed(4, "Closed", "已关闭"),
//    Finished(5, "Finished", "已完成"),
//    Archived(6, "Archived", "已归档"),
//    Deleted(7, "Deleted", "已删除"),
//0 未开始  1 已过期  2 执行中
@property(nonatomic,assign) int state;//": 1,
@property(nonatomic,assign) int expired;//1
@property (nonatomic,strong) NSString *stateName;//": 1,
@property (nonatomic,strong) NSString *wrapUpTemplateName;//": "总结模板222",
@property (nonatomic,strong) NSString *scheduleStartTime;//": 1660552373160,
@property (nonatomic,strong) NSString *scheduleEndTime;//": 1661671979160,
@property(nonatomic,assign) int contactRecordCount;//": 2,
@property(nonatomic,assign) int callAnswerCounts;//": 0,
@property(nonatomic,assign) int callDialCount;//": 0,
@property (nonatomic,strong) NSString *callAnswerRate;//": "0.00%",
@property (nonatomic,strong) NSString *assignAgentName;//": "gygy-5真名",
@property (nonatomic,strong) NSString *assignTime;//": 1660548955828,
@property (nonatomic,strong) NSString *contactAnswerRate;//": "0.00%",
@property (nonatomic,strong) NSString *contactExecuteRate;//": "0.00%",
@property(nonatomic,assign) int contactRecordExecuteCount;//": 0


@property (nonatomic,strong) NSString *callDuration;//": 0,
@property (nonatomic,strong) NSString *contactTimes;//": 0,
@property (nonatomic,strong) NSString *createDateTime;//": 0,
@property (nonatomic,strong) NSString *dialStatus;//": 0,
@property (nonatomic,strong) NSString *dialingTimes;//": 0,

//号码隐藏 0.不隐藏 1.中间隐藏 2.末尾隐藏
@property (nonatomic,strong) NSString *hiddenFlag;//": 0,
@property (nonatomic,strong) NSString *isAssigned;//": 0,

//0 未开始  1 已过期  2 执行中
//@property (nonatomic,strong) NSString *status;//": 2,
@property (nonatomic,strong) NSString *taskCreateTime;//": 1552372665709,
@property (nonatomic,strong) NSString *taskDesc;//": "热爱工作",
//@property (nonatomic,strong) NSString *taskEndTime;//": 253402185600000,
//@property (nonatomic,strong) NSString *taskId;//": "bfa4feef38f64748a4d10556d23b28c3",
//@property (nonatomic,strong) NSString *taskName;//": "我想工作",
@property (nonatomic,strong) NSString *taskPhoneTotal;//": 1,
//@property (nonatomic,strong) NSString *taskStartTime;//": 0,
//@property (nonatomic,strong) NSString *taskStatus;//": 0,
@property (nonatomic,strong) NSString *taskTimeType;//": 1,
@property (nonatomic,strong) NSString *updateDateTime;//
@property (nonatomic,assign) int timed;

@property (nonatomic,strong) NSString *callWay;
@property (nonatomic,strong) NSString *callWay_serverScheme;
@end

NS_ASSUME_NONNULL_END
