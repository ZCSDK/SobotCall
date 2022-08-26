//
//  SobotCallCache.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <SobotCallSDK/SobotCallDefines.h>
#import <SobotCallSDK/SobotCallCacheEntity.h>
#import <SobotCallSDK/SobotCallLoginInfo.h>

#define CallBundelName @"SobotCall"

// 链接点击
typedef BOOL (^SobotOrderLinkClickBlock)(id _Nullable object,NSString * _Nullable linkUrl);;

// 页面事件监听
typedef void (^SobotOrderPageLoadBlock)(id _Nullable object,int type);

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallCache : NSObject

+(SobotCallCache *) shareSobotCallCache;


@property(nonatomic,strong) NSString *installToken;

// 存储呼叫信息
@property(nonatomic,strong) SobotCallCacheEntity *sobotCallConfig;

-(NSString *)localCallString:(NSString *) key;
+(UIImage *)getCallSysImage:(NSString *)imageName;


// 存储自定义颜色等信息，此处没有指定类型，不会导致反向引用问题
@property(nonatomic,strong) id sobotKitConfig;

-(void)outLoginStatus:(void(^)(int code,NSDictionary *result)) resultBlcok;
-(void)outLoginStatusWithBack:(BOOL) goBack;

// 是否初始化
-(BOOL) isInstall;
-(NSString *)getExpiresToken;

// 链接点击
@property(nonatomic,copy) SobotOrderLinkClickBlock linkClickBlock;

// 页面事件监听
@property(nonatomic,copy) SobotOrderPageLoadBlock pageLoadBlock;


// 设置登录信息
-(void)saveLoginUser:(SobotCallLoginInfo *) user;

-(void)doLogin:(NSString * _Nullable) loginAcount pwd:(NSString *  _Nullable) loginPwd token:(NSString *  _Nullable) token result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;

-(void)getAccessToken:(NSString *) token result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;

// 查询登录信息
-(SobotCallLoginInfo *) getLoginUser;
-(BOOL) isLogin;

@end

NS_ASSUME_NONNULL_END
