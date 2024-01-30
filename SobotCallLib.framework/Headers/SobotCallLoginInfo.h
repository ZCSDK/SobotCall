//
//  SobotCallLoginInfo.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <SobotCommon/SobotCommon.h>
#import <SobotCallLib/SobotCallAgentEntity.h>



extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_CHAT; // 对话
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_ORDER; // 工单
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_SETTING;// 设置
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_MONITORINGSTATISTICS;// 监控统计

extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_CALL;  // 呼叫模块
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_USERS; // 用户模块
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_STATISTICS_ONLINE;// 统计在线
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_STATISTICS_CALL;// 统计呼叫
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_MONITORING_CALL;// 监控呼叫
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_MONITORING_ONLINE;// 监控在线
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_STATISTICS_ORDER;// 统计工单
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_STATISTICS_ROBOT;// 统计机器人
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_SETTING_STATUS;// 设置个人状态
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_SETTING_PLAIN;// 设置会话顺序
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_ORDER_EDIT;// 工单编辑的权限
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_ORDER_DELETE;// 工单删除的权限
extern NSString * _Nullable const SOBOT_CALL_MODULE_KEY_ORDER_REPLYDELETE;// 工单详情页面删除回复的权限

typedef NSString *SobotCallModuleType NS_STRING_ENUM;

static SobotCallModuleType _Nullable const SobotCallModuleType1222  = @"1222";// 可删除工单
static SobotCallModuleType _Nullable const SobotCallModuleType1223  = @"1223";// 可删除工单回复
static SobotCallModuleType _Nullable const SobotCallModuleType1224  = @"1224";// 可关闭工单
static SobotCallModuleType _Nullable const SobotCallModuleType1225  = @"1225";// 可激活工单
static SobotCallModuleType _Nullable const SobotCallModuleTypeOrderSearchAll  = @"1227";// 全局搜索
static SobotCallModuleType _Nullable const SobotCallModuleTypeOrder1230  = @"1230";  // 工单历史记录
static SobotCallModuleType _Nullable const SobotCallModuleType1611  = @"1611";  // 客户中心
static SobotCallModuleType _Nullable const SobotCallModuleTypeOrder1231  = @"1231";  // 工单状态，可见与不可见


NS_ASSUME_NONNULL_BEGIN

@interface SobotCallLoginInfo : SobotBaseEntity

// 登录后赋值
@property(nonatomic,copy) NSString * password;
@property(nonatomic,copy) NSString * token;
@property(nonatomic,copy) NSString * accessToken;
@property(nonatomic,copy) NSString * language;

// 以下为权限接口返回数据
@property(nonatomic,assign) int accountStatus;
@property(nonatomic,assign) int  auditRobotdocFlag;
@property(nonatomic,assign) int  auditTicketdocFlag;
@property(nonatomic,assign) BOOL  callDeskFlag;
@property(nonatomic,assign) BOOL  callLogFlag;
@property(nonatomic,assign) int callV6Flag;
@property(nonatomic,assign) int callV1Flag;
@property(nonatomic,copy) NSString * centerNumber;
@property(nonatomic,copy) NSString * companyCreateTime;
@property(nonatomic,copy) NSString * companyId;
@property(nonatomic,copy) NSString * companyName;
@property(nonatomic,assign) int completeFlag;
//"cusRoleId": "3333",
@property(nonatomic,copy) NSString * cusRoleId;
@property(nonatomic,copy) NSString * cusRoleName;
@property(nonatomic,assign) int  departFlag;
@property(nonatomic,assign) int  docStatus;
@property(nonatomic,copy) NSString * faceImg;
@property(nonatomic,assign) float fileSize;
//"functionStr": [{
//    "checked": true,
//    "id": "1101",
//    "name": "我的工单",
//    "open": true,
//    "pId": "11"
//}]
@property(nonatomic,strong) NSArray * functionStr;
@property(nonatomic,assign) int imFlag;
@property(nonatomic,assign) int inDepartFlag;
@property(nonatomic,copy) NSString *inviteCode;//": "公司开发测试",
@property(nonatomic,copy) NSString *isOnGroup;//": "1",
@property(nonatomic,assign) int kbSampleFlag;//": 0,
@property(nonatomic,copy) NSString *lastLoginTime;//": 1650260720,
@property(nonatomic,assign) int managerFlag;//": 0,
@property(nonatomic,assign) int maxAccept;//": 1,
@property(nonatomic,assign) int newBossSwitch;//": 1,  >=1 为新版  ，其余为老版
@property(nonatomic,assign) BOOL newFlag;//": true,

