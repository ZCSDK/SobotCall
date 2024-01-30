//
//  SobotCallFieldCombinListEntity.h
//  SobotCallSDK
//
//  Created by zhangxy on 2023/7/18.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotCallFieldCombinListEntity : SobotBaseEntity

@property (nonatomic,strong) NSString * companyId;

@property (nonatomic,strong) NSString * fieldId;    // 自定义字段ID

@property (nonatomic,strong) NSString * fieldName;  // 自定义字段昵称
// 临时数据
@property (nonatomic,strong) NSString * fieldValue;  // 自定义字段显示值
@property (nonatomic,strong) NSString * fieldSaveValue;  // 自定义字段上传值

@property (nonatomic,strong) NSString * fieldRemark;

@property (nonatomic,strong) NSString * fieldStatus;

@property (nonatomic,strong) NSString * fieldType;

@property (nonatomic,strong) NSString * fieldVariable;

@property (nonatomic,strong) NSString * fillFlag;

@property (nonatomic,assign) int openFlag;

@property (nonatomic,strong) NSString * operateType;

@property (nonatomic,strong) NSString * sortNo;

@property (nonatomic,strong) NSString * workShowFlag;

@property (nonatomic,strong) NSString * workSortNo;


@property (nonatomic,strong) NSString * limitOptions;




@property (nonatomic,strong) NSMutableArray * cusFieldDataInfoListArr;// 多选，下拉列表字段存储

@property (nonatomic,copy) NSString * tempOpenFlag;// 工单分类模板中是否开启当前字段

// queryFlag 下拉列表字段 是否开启模糊收索 在新建工单和编辑工单使用   0和1
@property (nonatomic,assign) int  queryFlag;

// 表单型组合字段
@property (nonatomic,strong) NSMutableArray * combinFormFieldListArr;

// 级别 最多三级
@property (nonatomic,assign) int  fieldLevel;

@property (nonatomic,strong) NSMutableArray * cusArray;// 当前model下的所有数据@【 @{combinFormField ：@{}}，@“cusFieldDataInfoList”：@【】】

@property (nonatomic,assign) BOOL isShowBtn; // 是否显示删除按钮

-(id)initWithMyDict:(NSDictionary *)dic;

-(id)initWithMyDict:(NSDictionary *)dic WithType:(int)type;

@end

NS_ASSUME_NONNULL_END
