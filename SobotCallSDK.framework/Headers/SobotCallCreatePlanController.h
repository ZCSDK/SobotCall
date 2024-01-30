//
//  SobotCallCreatePlanController.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/20.
//

#import <SobotCallSDK/SobotCallDefines.h>
#import <SobotCallLib/SobotCallPlanEntity.h>
NS_ASSUME_NONNULL_BEGIN

//电话 计划名称 预约时间 提醒 备注
typedef NS_ENUM(NSInteger,SobotCallCreatePlanType) {
    SobotCallCreatePlanTelType = 1,
    SobotCallCreatePlanTextType = 2,
    SobotCallCreatePlanSelDateTimeType = 3,
    SobotCallCreatePlanSelTipTimeType = 4,
    SobotCallCreatePlanTextViewType = 5,
};

@interface SobotCallCreatePlanController : SobotBaseController

@property (nonatomic, strong)  SobotCallPlanEntity *model;

@property (nonatomic, copy) NSString *hiddenFlag;

@property (nonatomic, copy) NSString *phone;

@property (nonatomic, copy) NSString *taskName;

@property (nonatomic, copy) NSString *taskDetailId;

@property (nonatomic, strong)  void(^CreateOrEditResult)(SobotCallPlanEntity * model);

@end

NS_ASSUME_NONNULL_END
