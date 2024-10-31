//
//  SobotUserCusFieldConfigModel.h
//  SobotUserCenter
//
//  Created by zhangxy on 2024/5/10.
//

#import <SobotCommon/SobotCommon.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotUserCusFieldConfigModel : SobotBaseEntity


//field_type ：1 单行文本 2 多行文本 3 日期 4 时间 5 数值 6 下拉列表 7 复选框 8 单选框 9 级联字段
//fill_flag：是否必填 0 否 1 是
//field_remark：字段描述
//field_name：字段标题

@property (nonatomic,strong) NSString * text;// 男

@property (nonatomic,strong) NSString * value;// 1

@property (nonatomic,strong) NSString * title;// 性别


@property (nonatomic,strong) NSString * companyId;

@property (nonatomic,strong) NSString * fieldId;    // 自定义字段ID

@property (nonatomic,strong) NSString * fieldName;  // 自定义字段昵称
// 临时数据
@property (nonatomic,strong) NSString * fieldValue;  // 自定义字段显示值
@property (nonatomic,strong) NSString * fieldSaveValue;  // 自定义字段上传值

// 1禁止输入空格   2 禁止输入小数点  3 小数点后只允许2位  4 禁止输入特殊字符  5只允许输入数字 6最多允许输入字符  7判断邮箱格式  8判断手机格式
@property (nonatomic,strong) NSString * limitOptions;
@property (nonatomic,strong) NSString * limitChar;

@property (nonatomic,strong) NSString * fieldRemark;

@property (nonatomic,strong) NSString * fieldStatus;

@property (nonatomic,strong) NSString * fieldType;

@property (nonatomic,strong) NSString * fieldVariable;

@property (nonatomic,strong) NSString * fillFlag;

@property (nonatomic,strong) NSString * openFlag;

@property (nonatomic,strong) NSString * operateType;

@property (nonatomic,strong) NSString * sortNo;

@property (nonatomic,strong) NSString * workShowFlag;

@property (nonatomic,strong) NSString * workSortNo;




@property (nonatomic,strong) NSMutableArray * cusFieldDataInfoListArr;// 多选，下拉列表字段存储

@property (nonatomic,copy) NSString * tempOpenFlag;// 工单分类模板中是否开启当前字段

// queryFlag 下拉列表字段 是否开启模糊收索 在新建工单和编辑工单使用   0和1
@property (nonatomic,assign) int  queryFlag;

// 表单型组合字段
@property (nonatomic,strong) NSMutableArray * combinFormFieldListArr;

// 级别 最多三级
@property (nonatomic,assign) int  fieldLevel;

// 重新封装数据，用于存放 动态添加的 组合表单
//@property (nonatomic,strong) ZCCombinListModel * comBinModel;

// 存放组合字段的数据
@property (nonatomic,strong) NSMutableArray * comBinArr;

// "operateUnitId1":"ab963e2f90ae414f8c691efeb0ee8a15",
// "operateUnitId2":"8cc4f24d0a6742a0ba5eea31d0b8594e",
//"computedUnit":2,   1 相加  2 相乘
@property (nonatomic,copy) NSString * operateUnitId1;

@property (nonatomic,copy) NSString * operateUnitId2;

@property (nonatomic,assign) int  computedUnit;

//@property (nonatomic,strong) ZCCombinListModel * clearComModel;// 空model，用于增加新数据。
@property (nonatomic,strong) NSDictionary * clearComDict;// 空model，用于增加新数据。

@property (nonatomic,assign) CGFloat  reultNum; // 合计的值


@property (nonatomic,copy) NSString * dataID;// 级联字段 查询下一级用参数

@property (nonatomic,copy) NSString * relatedField;// 级联字段的id 同上一级的fieldID 相同

@property (nonatomic,copy) NSString * summary; // 和值 【xxx】[xxx] 合计：88

@property (nonatomic,assign) int  relatedFlag;// 是否开启 关联赋值  1 开启 0 关闭

@property (nonatomic,copy) NSString * numerical;// 2级 3级 级联字段 的影藏赋值 关联赋值

@property (nonatomic,copy) NSString * optionValue;// 1级分类中 关联赋值

@property (nonatomic,assign) int numericalFlag;// 是否开启合计 0 关闭 1 开启


@property (nonatomic,assign) int authStatus;// 1可读写 2可读 3不可见


@property (nonatomic,assign) BOOL isChecked;// 1可读写 2可读 3不可见


@property (nonatomic,assign) int isRequired;
@property (nonatomic,strong) NSString * templateFieldId;

