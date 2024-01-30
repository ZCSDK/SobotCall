//
//  SobotCallDetailController.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/20.
//

#import <SobotCallSDK/SobotCallDefines.h>
#import <SobotCallLib/SobotCallRecordEntity.h>
NS_ASSUME_NONNULL_BEGIN

@interface SobotCallDetailController : SobotBaseController
@property(nonatomic,strong) SobotCallRecordEntity *model;
@end

NS_ASSUME_NONNULL_END
