//
//  SobotLayoutTools.h
//  SobotOrderSDK
//
//  Created by zhangxy on 2022/3/21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIkit.h>

NS_ASSUME_NONNULL_BEGIN

//第一个参数 view1: 要设置的视图；
//第二个参数 attr1: view1要设置的属性，稍后详解；
//第三个参数 relation: 视图view1和view2的指定属性之间的关系，稍后详解；
//第四个参数 view2: 参照的视图；
//第五个参数 attr2: 参照视图view2的属性，稍后详解；
//第六个参数 multiplier: 视图view1的指定属性是参照视图view2制定属性的多少倍；
//第七个参数 c: 视图view1的指定属性需要加的浮点数。
//根据参数的讲解，得出计算公式如下：
//view1.attr1 [=GreaterThan , >= , <=LessThan] view2.attr2 * multiplier + c;
// Leading 首部
// Trailing 尾部
// Baseline 文本底部标线
// right/bottom/Trailing
@interface SobotLayoutTools : NSObject

/// 设置位置、宽高属性、x、y坐标
/// @param value 具体的值
/// @param view 当前要设置的view
/// @param otherView 相对的view，如果是宽、高，可以为空
/// @param attribute 当前的属性
/// @param otherAttribute 对方属性
/// @param relation  关系：大于、小于、等于
NSLayoutConstraint *sobotLayoutRelationAttribute(float value,UIView *view,UIView * _Nullable otherView,NSLayoutAttribute attribute,NSLayoutAttribute otherAttribute,NSLayoutRelation relation);


/// 设置View的宽，高
/// @param width 宽
/// @param height 高
/// @param view 要设置的View
/// @param relation 关系：>=、<=、=
NSArray *sobotLayoutSize(float width,float height,UIView *view,NSLayoutRelation relation);
NSLayoutConstraint *sobotLayoutEqualWidth(float width,UIView *view,NSLayoutRelation relation);
NSLayoutConstraint *sobotLayoutEqualHeight(float height,UIView *view,NSLayoutRelation relation);

/// 和父类等宽，width是0，否则是相对于父类左右的间隔
/// @param width 间隔，默认左右相等
/// @param view 自己
/// @param superView 所在的父类
NSArray *sobotLayoutEqualWidthView(float width,UIView *view,UIView *superView);

/// 控件上、下、左、右的距离
/// @param top 上
/// @param bottom 下,注意需要是负数，例如-50
/// @param left 坐
/// @param right 右,注意需要是负数，例如-50
/// @param view 当前布局的控件
/// @param superView 当前相对控件，注意sub和sup的区别,super的时候是负数，其它情况正常
NSArray *sobotLayoutPaddingView(float top,float bottom,float left,float right,UIView *view,UIView *superView);
NSArray *sobotLayoutPaddingWithAll(float top,float bottom,float left,float right,UIView *view,UIView *superView);
NSArray *sobotLayoutMarginView(float top,float bottom,float left,float right,UIView *view,UIView *otherView);
NSArray *sobotLayoutMarginWithAll(float top,float bottom,float left,float right,UIView *view,UIView *otherView);



/// 注意right和bottom要设置负数
/// @param top 距离，0也添加
/// @param view 自己
/// @param superView 相对父类
NSLayoutConstraint *sobotLayoutPaddingTop(float top,UIView *view,UIView *superView);
NSLayoutConstraint *sobotLayoutPaddingBottom(float bottom,UIView *view,UIView *superView);
NSLayoutConstraint *sobotLayoutPaddingLeft(float left,UIView *view,UIView *superView);
NSLayoutConstraint *sobotLayoutPaddingRight(float right,UIView *view,UIView *superView);

/// 注意right和bottom要设置负数
/// @param top 距离，0也添加
/// @param view 自己
/// @param otherView 相对同级别
NSLayoutConstraint *sobotLayoutMarginTop(float top,UIView *view,UIView *otherView);
NSLayoutConstraint *sobotLayoutMarginBottom(float bottom,UIView *view,UIView *otherView);
NSLayoutConstraint *sobotLayoutMarginLeft(float left,UIView *view,UIView *otherView);
NSLayoutConstraint *sobotLayoutMarginRight(float right,UIView *view,UIView *otherView);


/// 水平相同布局,平均所有控件，即childViews.width=view
/// @param space 各个控件中的间隔
/// @param view 第一个控件
/// @param childViews 所有子控件，不包含第一个
NSArray *sobotLayoutEqualWidthSubView(float space,UIView *view,NSArray *childViews);



/// 中心点对齐
/// @param centerX x坐标 centerY y坐标
/// @param view 当前view
/// @param otherView 相对view，注意此处是同级view
NSLayoutConstraint *sobotLayoutEqualCenterX(CGFloat centerX,UIView *view,UIView *otherView);
NSLayoutConstraint *sobotLayoutEqualCenterY(CGFloat centerY,UIView *view,UIView *otherView);


/// 水平、垂直布局
/// @param space 间隔
/// @param view 第一个view，childViews中不要包含第一个
/// @param childViews 所有需要布局的view，不要包含第一个
NSArray *sobotLayoutHorizontalSpaces(float space,UIView *view,NSArray *childViews);
NSArray *sobotLayoutVerticalSpace(float space,UIView *view,NSArray *childViews);



/// 修改约束，其实就是重新设置，后面设置的会覆盖之前的设置
/// @param view 当前view
/// @param topView 相对view
/// @param constant 新的约束值
NSLayoutConstraint *sobotLayoutUpdateVerticalDistanceTop(UIView *view,UIView *topView,float constant);
NSLayoutConstraint *sobotLayoutUpdateVerticalDistanceBottom(UIView *view,UIView *bottomView,float constant);
NSLayoutConstraint *sobotLayoutUpdateViewHeight(UIView *view,float constant);
NSLayoutConstraint *sobotLayoutUpdateViewWidth(UIView *view,float constant);

@end

NS_ASSUME_NONNULL_END