@property (nonatomic,strong) NSString *fieldText;// 下拉列表和级联使用
@property (nonatomic,assign) int delFields;// 1，已删除字段
@property (nonatomic,assign) int delOptions;// 1，已删除选项

@end

@interface SobotUserCusFieldDataInfoListModel : SobotBaseEntity

@property (nonatomic,strong) NSString * text;// 男

@property (nonatomic,strong) NSString * value;// 1

@property (nonatomic,strong) NSString * title;// 性别

@property (nonatomic,strong) NSString * limitOptions;
@property (nonatomic,strong) NSString * companyId;
@property (nonatomic,strong) NSString * createId;
@property (nonatomic,strong) NSString * createTime;
@property (nonatomic,strong) NSString * dataId;
@property (nonatomic,strong) NSString * dataName;  // 多选字段名称
@property (nonatomic,strong) NSString * dataStatus;
@property (nonatomic,strong) NSString * dataValue;
@property (nonatomic,strong) NSString * fieldId;
@property (nonatomic,strong) NSString * fieldVariable;
@property (nonatomic,strong) NSString * parentDataId;
@property (nonatomic,strong) NSString * updateId;
@property (nonatomic,strong) NSString * updateTime;
@property (nonatomic,assign) BOOL isChecked;
@property (nonatomic,copy) NSString * numerical;// 2级 3级 级联字段 的影藏赋值 关联赋值
@property (nonatomic,copy) NSString * optionValue;// 1 级 分类中关联赋值
@property (nonatomic,copy) NSString * levelid; // 组合字段中的级联字段 赋值id 提交接口用
@end



@interface SobotUserCombinListModel : SobotBaseEntity
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

@property (nonatomic,strong) NSString * openFlag;

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


@end


/// 状态和选项字段
@interface SobotUserCusFieldStatusEntity : SobotBaseEntity

// 状态
//"dictCode": "1009",
//"dictId": "28",
//"dictName": "尚未受理",
//"dictRemark": "工单信息表：工单状态",
//"dictValue": "0"
@property (nonatomic,copy) NSString * dictCode;
@property (nonatomic,copy) NSString * dictId;
@property (nonatomic,copy) NSString * dictName;
@property (nonatomic,copy) NSString * dictRemark;
@property (nonatomic,copy) NSString * dictValue;


@property (nonatomic,assign) BOOL isChecked;

// 选项
//"dataId": "73f6eb5979c9432f84b5025152b861a5",
//"dataName": "选项2",
//"dataValue": "500965658663721",
//"fieldId": "3f36765a1ab9473c8c386475b5656df8",
//"parentDataId": "0"

@property (nonatomic,copy) NSString * dataId;
@property (nonatomic,copy) NSString * dataName;
@property (nonatomic,copy) NSString * dataValue;
@property (nonatomic,copy) NSString * fieldId;
@property (nonatomic,copy) NSString * optionValue;
@property (nonatomic,copy) NSString * parentDataId;
@property (nonatomic,copy) NSString * levelid; // 组合字段中的级联字段 赋值id 提交接口用
@property (nonatomic,copy) NSString * numerical;// 2级 3级 级联字段 的影藏赋值 关联赋值
// 模板对象
//"companyId": "4a8a494170484b748f743dd6326d7119",
//"createServiceId": "ec25de83d8fc4043931ebba34e0ff8d1",
//"createServiceName": "Shannon,Zh",
//"createServiceTime": 1530859045,
//"isDefaultTemplate": 2,
//"status": 1,
//"templateDesc": "其中字段均为默认字段",
//"templateId": "07896c852a154e29a53bde744c9bb3b6",
//"templateName": "默认模板",
//"updateServiceId": "ec25de83d8fc4043931ebba34e0ff8d1",
//"updateServiceName": "Shannon,Zh",
//"updateServiceTime": 1530859045
@property (nonatomic,copy) NSString *companyId;
@property (nonatomic,copy) NSString *createServiceId;
@property (nonatomic,copy) NSString *createServiceName;
@property (nonatomic,copy) NSString *createServiceTime;
@property (nonatomic,copy) NSString *isDefaultTemplate;
@property (nonatomic,copy) NSString *status;
@property (nonatomic,copy) NSString *templateDesc;
@property (nonatomic,copy) NSString *templateId;
@property (nonatomic,copy) NSString *templateName;
@property (nonatomic,copy) NSString *updateServiceId;
@property (nonatomic,copy) NSString *updateServiceTime;

@end

NS_ASSUME_NONNULL_END
