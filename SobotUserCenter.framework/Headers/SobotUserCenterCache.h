//
//  SobotUserCenterCache.h
//  SobotUserCenterSDK
//
//  Created by zhangxy on 2022/3/21.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCommon.h>
#import <SobotCommon/SobotBaseEntity.h>

#define UCenterBundelName @"SobotUserCenter"
// 链接点击
typedef BOOL (^SobotUserCenterLinkClickBlock)(id _Nullable object,NSString *_Nullable linkUrl);;

// 页面事件监听
typedef void (^SobotUserCenterPageLoadBlock)(id _Nullable object,int type);

NS_ASSUME_NONNULL_BEGIN

@interface SobotUserCenterCache : NSObject

+(SobotUserCenterCache *) shareSobotUserCenterCache;

// 存储自定义颜色等信息，此处没有指定类型，不会导致反向引用问题
@property(nonatomic,strong) id sobotKitConfig;


// 存储呼叫信息
@property(nonatomic,strong) SobotCacheEntity *SobotUserCenterConfig;


@property(nonatomic,strong) NSMutableDictionary *orderDictFrom;

-(NSString *)localOrderString:(NSString *) key;
-(NSString *)localCommonString:(NSString *) key;
+(UIImage *)getOrderSysImage:(NSString *)imageName;

-(void)outLoginStatus:(void(^)(int code,NSDictionary *result)) resultBlcok;
-(void)outLoginStatusWithBack:(BOOL) goBack;

// 链接点击
@property(nonatomic,copy) SobotUserCenterLinkClickBlock linkClickBlock;

// 页面事件监听
@property(nonatomic,copy) SobotUserCenterPageLoadBlock pageLoadBlock;


/// 2.0.3版本弃用
/// - Parameters:
///   - loginAcount: 坐席账号
///   - loginPwd: 密码
///   - token: 坐席token（公司token，可以使用loginWithCommpanyToken替换）
///   - resultBlock:
-(void)doLogin:(NSString * _Nullable) loginAcount pwd:(NSString *  _Nullable) loginPwd token:(NSString *  _Nullable) token result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;


/// 2.0.3新增，替换带token方法
/// - Parameters:
///   - loginAcount: 账号
///   - loginPwd: 密码
///   - resultBlock:结果
-(void)doLogin:(NSString *  _Nullable)loginAcount pwd:(NSString *  _Nullable)loginPwd result:(void (^)(NSInteger, NSDictionary * _Nullable, NSString * _Nullable))resultBlock;


/// 使用appid和appkey登录
/// - Parameters:
///   - appkey: 公司appkey
///   - appid: 公司appid
///   - email: 要登录的坐席账号
///   - resultBlock: 结果
-(void)loginWithAppkey:(NSString * _Nonnull) appkey appid:(NSString *  _Nonnull) appid email:(NSString *  _Nonnull) email result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;


/// 使用公司token登录
/// - Parameters:
///   - token: 公司token
///   - email: 要登录的坐席账号
///   - resultBlock: 结果
-(void)loginWithCommpanyToken:(NSString * _Nonnull) token email:(NSString *  _Nonnull) email result:(void(^)(NSInteger code,NSDictionary * _Nullable dict,NSString * _Nullable msg)) resultBlock;


// 查询登录信息
-(SobotLoginEntity *) getLoginUser;
-(NSString *) getCurLanguage;
-(BOOL) isLogin;

+(BOOL)validateAllChinese:(NSString *)content;


@end

NS_ASSUME_NONNULL_END
