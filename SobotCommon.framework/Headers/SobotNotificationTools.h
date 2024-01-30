//
//  SobotNotificationTools.h
//  SobotUtils
//
//  Created by zhangxy on 2021/11/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotNotificationTools : NSObject


/// 获取推送token的字符串
/// @param data  当前deviceToken
+(NSString *) getHexStringFromData:(NSData *) data;



/// 注册推送
/// @param application 如果注册成功，需要监听以下消息代理
/// didRegisterForRemoteNotificationsWithDeviceToken 获取token
/// didReceiveRemoteNotification 旧版本消息
/// didFailToRegisterForRemoteNotificationsWithError 失败
/// didReceiveLocalNotification 本地
/// userNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler: iOS10以后//功能：可设置是否在应用内弹出通知completionHandler(UNNotificationPresentationOptionAlert);
/// userNotificationCenter:(UNUserNotificationCenter *)center didReceiveNotificationResponse:(UNNotificationResponse *)response withCompletionHandler 新版获取通知
+(void)registerPush:(UIApplication *) application;


+(void)postLocalNotification:(NSString *)message dict:(NSDictionary *) userInfo;



@end

NS_ASSUME_NONNULL_END
