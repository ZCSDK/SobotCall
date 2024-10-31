//
//  SobotUserCenterUserEntity.h
//  SobotUserCenterSDK
//
//  Created by zhangxy on 2022/4/12.
//

#import <SobotUserCenter/SobotUserCenterDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotUserEntity : SobotBaseEntity

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

@property(nonatomic,strong)NSString *wx;

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

@property(nonatomic,strong)NSArray *telList;

@property (nonatomic,strong)NSString *encrypt;//电话号码密文
@property (nonatomic,strong)NSString *oldTel;// 未修改前的电话号码

//1 男，2女
@property (nonatomic,assign)int sex;
@property (nonatomic,strong)NSString *countryId;
@property (nonatomic,strong)NSString *countryName;
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


// 10.29新增语言
@property (nonatomic,strong)NSString *languageValue;
@property (nonatomic,strong)NSString *language;

// 10.29新增时区
@property (nonatomic,strong)NSString *timezoneValue;
@property (nonatomic,strong)NSString *timezoneId;


@property (nonatomic,strong)NSString *QQNumber;// QQ

@property(nonatomic,assign)BOOL      checked;//": 0,

@property(nonatomic,strong) NSString *customerId;
-(void)setSourceNameFromSource;

@end

NS_ASSUME_NONNULL_END
