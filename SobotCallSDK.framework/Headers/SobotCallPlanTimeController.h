//
//  SobotCallPlanTimeController.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/20.
//
#import <SobotCallSDK/SobotCallDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallPlanTimeController : SobotBaseController
@property (nonatomic,copy) NSString *dataValue;
@property (nonatomic,strong) void(^selResultBlock)(NSDictionary *dict);
@end

NS_ASSUME_NONNULL_END
