//
//  SobotCallAgentGroup.h
//  SobotCallSDK
//
//  Created by zhangxy on 2023/7/11.
//

#import <UIKit/UIKit.h>
#import <SobotCallLib/SobotCallLibDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallAgentGroup : SobotBaseEntity

@property (nonatomic,strong) NSString *queueID;//": "c7a190710fea6M452888c34Fa312d2fe8cdb",
@property (nonatomic,strong) NSString *queueName;//": "210a390a029b5M4e748ac19F657c307734c4",
@property (nonatomic,strong) NSString *queueWeight;//": "张三",

// 0:默认签入组,1:可选签入组 默认是签入组
@property (nonatomic,assign) int checkin;//;": "1861162****",


// 是否选中
@property (nonatomic,assign) BOOL checked;//;": "1861162****",

@end

NS_ASSUME_NONNULL_END
