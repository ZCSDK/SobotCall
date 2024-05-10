//
//  SobotCallHttps.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//

#import <Foundation/Foundation.h>
#import <SobotCommon/SobotCommon.h>

#import <SobotCallLib/SobotCallHttpDelegate.h>

typedef NS_ENUM(NSInteger,SobotCallNetworkCode) {
    CALL_CODE_FAILED = 0,
    CALL_CODE_SUCCEEDED = 1,
    
};
/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^NetworkResultBlock)(SobotCallNetworkCode code,NSDictionary *_Nullable dict,NSString *_Nullable jsonString);


NS_ASSUME_NONNULL_BEGIN

@interface SobotCallHttps : NSObject

+(void)get:(NSString *) stringURL
    sdkVersion:(NSString *) sdkVersion
     start:(StartCallBlock) StartCallBlock
    finish:(FinishCallBlock) finishBlock
  complete:(CompleteCallBlock) CompleteCallBlock
      fail:(FailCallBlock) failBlock;

+(void)get:(NSString *)stringURL
sdkVersion:(NSString *) sdkVersion
     start:(StartCallBlock)StartCallBlock
    finish:(FinishCallBlock)finishBlock
  complete:(CompleteCallBlock)CompleteCallBlock
      fail:(FailCallBlock)failBlock
  progress:(ProgressCallBlock __nullable)progressBlock;


+(void)post:(NSString *) stringURL
      param:(NSDictionary *) dict
    timeOut:(CGFloat) timeOut
 sdkVersion:(NSString *) sdkVersion
      start:(StartCallBlock) StartCallBlock
     finish:(FinishCallBlock) finishBlock
   complete:(CompleteCallBlock) CompleteCallBlock
       fail:(FailCallBlock) failBlock;

+(void)post:(NSString *)stringURL
      param:(NSDictionary *)dict
 sdkVersion:(NSString *) sdkVersion
      start:(StartCallBlock)StartCallBlock
     finish:(FinishCallBlock)finishBlock
   complete:(CompleteCallBlock)CompleteCallBlock
       fail:(FailCallBlock)failBlock
   progress:(ProgressCallBlock __nullable)progressBlock;

+(void)post:(NSString *)stringURL
      param:(NSDictionary *)dict
    timeOut:(CGFloat) timeOut
 sdkVersion:(NSString *) sdkVersion
      start:(StartCallBlock)StartCallBlock
     finish:(FinishCallBlock)finishBlock
   complete:(CompleteCallBlock)CompleteCallBlock
       fail:(FailCallBlock)failBlock
   progress:(ProgressCallBlock __nullable)progressBlock;

//// 放query里 通过a=123&比456 拼接 类似于get的
//// Content-Type: application/x-www-form-urlencoded
//SobotParameterModeQuery = 0,
//// 放body里 通过a=123&比456 拼接 类似于get的
//// Content-Type: application/x-www-form-urlencoded
//// 把拼好的query放到httpbody里了
//SobotParameterModeFormURL = 1 , // 暂未使用
//// 放body里 httpbody里是json二进制
//// Content-Type: application/json
//SobotParameterModeJsonBody = 2,
//// 部分qury 部分jsonBody  @{@"query":@{} ,@"body":@{}} 自动读取
//// Content-Type: application/json
//SobotParameterModeQueryAndJsonBody = 3,
///*
// 表单
// Content-Disposition: form-data; name="file"; filename="22e93acbcced42dbb319a2fc0ecdcec9.jpg"
// Content-Type: image/jpeg
// Content-Dispositon: form-data; name="useruame"
// */
//// 全部表单
//// Content-Type: multipart/form-data; boundary=YY
//SobotParameterModeFormBody = 4
+(void)post:(NSString *)stringURL
      param:(NSDictionary *)dict
    timeOut:(CGFloat) timeOut
       mode:(NSInteger ) mode
 sdkVersion:(NSString *) sdkVersion
      start:(StartCallBlock)StartCallBlock
     finish:(FinishCallBlock)finishBlock
   complete:(CompleteCallBlock)CompleteCallBlock
       fail:(FailCallBlock)failBlock
   progress:(ProgressCallBlock __nullable)progressBlock;

// 可以设置请求 方法的设置
+(void)url:(NSString *)stringURL
      param:(NSDictionary *)dict
    timeOut:(CGFloat) timeOut
       mode:(NSInteger ) mode
     method:(NSString *)method
sdkVersion:(NSString *) sdkVersion
      start:(StartCallBlock)StartCallBlock
     finish:(FinishCallBlock)finishBlock
   complete:(CompleteCallBlock)CompleteCallBlock
       fail:(FailCallBlock)failBlock
   progress:(ProgressCallBlock __nullable)progressBlock;

// 单利
+(SobotCallHttps *) getZCHttpManager;

// 取消请求方法
-(void)cancelConnectMsgId:(NSString *)msgid;

@end

NS_ASSUME_NONNULL_END