// 原始key为newRoleId
@property(nonatomic,copy) NSString *xnewRoleId; //"1427889112537092098"

@property(nonatomic,assign) int newServiceStatus;//": 1,
@property(nonatomic,copy) NSString *orgRoleId;//": "",
@property(nonatomic,copy) NSString *phoneNo;//": "18611622736",
@property(nonatomic,strong) NSArray *products;//": ["0"],
@property(nonatomic,copy) NSString *registerTime;//": 1609430400,
@property(nonatomic,assign) int replyAuthFlag;//": 0,
@property(nonatomic,assign) int robotDocAuthFlag;//": 0,
@property(nonatomic,copy) NSString *roleId;//": "05b3cbac7f4a4277b2e50ce2d090fe37",
@property(nonatomic,assign) int scrmFlag;//": 1,
@property(nonatomic,copy) NSString *secondDomain;//": "corp81202.sobot.com",
@property(nonatomic,copy) NSString *serviceEmail;//": "zhangxy@sobot.com",
@property(nonatomic,copy) NSString *serviceId;//": "b48b1411b2f9480f88d1096f5ac9e836",
@property(nonatomic,copy) NSString *serviceName;//": "张新耀姓名",
@property(nonatomic,copy) NSString *serviceNick;//": "张新耀昵称",
@property(nonatomic,copy) NSString *serviceQq;//": "",
@property(nonatomic,assign) int serviceStatus;//": 1,
@property(nonatomic,copy) NSString *supportEmail;//": "corp81202@support.sobot.com",
@property(nonatomic,copy) NSString *systemNum;//": "0db0dc1772004f3bac1f3d5d8cc8a398",
@property(nonatomic,assign) int tdCount;//": 1,
@property(nonatomic,copy) NSString *ti;//": "kxtMaJ5apTQ5TkRqikKeIkmIT6Xu2bETl_DmmJPstow",
@property(nonatomic,assign) int ticketAuthFlag;//": 0,
@property(nonatomic,assign) int ticketDocAuthFlag;//": 0,
@property(nonatomic,copy) NSString *unionCode;//": "011",
@property(nonatomic,assign) int userAuthFlag;//": 0,
@property(nonatomic,assign) int weworkMgrFlag;//": 1,
@property(nonatomic,assign) int workBenchFlag;//": 1
// 用户aid
@property (nonatomic,strong) NSString *aid;

@property (nonatomic,copy) NSString *callPhoneNo; // 手机号，当选择登录方式是手机的时候 显示这个号码

@property (nonatomic,strong)NSArray *globalPermissions;// 权限 是否显示密文，V6使用

@property (nonatomic,assign) BOOL isHiddenNumber;// 是否显示 密文  9999

@property (nonatomic,copy) NSString *openBindExt;//开放接口 签入本地记录

@property (nonatomic,copy) NSString *openBindType;//开放接口 接听方式

@property (nonatomic,copy) NSString *openBingMobile;//绑定的电话号码

// key : SOBOT_CALL_MODULE_KEY_
-(BOOL)checkModule:(NSString *) key;

-(BOOL)checkModuleByModuleType:(SobotCallModuleType )key;


// 座席呼叫类型信息
@property (nonatomic,strong) SobotCallAgentEntity *agentInfo;

@end
NS_ASSUME_NONNULL_END
