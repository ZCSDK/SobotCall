//
//  SobotCallSearchUserEntity.h
//  SobotCallSDK
//
//  Created by lizh on 2022/7/20.
//

#import <SobotCallLib/SobotCallLibDefines.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallSearchUserEntity : SobotBaseEntity

@property(nonatomic,strong)NSString *sex;//": "0ee847a79dd249a684c70e5a5e8bcea8",
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


// 来源0 pc 1微信 2APP 3微博 4WAP 5融云 6 呼叫中心
@property(nonatomic,assign)int      source;//": 0,
@property(nonatomic,strong)NSString *sourceName;//": "jchfffj"
@property(nonatomic,assign)int      status;//": 8,

@property(nonatomic,strong)NSString *visitorIds;//": "18611622736",
@property(nonatomic,strong)NSString *tel;//": "18611622736",
@property(nonatomic,assign)int      type;//": 0,
@property(nonatomic,assign)BOOL      isVip;//": 0,
@property(nonatomic,strong)NSString *vipLevelName;//": "18611622736",
@property(nonatomic,strong)NSString *vipLevel;//": "{\"id\":\"ea8aeb456d8d4c0b89ad32178bd280f1\",\"value\":\"VIP1\"}",

@property(nonatomic,strong)NSString *uname;//": "jchfffj"
@property(nonatomic,strong)NSString *face;//": "jchfffj"


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

@property (nonatomic,strong)NSString *QQNumber;// QQ
@property (nonatomic,strong)NSString *wx;// QQ


@property (nonatomic,strong)NSString *crmStatus;//": "2",
@property (nonatomic,strong)NSString *createServiceId;//": "e2bf45dacf1a46a0b26855234a7d96b8",
@property (nonatomic,strong)NSMutableArray *telList;//": [{"encrypt": "1828328386","tel": "1828328386"}],
@property (nonatomic,strong)NSString *updateUserId;//": "e2bf45dacf1a46a0b26855234a7d96b8",
@property (nonatomic,strong)NSString *updateUserName;//": "谷加坡-蒙罗维亚",
@property (nonatomic,strong)NSString *updateTime;//": 1689271238000,
@property (nonatomic,strong)NSString *createServiceName;//": "谷加坡-蒙罗维亚",
@property (nonatomic,strong)NSString *phoneDesenFlag;//": "0"


@property (nonatomic,strong)NSString *wxExternalUserId;//": "",
//@property (nonatomic,strong)NSString *customField6": "{\"id\":\"670669953641660\",\"value\":\"123\"}",
//@property (nonatomic,strong)NSString *customField7": "{\"id\":\"670670143367573\",\"value\":\"选项2\"}",
@property (nonatomic,strong)NSString *wxBuildUnionId;//": "",
@property (nonatomic,strong)NSString *wxThirdExternalUserId;//": "",

@property (nonatomic,strong)NSString *liableDepartmentId;//": "",
@property (nonatomic,strong)NSString *blackEndTime;//": "0",
@property (nonatomic,strong)NSString *liableServiceId;//
@property (nonatomic,strong)NSString *groupChatName;//": "",
@property (nonatomic,strong)NSString *qq;//
@property (nonatomic,strong)NSString *blackType;//": "0",
@property (nonatomic,strong)NSString *externalUserType;//": "0",
@property (nonatomic,strong)NSString *helperServiceName;//

@property (nonatomic,strong)NSMutableDictionary *extendFields;

@property(nonatomic,assign)BOOL checked;

-(void)setSourceNameFromSource;
@end

NS_ASSUME_NONNULL_END
