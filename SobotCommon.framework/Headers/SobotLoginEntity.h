//
//  SobotLoginEntity.h
//  SobotUI
//
//  Created by zhangxy on 2022/11/22.
//

#import <SobotCommon/SobotBaseEntity.h>

extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CHAT; // 对话
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER; // 工单
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_SETTING;// 设置
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_MONITORINGSTATISTICS;// 监控统计

extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL;  // 呼叫模块
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_USERS; // 用户模块
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_STATISTICS_ONLINE;// 统计在线
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_STATISTICS_CALL;// 统计呼叫
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_MONITORING_CALL;// 监控呼叫
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_MONITORING_ONLINE;// 监控在线
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_STATISTICS_ORDER;// 统计工单
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_STATISTICS_ROBOT;// 统计机器人
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_SETTING_STATUS;// 设置个人状态
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_SETTING_PLAIN;// 设置会话顺序
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_EDIT;// 工单编辑的权限
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_DELETE;// 工单删除的权限
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_REPLYDELETE;// 工单详情页面删除回复的权限

extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_CLOSE;// 关闭工单
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_ACTIVATION;// 激活工单
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_SEARCH;// 全局搜索工单
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_OPERATE;// 工单操作记录
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_ORDER_STATUS;// 工单操作状态

/**呼叫模块权限定义**/
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thjl;      //通话记录
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq;      // 通话详情
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_thxx; //通话信息
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_fwzj; //服务总结
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_khxx; //客户信息
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_ywjl; //业务记录
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_lybf; //录音播放
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_lyxz; //录音下载
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_bcfwzj;   //保存服务总结
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_xzkh; //新增客户
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_glkh; //关联客户
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_bjkh;    //编辑客户 ???与保存服务总结相同，需要调整
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_thxq_dhhb;  //电话回拨
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht;        //电话条
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_xgbddhhm;   //修改绑定电话号码
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_xgfjzh; //修改分机账号
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_lxhzdjb;    //离线后自动解绑
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_bchbcqx;//保持和保持取消
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_jyhjyqx;//静音和静音取消
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_fsmyd;  //发送满意度
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_yczlsc; //延长整理时长
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_jszlbzm; //结束整理并置忙
//extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_dht_czlx;   //重置离线
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_whrw;//呼叫任务
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_whrw_rwxxbj;//呼叫任务信息编辑
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_CALL_cccv6_whrw_rwzjbj;//呼叫任务总结编辑


// ************************** 电销项目的权限 start v6**********************************
//电话条
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_TM_sccv6_dht;
//修改绑定电话号
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_xgbddhhm;
//修改分机账号    scc-dht-xgfjzh
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_xgfjzh;
//离线后自动解绑    scc-dht-lxhzdjb
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_lxhzdjb;
//保持和保持取消    scc-dht-bchbcqx
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_bchbcqx;
//静音和静音取消    scc-dht-jyhjyqx
extern NSString * _Nullable const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_jyhjyqx;
//延长整理时长    scc-dht-yczlsc
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_yczlsc;
//结束整理并置忙    scc-dht-jszlbzm
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_dht_jszlbzm;

//电销    scc
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM;
//通话记录    scc-thjl
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thjl;
//通话详情    scc-thxq
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq ;
//通话信息    scc-thxq-thxx
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_thxx;
//跟进记录    scc-thxq-gjjl
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_gjjl;
//客户信息    scc-thxq-khxx
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_khxx;
//录音播放    scc-thxq-lybf
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_lybf;
//录音下载    scc-thxq-lyxz
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_lyxz;
//新增客户    scc-thxq-xzkh
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_xzkh;
//关联客户    scc-thxq-glkh
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_glkh;
//编辑客户    scc-thxq-bjkh
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_bjkh;
//电话回拨    scc-thxq-dhhb
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_thxq_dhhb;
//电销任务    scc-dxrw
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_dxrw;
//任务信息-编辑    scc-dxrw-rwxxbj
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_dxrw_rwxxbj;
//任务总结-编辑    scc-dxrw-rwzjbj
extern NSString * _Nullable  const SOBOT_LOGIN_MODULE_KEY_TM_scc_dxrw_rwzjbj;

// ************************** 电销项目的权限 end**********************************



typedef NSString *SobotLoginModuleType NS_STRING_ENUM;

static SobotLoginModuleType _Nullable const SobotLoginModuleType1222  = @"1222";// 可删除工单
static SobotLoginModuleType _Nullable const SobotLoginModuleType1223  = @"1223";// 可删除工单回复
static SobotLoginModuleType _Nullable const SobotLoginModuleType1224  = @"1224";// 可关闭工单
static SobotLoginModuleType _Nullable const SobotLoginModuleType1225  = @"1225";// 可激活工单
static SobotLoginModuleType _Nullable const SobotLoginModuleTypeOrderSearchAll  = @"1227";// 全局搜索
static SobotLoginModuleType _Nullable const SobotLoginModuleTypeOrder1230  = @"1230";  // 工单历史记录
static SobotLoginModuleType _Nullable const SobotLoginModuleType1611  = @"1611";  // 客户中心
static SobotLoginModuleType _Nullable const SobotLoginModuleTypeOrder1231  = @"1231";  // 工单状态，可见与不可见

NS_ASSUME_NONNULL_BEGIN

@interface SobotLoginEntity : SobotBaseEntity

