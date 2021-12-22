//
//  SobotCallInfo.h
//  SobotCall
//
//  Created by lizh on 2021/11/23.
//  呼叫配置类

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallInfo : NSObject

@property(nonatomic,copy) NSString *appid; // 应用id

@property(nonatomic,copy) NSString *client_secret;// 秘钥，即创建app时返回的token值

@property(nonatomic,copy) NSString *companyid;//企业ID

@property(nonatomic,copy) NSString *access_token;// token 登录接口使用 （备注 根据登录api 是否传入，如果传入就使用传入的token覆盖，没有就通过client_secret 、companyId调用获取token接口去获取）

@property(nonatomic,copy) NSString *agent_state;// 坐席状态  （可选）

@property(nonatomic,copy) NSString *display_number;// 坐席手机登录时，回呼坐席手机的外显号码，以及坐席转接或咨询第三方时，呼叫第三方号码的外显号码

@property(nonatomic,copy) NSString *agent_phone_num;//特殊时使用，此字段代表voip账号上班，但呼入时是转到坐席的指定的手机号，只有呼出时才使用voip账号呼出

@property(nonatomic,copy) NSString *groupid;// 所在技能组

@property(nonatomic,copy) NSString *agentid; // 坐席ID

@property(nonatomic,copy) NSString *callWay;//呼叫方式  SIP=2（SDK中默认2）

@property(nonatomic,assign) BOOL is_iecord_stereo; // 默认 NO

@property(nonatomic,copy) NSString *sip_address; //域名 注册使用sip话机使用

@property(nonatomic,copy) NSString *sip_number ;//sip账号

@property(nonatomic,copy) NSString *sip_pwd;//sip密码


#pragma mark -- 配置UI相关的参数
/**
 *  是否使用Images
 *  默认为NO 未开启
 */
@property (nonatomic,assign) BOOL      isUseImagesxcassets;

@end

NS_ASSUME_NONNULL_END
