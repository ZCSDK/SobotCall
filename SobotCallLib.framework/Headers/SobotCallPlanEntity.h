//
//  SobotCallPlanEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/20.
//

#import <SobotCallLib/SobotCallLibDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallPlanEntity : SobotBaseEntity

@property (nonatomic,strong) NSString *companyId;//": "73afd340f45148d58f71c33477439c7a",
@property (nonatomic,strong) NSString *createdServiceName;//": "张新耀",
@property (nonatomic,strong) NSString *createdStaff;//": "2e1735de978642b6a4330a070d70c4d3",
@property (nonatomic,strong) NSString *customerPhoneNo;//": "18500256199",

 //号码隐藏 0.不隐藏 1.中间隐藏 2.末尾隐藏
@property (nonatomic,strong) NSString *hiddenFlag;//": 0,
@property (nonatomic,strong) NSString *planId;//": "c1c9a38a9cc34672aaad28eb56d32168",
@property (nonatomic,strong) NSString *isReminded;//": 0,
@property (nonatomic,strong) NSString *operationType;//": 0,
@property (nonatomic,strong) NSString *planTime;//": 1552374780,
@property (nonatomic,strong) NSString *remarks;//": "",
@property (nonatomic,strong) NSString *remindTime;//": "5",
@property (nonatomic,strong) NSString *taskName;//": "公司上市就靠你了",
@property (nonatomic,strong) NSString *visitResult;//": 3

@end

NS_ASSUME_NONNULL_END
