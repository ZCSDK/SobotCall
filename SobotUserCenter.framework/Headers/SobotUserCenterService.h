//
//  SobotUserCenterService.h
//  SobotUserCenterSDK
//
//  Created by zhangxy on 2022/3/18.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,SobotUserCenterNetworkCode) {
    CODE_FAILED = 0,
    CODE_SUCCEEDED = 1,
    
};

NS_ASSUME_NONNULL_BEGIN
/// 用户中心所有接口
@interface SobotUserCenterService : NSObject


/// 登录
/// @param email 用户名
/// @param passwrod 密码
/// @param resultBlock 结果
+(void)login:(NSString *) email pwd:(NSString *) passwrod result:(void(^)(SobotUserCenterNetworkCode code,NSDictionary *dict,NSString *msg)) resultBlock;


/// 退出登录
/// @param resultBlock 结果
+(void)logOut:(void(^)(SobotUserCenterNetworkCode code,NSDictionary *dict,NSString *msg))resultBlock;


/// 获取用户权限
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getLoginUserService:(void(^)(NSString *urlString)) startBlock
                   success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                    failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;


/// 获取用户权限V6版本
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getLoginAgentAuthMenu:(void(^)(NSString *urlString)) startBlock
                     success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                      failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;

///  获取用户中心首页列表数据
/// @param page 当前分页页码
/// @param dataType 当dataType=1时，会数据隔离
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description

+(void)getUCenterHomeList:(int)page
                dataType:(int) dataType
                    start:(void(^)(NSString *url)) startBlock
                  success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                   failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;


/// 查询用户列表
/// @param searchText 搜索参数
/// @param page 当前页码
/// @param dataType 当dataType=1时，会数据隔离
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)searchUCenterList:(NSString *) searchText
                    page:(int) page
                dataType:(int) dataType
                   start:(void(^)(NSString *url)) startBlock
                 success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                  failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;


/// 新增用户
/// @param params 新增参数
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
/// @param finishBlock finishBlock description
+(void)saveOrEditUser:(NSMutableDictionary *)params
                         start:(void(^)(NSString *urlString)) startBlock
                       success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                        failed:(void(^)(NSDictionary *dict,NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
               finish:(void(^)(NSString *jsonString)) finishBlock;



/// 合并用户
/// @param params 当前要保存的用户信息
/// @param isCurUser 当前合并的是否与主记录一致
/// @param mergeIds 要合并的用户id
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description
+(void)mergeUser:(NSMutableDictionary *)params
isCurUser:(int) isCurUser
         users:(NSArray *) mergeIds
                         start:(void(^)(NSString *urlString)) startBlock
                       success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                        failed:(void(^)(NSDictionary *dict,NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
          finish:(void(^)(NSString *jsonString)) finishBlock;


/// 查询用户信息
/// @param userId 参数
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description
+(void)searchUserInfo:(NSString *)userId
                start:(void(^)(NSString *urlString)) startBlock
              success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
               failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
               finish:(void(^)(NSString *jsonString)) finishBlock;


/// 获取联络记录
/// @param params 入参
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description
+(void)getCustomerContactRecord:(NSMutableDictionary *)params
                          start:(void(^)(NSString *urlString)) startBlock
                        success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                         failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
                         finish:(void(^)(NSString *jsonString)) finishBlock;


+(void)uploadUserAvatar:(NSMutableDictionary *)params
                  start:(void(^)(NSString *urlString)) startBlock
                success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                 failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
                 finish:(void(^)(NSString *jsonString)) finishBlock;

/// 查询用户自定义字段
/// @param startBlock 开始
/// @param successBlock 成功
/// @param failedBlock 失败
+(void)getUserFieldConfig:(void(^)(NSString *url)) startBlock
                  success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                   failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;



/// 查询vip列表
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getUserVipLevelList:(void(^)(NSString *url)) startBlock
                   success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                    failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;


/// 查询企业列表
/// @param page 当前页
/// @param enterpriseName 如果是搜索，为搜索名称
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getUserEnterpriseList:(int) page searchName:(NSString *)enterpriseName start:(void(^)(NSString *url)) startBlock
                     success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                      failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;

/// 查询用户地区信息
/// @param level 等级，0国家，1州、省，2城市，3地区
/// @param pid 上级id
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
+(void)getUserAreaList:(int) level pid:(NSString *) pid start:(void(^)(NSString *url)) startBlock
               success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock;


/// 查询用户详情
/// @param customerId customerId description
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description
+(void)getSobotOrderUserInfo:(NSString *) customerId
                       start:(void(^)(NSString *urlString)) startBlock
                     success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                      failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
                      finish:(void(^)(NSString *jsonString)) finishBlock;


/// 呼叫用户信息
/// @param operateType 1，用户自定义字段
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description
+(void)getUserCusFieldList:(int )operateType
                     start:(void(^)(NSString *urlString)) startBlock
                   success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                    failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
                    finish:(void(^)(NSString *jsonString)) finishBlock;





/// 查询时区列表
/// @param language 当前展示的语言
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description 
+(void)getUserTimezoneList:(NSString *)language
                     start:(void(^)(NSString *urlString)) startBlock
                   success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                    failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
                    finish:(void(^)(NSString *jsonString)) finishBlock;



/// 查询语言列表
/// @param language 当前使用的语言
/// @param startBlock startBlock description
/// @param successBlock successBlock description
/// @param failedBlock failedBlock description
/// @param finishBlock finishBlock description
+(void)getUserLanguageList:(NSString *)language
                     start:(void(^)(NSString *urlString)) startBlock
                   success:(void(^)(NSDictionary *dict,SobotUserCenterNetworkCode sendCode))successBlock
                    failed:(void(^)(NSString *errorMessage,SobotUserCenterNetworkCode errorCode))failedBlock
                    finish:(void(^)(NSString *jsonString)) finishBlock;
@end

NS_ASSUME_NONNULL_END
