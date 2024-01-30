//
//  SobotCallSipInfo.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/7.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallSipInfo : SobotBaseEntity

@property(nonatomic,copy) NSString * companyId;//": "d837d5e4a7d44db69408c495a7088481",
@property(nonatomic,copy) NSString * ext;//": "2226", 分机号

// 语言编码格式,Opus,G.711 alaw,G.711 ulaw
@property(nonatomic,copy) NSString * langCodeTxt;
@property(nonatomic,copy) NSString * password;//": "abd707635eb6e4dc555fc827cd5336ac",分机密码
@property(nonatomic,assign) int  bindStatus;//": 0,分机绑定状态 0-未绑定，1-表示已绑定
@property(nonatomic,copy) NSString * domain;//": "d837d5e4a7d44db69408c495a7088481.sobot.com.cn" 域名
@property(nonatomic,copy) NSString *serverScheme; //  只有2 才能绑定话机
@end

NS_ASSUME_NONNULL_END
