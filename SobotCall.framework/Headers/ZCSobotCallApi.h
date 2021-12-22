//
//  SobotCallApi.h
//  SobotCall
//
//  Created by lizh on 2021/11/17.
//

#import <Foundation/Foundation.h>
#import "SobotPhoneUtils.h"
#import "SobotCallInfo.h"
#import "SCUIConfig.h"

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger,SCCallType) {
    SCCallTypeAccpet     = 1, // 接听  挂断、一个接听
    SCCallTypeCallUp     = 2, // 拨号  拨号完成，变成挂断
};


typedef NS_ENUM(NSInteger, SobotVoipCallListenerState) {
    SobotVoipCallListenerStateDefault   = 0,
    SobotVoipCallListenerStateConnected = 1,
    SobotVoipCallListenerStateRegister  = 2, // 注册
    SobotVoipCallListenerStateClosed    = 3, // 关闭
    SobotVoipCallListenerStateFailed    = 4, //
    SobotVoipCallListenerStateNewCall   = 5, //外呼成功的来电
    SobotVoipCallListenerStateCalled    = 6, //被呼的的来电
    SobotVoipCallListenerStateHandup    = 7,  // 挂断
    SobotVoipCallListenerStateCallClose     = 8,    // 通话结束
    SobotVoipCallListenerStateCallReading    = 9,   // 通话中
    SobotVoipCallListenerStateAfterWorkSuccess = 10, // 坐席下班成功
    SobotVoipCallListenerStateAfterWorkFailed = 11, // 坐席下班失败
};



@interface ZCSobotCallApi : NSObject<SobotPhoneUtilsDelegate>

/**
 *  UI配置类
 */
@property(nonatomic,strong) SCUIConfig *uiConfig;

// 初始化
+(ZCSobotCallApi *)getInstance;

/**
 *   自定义域名  如果需要自定义域名请设置host SDK将会使用您传入的域名
 */
-(void)setApiHost:(NSString *)apiHost;


/**
 * 通过token登录
 *
 * @param sobotCallInfo          语音电话的启动配置信息，不可为空
 * @param access_token  token
 * @param sobotCallListenBlock  登录回调
 */
-(void)loginWithTokenWithCallInfo:(SobotCallInfo*)sobotCallInfo
                     access_token:(NSString *)access_token
             sobotCallListenBlock:(void (^)(id object))sobotCallListenBlock;

/**
 * 登录
 *
 * @param callInfo          语音电话的启动配置信息，不可为空
 * @param sobotCallListenBlock  登录回调
*/
-(void)loginWithSobotCallInfo:(SobotCallInfo*)callInfo
    sobotCallListenBlock:(void (^)(id object))sobotCallListenBlock;


/**
 * 启动SDK
 * @param info 配置信息
 * @param sobotCallListenBlock 启动结果的回调
 */
-(void)startCallWithCallInfo:(SobotCallInfo *)info sobotCallListenBlock:(void (^)(id object))sobotCallListenBlock;
   

/**
 * 发起通话
 *
 * @param sobotCallInfo    语音电话的启动配置信息，不可为空
 * @param userPhoneNumber 用户的电话号, 不能为空
 * @param userNick    用户的昵称 不可为空
 */
-(void)startCallWithPhoneNumber:(NSString *)userPhoneNumber userNick:(NSString *)userNick sobotCallInfo:(SobotCallInfo*)sobotCallInfo;

/**
 * 跳转到拨号界面
 *
 * @param sobotCallInfo        语音电话的启动配置信息，不可为空
 * @param userPhoneNumber 用户的电话号,可为空,有值的话会自动带入到拨号界面
 * @param userNick        用户的昵称,可为空，有值的话会自动带入到拨号界面
*/
-(void)openCallPhoneNumberWithPhoneNumber:(NSString *)userPhoneNumber userNick:(NSString *)userNick sobotCallInfo:(SobotCallInfo*)sobotCallInfo;

/**
 *   监听通话状态的变化
 *   监听状态： 用户来电、用户响铃中、通话中、通话结束
 */
-(void)setCallListener:(void (^)(SobotVoipCallListenerState state))listenerBlock;


/**
 * 离线退出
 *
 * @param callInfo 语音电话的启动配置信息，不可为空
 */
- (void)exitSobotCallWithSobotCallInfo:(SobotCallInfo*)callInfo;

/**
 *   获取配置类
 */
-(SobotCallInfo*)getCallInfo;

/**
 *  获取图片资源
 */
+(UIImage *)scGetBundleImage:(NSString *)imageName;



/**
 * 唤起拨号界面
 */
-(void)showZCCallView:(SCCallType ) type withCallModel:(id __nullable) callModel;


/**
 * 铃声播放
 */
- (void)ringPlay;

/**
 *  铃声暂停
 */
- (void)ringPuse;

/**
 *   挂断电话
 */
-(void)hangUpCall;

/**
 *    获取域名
 */
-(NSString *)getCurApiHost;


/**
 *
 */
-(void)sobotCallWithNumber:(NSString *)phoneNumber resultBlock:(void(^)(BOOL result))resultBlock;

@end

NS_ASSUME_NONNULL_END
