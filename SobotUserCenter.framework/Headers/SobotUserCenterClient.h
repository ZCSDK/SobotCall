//
//  SobotUserCenterClient.h
//  SobotUserCenterSDK
//
//  Created by zhangxy on 2022/3/21.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCacheEntity.h>
#import <SobotUserCenter/SobotUserEntity.h>
NS_ASSUME_NONNULL_BEGIN
@protocol  SobotUserCenterClientDelegate <NSObject>

@optional
-(void)setTabHidde:(BOOL)isHidde;

@optional
-(void)gologin;
@end

typedef void(^SoboUserResultBlock)(NSString *_Nullable userNick, NSString *_Nullable orderId,NSDictionary *_Nullable callDict ,int type,NSString *_Nullable customId,SobotUserEntity *userModel);

typedef void(^GetCallInfoBlock)(NSDictionary *info);

@interface SobotUserCenterClient : NSObject

@property(nonatomic,weak)id <SobotUserCenterClientDelegate>delegate;

@property(nonatomic,copy) SoboUserResultBlock callBlcok;

@property(nonatomic,copy) GetCallInfoBlock getCallInfoBlock;

@property(nonatomic,assign) BOOL isNoHiddeCall;// SDK不能使用电话回复功能

+(SobotUserCenterClient *) getSobotUserCenterClient;

-(void)initSDKWith:(NSString *) apiHost config:(SobotCacheEntity *)config;

-(NSString *)getCurApiHost;

+(BOOL) isLogin;

+(NSString *)sobotGetSDKVersion;

+(NSString *)sobotGetSDKChannel;

+(void)showDebug:(BOOL) showDebug;

@end

NS_ASSUME_NONNULL_END
