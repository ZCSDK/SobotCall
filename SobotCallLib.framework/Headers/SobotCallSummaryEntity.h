//
//  SobotCallSummaryEntity.h
//  SobotCallSDK
//
//  Created by zhangxy on 2023/7/18.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallSummaryEntity : SobotBaseEntity


//@property (nonatomic, strong) UnitModel      *unitInfo;
@property (nonatomic, strong) NSMutableArray *unitTypeInfo;
@property (nonatomic, assign) int       questionStatus;
@property (nonatomic, strong) NSString  *questionRemark;
@property (nonatomic, strong) NSString  *updateTime;
@property (nonatomic, strong) NSString  *aname;
// 以下是v6版本数据
//": {
//      "operationId": null,
//      "operationName": null,
//      "guideTitle": null
//    },
@property (nonatomic, strong) NSDictionary *curOperation;
@property (nonatomic, strong) NSArray  *curReqTypeGroup;//": [],
@property (nonatomic, strong) NSString  *curQuestionStatus;//": null,
@property (nonatomic, strong) NSString  *questionMsg;//": null,
@property (nonatomic, strong) NSString  *updateServiceId;//": null,
@property (nonatomic, strong) NSString  *cid;//": "9379ade6f3da4c25a4d43747ec1bc393",
@property (nonatomic, strong) NSString  *uid;//": "1bbcd7fc75c0490284aa690effe10b5c",
@property (nonatomic, strong) NSString  *invalidSession;//": null,
@property (nonatomic, strong) NSString  *groupId;//": null,
@property (nonatomic, strong) NSString  *groupName;//": null,
@property (nonatomic, strong) NSString  *staffName;//": null,
@property (nonatomic, strong) NSArray  *fields;//": [],
@property (nonatomic, assign) int  permissionFlag;//": 1,
@property (nonatomic, assign) int  summaryHandleProgress;//": 1,
@property (nonatomic, strong) NSString  *summaryHandleProgressName;//": "123333",
@property (nonatomic, strong) NSString  *summaryHandleProgressId;//":
@property (nonatomic, strong) NSString  *summaryTemplateId;//": "1483369090904014849",
@property (nonatomic, strong) NSString  *summaryClassifyNames;//": "服务总结分类名称",
@property (nonatomic, strong) NSString  *summaryClassifyIds;//":
@property (nonatomic, strong) NSMutableArray  *summaryClassifyArr;//": "1562067290407571457",
@property (nonatomic, strong) NSString  *summaryRemark;//": "损伤情况",
@property (nonatomic, strong) NSString  *createAgentId;//": "9d4ef165e0cd40f4b1beb1cb53f53a63",
@property (nonatomic, strong) NSString  *createAgentName;//": null,
@property (nonatomic, strong) NSString  *createAgentNo;//": null,
@property (nonatomic, strong) NSString  *version;//": "1",
@property (nonatomic,assign) int sourceType;//": 0,
@property (nonatomic,copy) NSString *sourceCode;//": "",
@property (nonatomic,copy) NSString *sourceId;//": "",

//[
//     {
//       "fieldId": "4ce1a13caa5b4dd09cfe21d9b6aced6f",
//       "fieldName": "价格区间",
//       "openFlag": 1,
//       "fillFlag": 0,
//       "fieldType": 6,
//       "fieldValue": "642497435719707-1000-1999"
//     }
//   ],
@property (nonatomic, strong) NSArray  *customerFields;//":
@property (nonatomic, strong) NSString  *updateAgentId;//": "9d4ef165e0cd40f4b1beb1cb53f53a63",
@property (nonatomic, strong) NSString  *updateAgentName;//": null,
@property (nonatomic, strong) NSString  *updateAgentNo;//": null,
@property (nonatomic, strong) NSString  *createTime;//": 1666687941631,
@property (nonatomic, strong) NSString  *summaryClassifyCodes;//": "ad12345fdf",
@property (nonatomic, strong) NSString  *summaryTemplateName;//": "报修模板",
@property (nonatomic, assign) int  summaryTemplateEnabled;//": "报修模板",

@property (nonatomic, strong) NSString  *summaryCompanyId;//": "2cca7346a88a4fe4b553276dfea51f96",
@property (nonatomic, assign) int summaryNewOrOldFlag;//": 2,
@property (nonatomic, strong) NSString  *summaryClassifyPaths;//": null

@end

NS_ASSUME_NONNULL_END
