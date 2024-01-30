//
//  SobotCallCache.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCommon.h>
#import <SobotCallLib/SobotCallCacheEntity.h>
#import <SobotCallLib/SobotCallAgentEntity.h>
#import <SobotCallLib/SobotCallSummaryConfigEntity.h>

typedef NS_ENUM(NSInteger,SobotCallDragViewStatus) {
    SobotCallDragViewStatus_Nol     = 1, // 拨号按钮
    SobotCallDragViewStatus_Call    = 2, // 显示顶部 通话中 呼叫中 整理中
    SobotCallDragViewStatus_hiddenNol  = 3, // 影藏拨号按钮
};

#define CallBundelName @"SobotCall"
@class SobotCallAgentEntity;
// 链接点击
typedef BOOL (^SobotOrderLinkClickBlock)(id _Nullable object,NSString * _Nullable linkUrl);;

// 页面事件监听
typedef void (^SobotOrderPageLoadBlock)(id _Nullable object,int type);

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallCache : NSObject

+(SobotCallCache *) shareSobotCallCache;
//@property(nonatomic,strong)NSMutableArray *statusArray;

// 存储呼叫信息
@property(nonatomic,strong) SobotCallCacheEntity *sobotCallConfig;

// 座席呼叫类型信息
@property (nonatomic,strong) SobotCallAgentEntity *agentInfo;

@property (nonatomic,assign)BOOL callPageActive;// 呼叫是否前台

@property(nonatomic,assign)int summaryFlag;
// 服务总结配置
@property(nonatomic,strong) SobotCallSummaryConfigEntity *summarConfig;


-(NSString *)localCallString:(NSString *) key;
+(UIImage *)getCallSysImage:(NSString *)imageName;


// 存储自定义颜色等信息，此处没有指定类型，不会导致反向引用问题
@property(nonatomic,strong) id sobotKitConfig;

@property(nonatomic,assign) int callWay;// V6记录话机签入方式 2. sip 3 手机

@property(nonatomic,copy) NSString *itemName;// 座席状态显示的名称
// 是否初始化
-(BOOL) isInstall;

// 链接点击
@property(nonatomic,copy) SobotOrderLinkClickBlock linkClickBlock;

// 页面事件监听
@property(nonatomic,copy) SobotOrderPageLoadBlock pageLoadBlock;


-(void)doLogin:(NSString * _Nullable) loginAcount pwd:(NSString *  _Nullable) loginPwd token:(NSString *  _Nullable) token result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;


-(void)outLoginStatus:(void(^)(int code,NSDictionary *result)) resultBlcok;
-(void)outLoginStatusWithBack:(BOOL) goBack;

// 查询登录信息
-(SobotLoginEntity *) getLoginUser;
-(BOOL) isLogin;


+(BOOL) checkCallModule:(NSString *) key;
+(BOOL) isSupportV6;
+(BOOL)validateContainsChinese:(NSString *)content;


@end

NS_ASSUME_NONNULL_END
