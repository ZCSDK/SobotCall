//
//  SobotUCenterHomeController.h
//  SobotUserCenter
//
//  Created by zhangxy on 2024/4/28.
//

#import <SobotCommon/SobotCommon.h>
#import <SobotUserCenter/SobotUserEntity.h>
NS_ASSUME_NONNULL_BEGIN

@interface SobotUCenterHomeController : SobotBaseController

@property (nonatomic, strong)  void(^sobotOrderSaveResult) (SobotUserEntity *model);

@property(nonatomic,assign)BOOL isFirstPage;// 是否为首页， 首页不在显示返回按钮

/** 如果是CRM，需要添加数据隔离参数
* 1-需要数据隔离
*/
@property(nonatomic,assign) int dataType;

@property(nonatomic,assign) BOOL isFromOrderSDK;// 从智齿客服工单

@end

NS_ASSUME_NONNULL_END
