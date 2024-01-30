//
//  SobotAuth.h
//  SobotAuth
//
//  Created by zhangxy on 2021/8/26.
//

#import <Foundation/Foundation.h>

@interface SobotAuth : NSObject

+(NSString *) getAuthVersion;


/// 根据固定key获取加密串，拼接方式：参数+key,
/// @param paramters 参与加密的字段
+(NSString *) getParameterDefaultSign:(NSDictionary *) paramters;


/// 根据指定key获取加密串，拼接方式：参数+key,
/// @param paramters 参与加密的字段
/// @param key 加密的私钥，如果不指定不额外添加
+(NSString *) getParameterSign:(NSDictionary *) paramters withKey:(NSString *) key;

@end
