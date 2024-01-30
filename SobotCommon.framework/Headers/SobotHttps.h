//
//  SobotHttps.h
//  SobotUI
//
//  Created by zhangxy on 2022/11/22.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

#define SobotHttpGetTimeOut       10
#define SobotHttpPostTimeOut      30
#define SobotHttpPostSmallTimeOut 10
typedef NS_ENUM(NSInteger,SobotNetworkCode) {
    SOBOT_NETWORK_CODE_FAILED = 0,
    SOBOT_NETWORK_CODE_SUCCEEDED = 1,
    
};
/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^SobotNetworkStartBlock)(NSString *_Nullable urlString,NSDictionary *_Nullable params);


/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^SobotNetworkResultBlock)(SobotNetworkCode code,NSString *retCode,NSDictionary *_Nullable dict,NSString *_Nullable jsonString);

/**
 *  请求完成，不管失败、成功，只要完成都会执行，可为nil
 *
 *  @param response 请求返回NSURLResponse
 */
typedef void(^SobotNetworkFinishBlock)(id _Nullable response,NSData  * _Nonnull data, NSString *jsonString);

/**
 *  上传、下载进度
 *
 *  @param progress 上传、下载进度，如0.2，0.5
 */
typedef void(^SobotNetworkProgressBlock)(CGFloat progress);


@interface SobotHttps : NSObject
+(SobotHttps *) getZCHttpManager;
-(void)cancelConnectMsgId:(NSString *)msgid;
// 如果是国内添加/text,呼叫和其它环境不加/text
+(NSString *)adapteUrlHost:(NSString *) url;

+(void)get:(NSString *)stringURL header:(NSDictionary *) header start:(SobotNetworkStartBlock)startBlock finish:(SobotNetworkFinishBlock)finishBlock result:(SobotNetworkResultBlock)resultBlock progress:(SobotNetworkProgressBlock)progressBlock;


//typedef NS_ENUM(NSInteger ,SobotParameterMode) {
//    // 放query里 通过a=123&比456 拼接 类似于get的
//    // Content-Type: application/x-www-form-urlencoded
//    SobotParameterModeQuery = 0,
//    // 放body里 通过a=123&比456 拼接 类似于get的
//    // Content-Type: application/x-www-form-urlencoded
//    // 把拼好的query放到httpbody里了
//    SobotParameterModeFormURL = 1 , // 暂未使用
//    // 放body里 httpbody里是json二进制
//    // Content-Type: application/json
//    SobotParameterModeJsonBody = 2,
//    // 部分qury 部分jsonBody  @{@"query":@{} ,@"body":@{}} 自动读取
//    // Content-Type: application/json
//    SobotParameterModeQueryAndJsonBody = 3,
//    /*
//     表单
//     Content-Disposition: form-data; name="file"; filename="22e93acbcced42dbb319a2fc0ecdcec9.jpg"
//     Content-Type: image/jpeg
//     Content-Dispositon: form-data; name="useruame"
//     */
//    // 全部表单
//    // Content-Type: multipart/form-data; boundary=YY
//    SobotParameterModeFormBody = 4
//};
+(void)post:(NSString *)stringURL params:(NSDictionary *)dict header:(NSDictionary *) header timeOut:(CGFloat)timeOut mode:(NSInteger )mode start:(SobotNetworkStartBlock)startBlock finish:(SobotNetworkFinishBlock)finishBlock result:(SobotNetworkResultBlock)resultBlock progress:(SobotNetworkProgressBlock)progressBlock;


// 可以设置请求方式
+(void)url:(NSString *)stringURL params:(NSDictionary *)dict header:(NSDictionary *) header timeOut:(CGFloat)timeOut mode:(NSInteger )mode method:(NSString *)method start:(SobotNetworkStartBlock)startBlock finish:(SobotNetworkFinishBlock)finishBlock result:(SobotNetworkResultBlock)resultBlock progress:(SobotNetworkProgressBlock)progressBlock;
@end

NS_ASSUME_NONNULL_END
