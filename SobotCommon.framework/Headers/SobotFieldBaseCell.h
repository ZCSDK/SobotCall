//
//  SobotFieldBaseCell.h
//  SobotCommon
//
//  Created by zhangxy on 2024/1/9.
//

#import <UIKit/UIKit.h>
#import <SobotCommon/SobotBaseEntity.h>

NS_ASSUME_NONNULL_BEGIN

// 属性字段定义 keys
typedef NSString *SobotFieldPropertiesKey NS_STRING_ENUM;
// 编号
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyCode  = @"code";

// 对应标签，如uname
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyTagName  = @"tagName";
// 标签显示，如uname，对应的用户名称
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyTagDesc  = @"tagDesc";
// value缺损值
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyPlaceholder  = @"placeholder";
// 当前value
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyValue  = @"dictValue";
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyValueData  = @"dictValueData";
// 当前数据类型
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyType  = @"fieldType";
// 当前属性限制信息
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyLimitOptions  = @"limitOptions";
// 当前属性限制信息Char
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyLimitChar  = @"limitChar";
// 当前属性来源
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeySource  = @"fieldSource";
// 当前属性对应其他关联id
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyFieldId  = @"fieldId";
// 当前属性关联的实体
static SobotFieldPropertiesKey const _Nullable SobotFieldPropertiesKeyEntity  = @"referenceEntity";

// 属性来源
typedef NS_ENUM(NSInteger,SobotFieldSource) {
    SobotFieldSourceDefault = 0,    // 默认
    SobotFieldSourceCusFields = 1,  // 字段
    SobotFieldSourceAdd = 2,        // 动态添加
    SobotFieldSourceOnlyDisplay,        // 固定字段，仅显示
};


// 属性类型
// 0，特殊行   1 单行文本 2 多行文本 3 日期 4 时间 5 数值 6 下拉列表 7 复选框 8 单选框 9 级联字段
typedef NS_ENUM(NSInteger,SobotFieldType) {
    SobotFieldTypeDefault = 0,
    SobotFieldTypeSingleText = 1,
    SobotFieldTypeMulText = 2,
    SobotFieldTypeDate = 3,
    SobotFieldTypeTime = 4,
    SobotFieldTypeNumber = 5,
    SobotFieldTypeDropList = 6,
    SobotFieldTypeMulCheck = 7,
    SobotFieldTypeSingleCheck = 8,
    SobotFieldTypeCascade = 9,
};

// 限制方式  1禁止输入空格   2 禁止输入小数点  3 小数点后只允许2位  4 禁止输入特殊字符  5只允许输入数字 6最多允许输入字符  7判断邮箱格式  8判断手机格式
typedef enum SobotFieldTypeLimitType {
    SobotFieldTypeLimitTypeNoPoint  = 0,
    SobotFieldTypeLimitTypeOnlyTwo,
    SobotFieldTypeLimitTypeOther,
    SobotFieldTypeLimitTypeSpecial
} SobotFieldTypeLimitType;


@interface SobotFieldEidtEntity : SobotBaseEntity

@property(nonatomic,strong) NSString *code;
@property(nonatomic,assign) NSInteger tagIndex;
@property(nonatomic,strong) NSString *tagName;
@property(nonatomic,strong) NSString *tagDesc;
@property(nonatomic,strong) NSString *placeholder;
@property(nonatomic,strong) NSString *dictValue;
@property(nonatomic,strong) id dictValueData;
@property(nonatomic,assign) SobotFieldType fieldType;
@property(nonatomic,strong) id limitOptions; // 可能是数组
@property(nonatomic,strong) NSString *limitChar;
@property(nonatomic,assign) SobotFieldSource fieldSource;
@property(nonatomic,strong) NSString *fieldId;
@property(nonatomic,strong) id _Nullable referenceEntity;

@end

/////////////////////////////////////////////////////////////////
/// cell 内容开始
///
// 页面事件
typedef NS_ENUM(NSInteger,SobotFieldEventType) {
    SobotFieldEventTypeAddPhoto        = 1,// 添加内容图片
    SobotFieldEventTypeLookAtPhoto     = 2,// 查看大图
    SobotFieldEventTypeSingleEdit        = 3,// 单行编辑
    SobotFieldEventTypeMulEdit         = 4,// 多行编辑
    SobotFieldEventTypeDeletePhoto     = 5,// 删除文件
    SobotFieldEventTypeDeleteItem     = 6,// 删除选项
    SobotFieldEventTypeAddPhoneOrEmail     = 7,//
    SobotFieldEventTypeDelPhoneOrEmail     = 8,//
    SobotFieldEventTypeSingleEditEnd        = 9,// 单行编辑 编辑结束 失去焦点
};

@protocol SobotFieldEditCellDelegate <NSObject>
@optional
-(void)itemCreateCusCellOnClick:(SobotFieldEventType) type dictValue:(NSString * _Nonnull) value dict:(NSDictionary *_Nullable) dict indexPath:(NSIndexPath *_Nullable)indexPath;

-(void)didKeyboardWillShow:(NSIndexPath *_Nonnull)indexPath view1:(UITextView *_Nullable)textview view2:(UITextField *_Nullable) textField;

@end

@interface SobotFieldBaseCell : UITableViewCell

// 当前是否为编辑状态，与fieldType=3效果一样
@property(nonatomic,assign) BOOL isEditStatus;
@property(nonatomic,weak) id<SobotFieldEditCellDelegate> delegate;

// 多行时为上下结构，需要从新布局
@property(nonatomic,strong) NSLayoutConstraint   *layoutLabNameW;
@property(nonatomic,strong) NSLayoutConstraint   *layoutLabNameBtm;

@property (nonatomic,strong) UILabel *labelName;
@property(nonatomic,strong) UIView *lineView;// 分割线

@property(nonatomic,assign) CGFloat tableWidth;

@property(nonatomic,weak) NSIndexPath  *indexPath;

@property(nonatomic,strong) NSDictionary *tempDict;
@property(nonatomic,strong) SobotFieldEidtEntity *tempEntity;


-(void)initDataToView:(NSDictionary *) dict;
-(void)initEntityToView:(SobotFieldEidtEntity *) entity;

-(NSMutableAttributedString *)getOtherColorString:(NSString *)string Color:(UIColor *)Color withString:(NSString *)originalString;

- (NSMutableAttributedString *)getOtherColorString:(NSString *)string colorArray:(NSArray<UIColor *> *)colorArray withStringArray:(NSArray<NSString *> *)stringArray;

-(void)createItemsView;

-(void)setBgViewColor;


@end

NS_ASSUME_NONNULL_END
