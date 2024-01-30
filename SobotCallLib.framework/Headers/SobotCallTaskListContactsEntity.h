//
//  SobotCallTaskListContactsEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2023/11/2.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallTaskListContactsEntity : SobotBaseEntity
@property (nonatomic,copy)NSString *campaignId;
@property (nonatomic,copy)NSString *recordId;
@property (nonatomic,copy)NSString *contactName;
@property (nonatomic,copy)NSString *screenNumber;
@property (nonatomic,copy)NSString *encryptCustomerNumber;
@property (nonatomic,copy)NSString *area;
@property (nonatomic,copy)NSString *callStartTime;
@property (nonatomic,assign)int state;
@property (nonatomic,assign)int dialCount;
@property (nonatomic,copy)NSString *contactCode;

//{
//                "campaignId":"f9128c8600204N4023Bb3db141218aca5886",
//                "recordId":"c577453f034a3N435bB918c1dad35ec86bac",
//                "contactName":"张总",
//                "screenNumber":"18600******",
//                "encryptCustomerNumber":"18600000001",
//                "area":"北京/北京",
//                "callStartTime":0,
//                "state":1,
//                "dialCount":0,
//                "contactCode":null
//            }
@end

NS_ASSUME_NONNULL_END
