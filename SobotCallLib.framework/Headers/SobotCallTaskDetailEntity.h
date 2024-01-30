//
//  SobotCallTaskDetailEntity.h
//  SobotCallSDK
//
//  Created by zhangxy on 2022/8/15.
//

#import <SobotCallLib/SobotCallLibDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallTaskDetailEntity : SobotBaseEntity

@property (nonatomic,strong) NSString *campaignId;//": "c7a190710fea6M452888c34Fa312d2fe8cdb",
@property (nonatomic,strong) NSString *recordId;//": "210a390a029b5M4e748ac19F657c307734c4",
@property (nonatomic,strong) NSString *contactName;//": "张三",
@property (nonatomic,strong) NSString *screenNumber;//;": "1861162****",
@property (nonatomic,strong) NSString *encryptCustomerNumber;//": "18611622736",
@property (nonatomic,strong) NSString *area;//": "北京/北京",
@property(nonatomic,assign) int callStartTime;//": 0,
@property(nonatomic,assign) int state;//": 1,
@property(nonatomic,assign) int dialCount;//": 0

@property(nonatomic,assign) int hiddenFlag;//": 0

//@property(nonatomic,copy) NSString *callNO;// v1 呼叫号码
//@property(nonatomic,copy) NSString *taskDetailId;//V1 呼叫任务使用

@end

NS_ASSUME_NONNULL_END
