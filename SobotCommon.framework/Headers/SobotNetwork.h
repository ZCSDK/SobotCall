//
//  SobotNetwork.h
//  SobotNetwork
//
//  Created by zhangxy on 2021/7/9.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SobotRequest.h"


// 自定义超时时间，每次请求header中增加此参数，单位毫秒，默认30秒
FOUNDATION_EXPORT NSString * const SobotRequestHeaderTimeoutInterval;

/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^SobotStartLoadingBlock)(id taskReq);

/**
 *  请求成功
 *
 *  @param dict 成功后，解析的返回
 */
typedef void(^SobotSuccessBlock)(id response,NSDictionary *dict,NSData *data);

/**
 *  请求完成，不管失败、成功，只要完成都会执行，可为nil
 *
 *  @param response 请求返回NSURLResponse
 */
typedef void(^SobotFinishBlock)(id response,NSData *data, NSString *jsonString);

/**
 *  请求失败
 *
 *  @param response     请求返回NSURLResponse
 *  @param connectError 失败的connectError
 */
typedef void(^SobotFailBlock)(id response,NSString *errorMsg,NSError *connectError);


/**
 *  上传、下载进度
 *
 *  @param progress 上传、下载进度，如0.2，0.5
 */
typedef void(^SobotProgressBlock)(id taskReq,CGFloat progress);

@interface SobotNetwork : NSObject

// header:timeoutInterval


/// 测试方法
/// @param api_url  直接输出，无意义
/// @param paramters 直接输出
+(void)get:(NSString *) api_url params:(NSDictionary *)paramters;


+(void)get:(NSString *) api_url
    params:(NSDictionary *)paramters
    header:(NSDictionary *)header
   begin:(SobotStartLoadingBlock) beginBlock
   success:(SobotSuccessBlock) successBlock
   fail:(SobotFailBlock) failBlock
    finish:(SobotFinishBlock )finishBlock;


+(void)get:(NSString *) api_url
    params:(NSDictionary *)paramters
    header:(NSDictionary *)header
   begin:(SobotStartLoadingBlock) beginBlock
   success:(SobotSuccessBlock) successBlock
   fail:(SobotFailBlock) failBlock
    finish:(SobotFinishBlock )finishBlock
progress:(SobotProgressBlock) proressBlock;


+(void)post:(NSString *) api_url
     params:(NSDictionary *)paramters
     header:(NSDictionary *)header
      begin:(SobotStartLoadingBlock) beginBlock
    success:(SobotSuccessBlock) successBlock
       fail:(SobotFailBlock) failBlock
     finish:(SobotFinishBlock )finishBlock;


+(void)post:(NSString *) api_url
     params:(NSDictionary *)paramters
     header:(NSDictionary *)header
 paramsMode:(SobotParameterMode )mode
      begin:(SobotStartLoadingBlock) beginBlock
    success:(SobotSuccessBlock) successBlock
       fail:(SobotFailBlock) failBlock
     finish:(SobotFinishBlock )finishBlock
    progress:(SobotProgressBlock) proressBlock;


+(void)url:(NSString *) api_url
     params:(NSDictionary *)paramters
     header:(NSDictionary *)header
 paramsMode:(SobotParameterMode )mode
     mothed:(NSString *)mothed
      begin:(SobotStartLoadingBlock) beginBlock
    success:(SobotSuccessBlock) successBlock
       fail:(SobotFailBlock) failBlock
     finish:(SobotFinishBlock )finishBlock
    progress:(SobotProgressBlock) proressBlock;
@end
