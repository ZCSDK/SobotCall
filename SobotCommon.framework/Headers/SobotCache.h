//
//  SobotCache.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SobotCacheEntity.h"

NS_ASSUME_NONNULL_BEGIN


@interface SobotCache : NSObject

// SobotThemeMode,默认0
//SobotThemeMode_Default    = 0, // 默认，跟随系统
//SobotThemeMode_Dark       = 1, // 暗黑模式
//SobotThemeMode_Light      = 2, // 亮色模式
@property(nonatomic,assign) NSInteger themeMode;

@property(strong,nonatomic) SobotCacheEntity *sobotCacheEntity;

@property(assign,nonatomic) BOOL isUseImagesxcassets;

-(void)addCacheEntity:(SobotCacheEntity *) entity;

-(SobotCacheEntity *)getCacheEntity:(NSString *) bundleName;


// 缓存对象
-(void)addCacheObject:(id )obj key:(NSString *) key;
-(id )getCacheObject:(NSString *)key;


/**
 *  单例
 *
 *  @return ZZLibNetworkTools创建的对象
 */
+(SobotCache *) shareSobotCache;


+(NSBundle *)getSourceBundle:(NSBundle *__nullable) placeholderBundle withName:(NSString * __nullable) bundleName;


-(BOOL)useImagesxcassets;
+(NSString *)getSourceFilePath;


///
/// 常用存储类
///
+ (NSString*)dataTOjsonString:(id)object;
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
// 对象转换为字典
+ (NSDictionary*)getObjectData:(id)obj;


/**
 存储本地数据到NSUserDefault中

 @param value 值
 @param key 键
 */
+(void)addObject:(id) value forKey:(NSString *) key;
+(void)removeObjectByKey:(NSString *) key;

/**
 把dict封装成本地数组存储

 @param arr 字典数组
 @param key 键
 */
+(void)addObjectToArray:(NSDictionary *) arr for:(NSString *) key;



/**
 获取普通存储的值

 @param key 键
 @return 值
 */
+(id)getLocalParamter:(NSString *) key;


/**
 获取数据后转换为JSON
 @param key 键
 @return json字符串
 */
+(NSString *)getLocalJSONData:(NSString *) key;


/**
 获取存储的字典

 @param key 键
 @return 字典类型
 */
+(NSDictionary *)getLocalDictionary:(NSString *)key;



/**
 获取存储的arr

 @param key 键
 @return 数组类型
 */
+(NSArray *)getLocalArray:(NSString *)key;



@end

NS_ASSUME_NONNULL_END
