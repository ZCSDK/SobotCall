//
//  SobotReq.h
//  MacOSTest
//
//  Created by wl on 2021/4/15.
//

#import <Foundation/Foundation.h>


//! Project version number for SobotReq.
FOUNDATION_EXPORT double SobotReqVersionNumber;

//! Project version string for SobotReq.
FOUNDATION_EXPORT const unsigned char SobotReqVersionString[];


NS_ASSUME_NONNULL_BEGIN



typedef NS_ENUM(NSInteger ,SobotParameterMode) {
    // 放query里 通过a=123&比456 拼接 类似于get的
    // Content-Type: application/x-www-form-urlencoded
    SobotParameterModeQuery = 0,
    // 放body里 通过a=123&比456 拼接 类似于get的
    // Content-Type: application/x-www-form-urlencoded
    // 把拼好的query放到httpbody里了
    SobotParameterModeFormURL = 1 , // 暂未使用
    // 放body里 httpbody里是json二进制
    // Content-Type: application/json
    SobotParameterModeJsonBody = 2,
    // 部分qury 部分jsonBody  @{@"query":@{} ,@"body":@{}} 自动读取
    // Content-Type: application/json
    SobotParameterModeQueryAndJsonBody = 3,
    /*
     表单
     Content-Disposition: form-data; name="file"; filename="22e93acbcced42dbb319a2fc0ecdcec9.jpg"
     Content-Type: image/jpeg
     Content-Dispositon: form-data; name="useruame"
     */
    // 全部表单
    // Content-Type: multipart/form-data; boundary=YY
    SobotParameterModeFormBody = 4
};


/*
 根据职能不同Task有三种子类：
 NSURLSessionUploadTask：上传用的Task，传完以后不会再下载返回结果；
 NSURLSessionDownloadTask： 下载用的Task；
 NSURLSessionDataTask：可以上传内容，上传完成后再进行下载。
 */
#pragma mark ----- 注意1 所有的请求都是在子线程中进行 返回结果也没有回到主线程 需要使用者手动处理 回到主线程
#pragma mark ----- 注意2 返回体没有进行处理 是二进制 由使用者手动处理二进制

@interface SobotRequest : NSObject

- (NSURLSessionDataTask *)dataTask:(NSURLRequest *)request
                     andCompletion:(void(^) (NSURLResponse *response, NSData *_Nullable data, NSError * _Nullable error)) completion;

- (NSURLSessionDataTask *)dataTask:(NSURLRequest *)request
                               andProgress:(void (^)(NSProgress *progress))progress
                             andCompletion:(void(^) (NSURLResponse *response, NSData *_Nullable data, NSError * _Nullable error)) completion;




/*
 @param URLString 请求domain+path
 @param parameters 参数
 @param headers 请求头 如果设置超时 时间 请在headers里添加key为timeout
 @param success -- block  成功回调
 @param failure -- block  失败回调
 */
- (NSURLSessionDataTask *)GET:(NSString *)URLString
                andParameters:(NSDictionary * _Nullable)parameters
                   andHeaders:(NSDictionary <NSString *, NSString *> * _Nullable)headers
                   andSuccess:(void (^)(NSData *_Nullable data ,NSURLSessionDataTask *task,NSURLResponse *response))success
                   andFailure:(void (^)(NSError *error ,NSURLSessionDataTask *task))failure;

- (NSURLSessionDataTask *)GET:(NSString *)URLString
               andParameters:(NSDictionary * _Nullable)parameters
                  andHeaders:(NSDictionary <NSString *, NSString *> * _Nullable)headers
                  andSuccess:(void (^)(NSData *_Nullable data ,NSURLSessionDataTask *task,NSURLResponse *response))success
                  andFailure:(void (^)(NSError *error ,NSURLSessionDataTask *task))failure
                 andProgress:(nullable void (^)(NSProgress *progress))uploadProgress;


/* POST 请求
 通过parameterMode  区分是query还是jsonbody 还是混合
 @param URLString 请求domain+path
 @param parameterMode 参数形式
 SobotParameterModeQuery 问号后面拼接query
 SobotParameterModeBody body 是以jsondata传入的
 SobotParameterModeMixed 如果是mixed  @{@"query":@{} ,@"body":@{}} 自动读取
 @param parameters 参数
 @param headers 请求头 如果设置超时 时间 请在headers里添加key为timeout
 @param success -- block  成功回调
 @param failure -- block  失败回调
 */
- (NSURLSessionDataTask *)POST:(NSString *)URLString
              andParameterMode:(SobotParameterMode )parameterMode
                 andParameters:(NSDictionary * _Nullable)parameters
                    andHeaders:(NSDictionary <NSString *, NSString *> * _Nullable)headers
                    andSuccess:(void (^)(NSData *_Nullable data ,NSURLSessionDataTask *task,NSURLResponse *response))success
                    andFailure:(void (^)(NSError *error ,NSURLSessionDataTask *task))failure
                   andProgress:(void (^)(NSProgress *progress))uploadProgress;


- (NSURLSessionDataTask *)request:(NSString *)URLString
              andParameterMode:(SobotParameterMode )parameterMode
              andParameterMode:(NSString *)method
                 andParameters:(NSDictionary *)parameters
                    andHeaders:(NSDictionary<NSString *,NSString *> *)headers
                    andSuccess:(nonnull void (^)(NSData * _Nullable, NSURLSessionDataTask * _Nonnull,NSURLResponse *response))success
                       andFailure:(nonnull void (^)(NSError * _Nonnull, NSURLSessionDataTask * _Nonnull))failure andProgress:(nonnull void (^)(NSProgress * _Nonnull))uploadProgress;
@end

NS_ASSUME_NONNULL_END
