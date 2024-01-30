//
//  SobotCallHttpDelegate.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/7/4.
//


#import <CoreText/CoreText.h>
/**
 *  超时时间
 */
#define HttpGetTimeOut       10
#define HttpPostTimeOut      30
#define HttpPostSmallTimeOut 10


#define HttpNetWorkTimeOut  @"Network connection timeout"

/**
 *  开始请求，每次发送请求时调用
 */
typedef void(^StartCallBlock)(NSString *_Nullable urlString,NSDictionary *_Nullable params);

/**
 *  请求成功
 *
 *  @param dict 成功后，解析的返回
 */
typedef void(^CompleteCallBlock)(NSDictionary * _Nullable dict,NSString *jsonString);

/**
 *  请求完成，不管失败、成功，只要完成都会执行，可为nil
 *
 *  @param response 请求返回NSURLResponse
 */
typedef void(^FinishCallBlock)(id _Nullable response,NSData  * _Nonnull data);

/**
 *  请求失败
 *
 *  @param response     请求返回NSURLResponse
 *  @param connectError 失败的connectError
 */
typedef void(^FailCallBlock)(id _Nullable response,NSString * _Nonnull errorMsg,NSError * _Nullable connectError);


/**
 *  上传、下载进度
 *
 *  @param progress 上传、下载进度，如0.2，0.5
 */
typedef void(^ProgressCallBlock)(CGFloat progress);
