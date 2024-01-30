//
//  SobotCallCacheEntity.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/8/3.
//

#import <SobotCommon/SobotCacheEntity.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallCacheEntity : SobotCacheEntity

// 获取公共接口域名, 默认：https://api.sobot.com 
@property(nonatomic,strong) NSString *openApiHost;

// 呼叫接口域名，默认：https://openapi.soboten.com
@property(nonatomic,strong) NSString *callApiHost;


// 监听呼叫消息uri，默认：wss://openapi.sobot.com/v6.0.0/webmsg/cc-webmsg
@property(nonatomic,strong) NSString *stompSocketUri;


// 监听janus的sip消息uri,默认：wss://rtc.sobot.com.cn/janus
@property(nonatomic,strong) NSString *janusSocketUri;

// janus 代理服务：默认  sip:192.168.30.68:5060  （从App3.2.4的版本开始，该参数不在使用，服务端不再使用）
@property(nonatomic,strong) NSString *sipProxy;

@property(nonatomic,copy)NSString *clientType;// 如果是SDK SDK接入传 TenIosSdk （默认取SDK值），如果是智齿APP 传SysAppIos


@property(nonatomic,assign)BOOL useOpenApi;



@property(nonatomic,assign)BOOL closeAutoClearToken;


/// 动态赋值，无需配置
//开放接口 签入本地记录
@property (nonatomic,copy) NSString *openBindExt;
//开放接口 接听方式
@property (nonatomic,copy) NSString *openBindType;
//绑定的电话号码
@property (nonatomic,copy) NSString *openBingMobile;

@end

NS_ASSUME_NONNULL_END
