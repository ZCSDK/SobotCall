//
//  SobotRequsetSerializer.h
//  MacOSTest
//
//  Created by wl on 2021/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/*
 请求有query和body两种处理参数的方式
 默认query 方式
 */
#pragma mark --- SobotRequsetSerializer
@interface SobotRequsetSerializer : NSObject

/*
 创建请求头对象
 */
+ (instancetype)serializer;

/*
 超时时间 默认 30s
 */
@property (nonatomic, assign) NSTimeInterval timeoutInterval;


/*
 设置请求头
 */
- (void)setValue:(NSString *)value forHTTPHeaderField:(NSString *)field;
/*
 请求头value 获取
 */
- (nullable NSString *)valueForHTTPHeaderField:(NSString *)field;

- (nullable NSMutableURLRequest *)requestWithMethod:(NSString *)method
                                          URLString:(NSString *)URLString
                                         parameters:(NSDictionary * _Nullable)parameters;

- (NSURLRequest *)requestBySerializingRequest:(NSURLRequest *)request
                               withParameters:(NSDictionary * _Nullable)parameters;


- (nullable NSMutableURLRequest *)requestWithMethod:(NSString *)method
                                          URLString:(NSString *)URLString
                                            header:(NSDictionary *) headers
                                         parameters:(NSDictionary * _Nullable)parameters;

@end
#pragma mark --- 创建query
@interface SobotRequsetSerializer (SobotQuery)

+ (NSString *)createQuery:(NSDictionary *)dictionary;

@end

@interface SobotFormURLRequestSerializer: SobotRequsetSerializer

@end

#pragma mark --- SobotJSONRequsetSerializer json body

@interface SobotJSONRequsetSerializer : SobotRequsetSerializer

/*
 NSJSONWritingOptions
 */
@property (nonatomic, assign) NSJSONWritingOptions writingOptions;

/*
 初始化方法
 */
+ (instancetype)serializerWithWritingOptions:(NSJSONWritingOptions)writingOptions;

@end

#pragma mark ---- SobotQueryAndJsonBodyRequsetSerializer

@interface SobotQueryAndJsonBodyRequsetSerializer : SobotRequsetSerializer

/*
 NSJSONWritingOptions
 */
@property (nonatomic, assign) NSJSONWritingOptions writingOptions;
/*
 初始化方法
 */
+ (instancetype)serializerWithWritingOptions:(NSJSONWritingOptions)writingOptions;

@end

#pragma mark ---- SobotMultipartFormBean
@interface SobotMultipartFormBean: NSObject
/*
 Content-Disposition: file; filename=#{filename}; name=#{name} Content-Type:#{mimeType}"
 @param data value 参数二进制
 @param name key 不能为空
 */
+ (instancetype)createFormWithFileData:(NSData *)fileData
                               andName:(NSString *)name
                           andFileName:(NSString *)fileName
                           andMimeType:(NSString *)mimeType;
/*
 name
 */
@property (nonatomic ,copy) NSString *_Nonnull name;
/*
 文件二进制
 */
@property (nonatomic ,copy) NSData *_Nonnull fileData;
/*
 文件名称
 */
@property (nonatomic ,copy) NSString *_Nonnull fileName;
/*
 文件类型
 */
@property (nonatomic ,copy) NSString *_Nonnull mimeType;
/*
 参数二进制
 */
@property (nonatomic ,strong) NSData *_Nonnull data;
/*
 Content-Disposition: form-data; name=#{name}
 @param data value 参数二进制
 @param name key 不能为空
 */
+ (instancetype)createFormWithData:(NSString *)data
                           andName:(NSString *)name;

@end

#pragma mark --- SobotUploadRequestSerializer

@interface SobotUploadRequestSerializer: SobotRequsetSerializer


@end

#pragma mark --- SobotDownloadRequestSerializer

@interface SobotDownloadRequestSerializer: SobotRequsetSerializer


@end

NS_ASSUME_NONNULL_END
