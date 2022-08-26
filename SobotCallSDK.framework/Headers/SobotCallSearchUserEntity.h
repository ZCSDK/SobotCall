//
//  SobotCallSearchUserEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/20.
//

#import <SobotCallSDK/SobotCallDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallSearchUserEntity : SobotBaseEntity

@property(nonatomic,strong)NSString *createTime;//": 1480414638,
@property(nonatomic,strong)NSString *email;//": "jchfffj@dd.com",
@property(nonatomic,strong)NSString *uid;//": "0ee847a79dd249a684c70e5a5e8bcea8",
@property(nonatomic,strong)NSString *img;//": "https://img.sobot.com/console/common/face/user.png",
@property(nonatomic,strong)NSString *nick;//": "饭后活动",
@property(nonatomic,strong)NSString *passwd;//": "3c22fa43b6c91a35d68fd6121be61231",
@property(nonatomic,strong)NSString *pid;//": "73afd340f45148d58f71c33477439c7a",
@property(nonatomic,strong)NSMutableArray *resultList;//": [],
@property(nonatomic,strong)NSString *rowkey;//": "73afd340f45148d58f71c33477439c7a_0ee847a79dd249a684c70e5a5e8bcea8",
@property(nonatomic,strong)NSString *salt;//": "60c9f85704d54e27a1e612a825e34e85",
@property(nonatomic,strong)NSString *partnerId;


// 来源0 pc 1微信 2APP 3微博 4WAP 5融云
@property(nonatomic,assign)int      source;//": 0,
@property(nonatomic,strong)NSString *sourceName;//": "jchfffj"
@property(nonatomic,assign)int      status;//": 8,

@property(nonatomic,strong)NSString *visitorIds;//": "18611622736",
@property(nonatomic,strong)NSString *tel;//": "18611622736",
@property(nonatomic,assign)int      type;//": 0,
@property(nonatomic,assign)BOOL      isVip;//": 0,
@property(nonatomic,strong)NSString *vipLevelName;//": "18611622736",
@property(nonatomic,strong)NSString *vipLevel;//": "18611622736",

@property(nonatomic,strong)NSString *uname;//": "jchfffj"
@property(nonatomic,strong)NSString *face;//": "jchfffj"


// 省市县
@property (nonatomic,strong)NSString *areaName;
@property (nonatomic,strong)NSString *areaId;

@property (nonatomic,strong)NSString *cityName;
@property (nonatomic,strong)NSString *cityId;

@property (nonatomic,strong)NSString *proviceName;
@property (nonatomic,strong)NSString *proviceId;

@property (nonatomic,strong)NSString *remark;// 备注

@property (nonatomic,strong)NSString *enterpriseId;// 公司ID
@property (nonatomic,strong)NSString *enterpriseName;//公司名称

@property (nonatomic,strong)NSString *QQNumber;// QQ


-(void)setSourceNameFromSource;
@end

NS_ASSUME_NONNULL_END
