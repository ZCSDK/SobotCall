//
//  SobotUCenterMergeBaseController.h
//  SobotUserCenter
//
//  Created by zhangxy on 2024/5/13.
//

#import <SobotCommon/SobotCommon.h>
#import <SobotUserCenter/SobotUserCenterDefines.h>
#import <SobotUserCenter/SobotUserEntity.h>

NS_ASSUME_NONNULL_BEGIN

@interface SobotUCenterMergeBaseController : SobotBaseController

// 从那个记录过来的(编辑或新增)
@property (nonatomic, strong) SobotUserEntity *editModel;
// 编辑或新增页面的保存内容
@property (nonatomic, strong) NSMutableDictionary *saveParams;

// 当前要合并到那个记录上
@property (nonatomic, strong) SobotUserEntity *mergeModel;

@property (nonatomic, strong)  void(^MergeSaveResult) (SobotUserEntity *model);


@property (nonatomic,strong) UIView *sView;
@property (nonatomic,strong) UITableView *listTable;

@property(nonatomic,strong) NSMutableArray *listArray;

@property(nonatomic,strong) UILabel *labTipsMessage;
@property(nonatomic,strong) SobotButton *btnCancel;
@property(nonatomic,strong) SobotButton *btnConfirm;


-(void)btmButtonClick:(SobotButton *) sender;

-(void)doMerge:(SobotUserEntity *) model;

@end

NS_ASSUME_NONNULL_END