// code
@property (nonatomic,assign) int code;


@property(nonatomic,copy) NSString * language;

// 是否开通呼叫线路
@property (nonatomic,strong) NSString * centerNumber;

@property (nonatomic,assign) int        callV6Flag;
@property (nonatomic,assign) int        callV1Flag;

// =1 使用新版服务总结，开通融合工作台
@property (nonatomic,assign) int fuseWork;


// 头像
@property (nonatomic,strong) NSString * face;

// 最大接待数量
@property (nonatomic,assign) int        maxServiceCount;
// 3.2.5修改，与maxServiceCount分开
@property (nonatomic,assign) int        maxcount;

// 用户状态，2忙碌、1在线,-1在线(有在线会话数据需要同步)  2.6.0新增 1-在线，2-忙碌 statusCode:3-小休，4-培训，5-会议，6-用餐，7-活动
@property (nonatomic,assign) int        status;


// 客服昵称
@property (nonatomic,strong) NSString * nickName;


@property (nonatomic,strong) NSString * serviceId;
@property (nonatomic,strong) NSString * serviceNo;


// APP 把token和tempId交换了值，本次修改回来
@property (nonatomic,strong) NSString * token;

// 工单tempId
@property (nonatomic,strong) NSString * tempId;

// 客服名称
@property (nonatomic,strong) NSString * staffName;

@property (nonatomic,strong) NSString * pid;
@property (nonatomic,strong) NSString * companyId;

// 用户aid
@property (nonatomic,strong) NSString * aid;

@property (nonatomic,strong) NSString * pu;
@property (nonatomic,strong) NSString * puid;

/**
 *  技能组ID
 */
@property (nonatomic,strong) NSArray * groupId;

// 技能组昵称
@property (nonatomic,strong) NSArray * groupName;


// 以下字符本地使用
@property (nonatomic,strong) NSString * tel;
@property (nonatomic,strong) NSString * password;


// 以下字段，在线管理员使用
@property (nonatomic,strong) NSString * transferId;
@property (nonatomic,strong) NSString * uname;
@property (nonatomic,assign) int        currentServiceCount;


// 角色
@property (nonatomic,strong) NSString * cusRoleName;
// 是否是超级管理员和管理员账号
@property (nonatomic,strong) NSString * cusRoleId;


// 是否为工单账号
@property (nonatomic,assign) int  imFlag;


// 权限
//1222        可删除工单
//1223        可删除工单回复
//1224        可关闭工单
//1225        可激活工单
//1030        工单历史记录显示
@property (nonatomic,strong) NSDictionary * ticketFunction;



@property (nonatomic,strong) NSString *wslink_default;
@property (nonatomic,strong) NSArray  *wslink_bak;
@property (nonatomic,strong) NSString *timezone; // "+08:00"
@property (nonatomic,strong) NSString *timezoneId;// 时区 "Asia/Shanghai"

// 是否有拉黑的权限  0无 1有
@property (nonatomic,assign) int blackFunction;

// 星标置顶 0不置顶 1置顶
@property (nonatomic,assign) int topFlag ;

// 会话排序 0 按接入顺序 1 按新消息时间
@property (nonatomic,assign) int  sortFlag;

// 标记是否显示会话顺序
@property (nonatomic,assign) BOOL  sortTag;


// 0默认值忙碌 3.小休 4.培训 5.会议 6.用餐 7.活动  (当前客服是在忙碌的状态下 子集的状态码)
@property (nonatomic,assign) int  statusCode;

// 当前客服账号是否有转接权限  0 没有  1 有
@property (nonatomic,assign) int  transferFunction ;

//转接审核开关 0关闭  1开启
@property(nonatomic,assign) int transferAuditFlag;

// 登录用户所属公司名称
@property (nonatomic,copy) NSString *companyName;

// accountStatus 系统版本（旗舰版）4
@property (nonatomic,copy) NSString *accountStatus;


// 登录后赋值
@property(nonatomic,copy) NSString * accessToken;

// 以下为权限接口返回数据
@property(nonatomic,assign) int  auditRobotdocFlag;
@property(nonatomic,assign) int  auditTicketdocFlag;
@property(nonatomic,assign) BOOL  callDeskFlag;
@property(nonatomic,assign) BOOL  callLogFlag;

@property(nonatomic,assign) int completeFlag;
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

@property (nonatomic,copy) NSString *callPhoneNo; // 手机号，当选择登录方式是手机的时候 显示这个号码

@property (nonatomic,strong)NSArray *globalPermissions;// 权限 是否显示密文，V6使用

@property (nonatomic,assign) BOOL isHiddenNumber;// 是否显示 密文  9999


@property (nonatomic,assign) int region;
@property(nonatomic,copy) NSString *kbVersion;//v1,v6

@property (nonatomic,strong) NSDictionary * authMenu;

// key : SOBOT_LOGIN_MODULE_KEY_
-(BOOL)checkModule:(NSString *) key;
-(BOOL)checkModuleByModuleType:(SobotLoginModuleType )key;

// 仅验证authMenu权限
-(BOOL)checkModuleV6:(NSString *)key;


// 登录接口，调用此方法
-(id)initWithLoginDict:(NSDictionary *)dict;

// 查询坐席信息，使用此接口
-(id)initWithMyDict:(NSDictionary *)dict;

@end


NS_ASSUME_NONNULL_END
