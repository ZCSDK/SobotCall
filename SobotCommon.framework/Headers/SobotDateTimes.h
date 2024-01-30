//
//  SobotDateTimes.h
//  SobotCommon
//
//  Created by zhangxy on 2021/8/30.
//

#import <Foundation/Foundation.h>

#define SOBOT_FORMATE_DATETIME @"YYYY-MM-dd HH:mm:ss"
#define SOBOT_FORMATE_DATETIMESSS @"YYYY-MM-dd HH:mm:ss SSS"

NS_ASSUME_NONNULL_BEGIN

@interface SobotDateTimes : NSObject


NSString *sobotGetCurrentTimes(void);

/**
 获取当前日期的字符串
 */
NSString *sobotGetCurrentDate(NSString *formate);

/**
 格式化字符串日期，如2023-11-10 10:10:10 格式化为2023-11-10 10:10
 */
NSString *sobotFormateDateString(NSString *formate,NSString *dateString);

// 几天之后
NSString *sobotBackToPassedTimeWithDaysNumber(NSInteger number,NSString *serverLocale,NSTimeZone *timeZone,NSInteger time);

NSString *sobotBackToPassedTimeWithDaysNumberNoTimeZone(NSInteger number);

/**
 *  日期格式
 *
 *  @param formate 格式
 *  @param date    要格式的日期
 *
 *  @return 格式化后的字符串
 */
NSString * sobotDateTransformString(NSString* formate,NSDate*date);
NSString * sobotDateTransformStringZone(NSString* formate,NSDate*date,NSTimeZone *timeZone);

/**
 *  longlong类型日期，转换为字符串
 *
 *  @param formate  格式
 *  @param longdate 转换的类型，主要php和java日期精确度不一样
 */
NSString * sobotLongdateTransformString(NSString* formate,long long longdate);

/**
 *  longlong类型日期，转换为字符串
 *
 *  @param formate  格式
 *  @param longdate 转换的类型，主要php和java日期精确度不一样
 *  @param timeZone  时区
 */
NSString * sobotLongdateTransformStringZone(NSString* formate,long long longdate,NSTimeZone  *timeZone);

// 时间戳转字符串
NSString* sobotTimeWithYearMonthDayCountDown(NSString *timestamp);

/**
 *  字符串转日期,指定fromate
 */
NSDate * sobotStringFormateDateFormateString(NSString * stringDate,NSString *formate);
/**
 *  字符串转日期
 */
NSDate * sobotStringFormateDate(NSString * stringDate);


/// long字符串，转日期
/// - Parameter stringDate: 时间戳
NSDate *sobotLongTimeToDate(NSString *stringDate);

/**
 *  计算日期与当前时间的差
 */
NSString *sobotIntervalSinceNow(NSString *theDate);


/**
 返回时差秒
 /60 分钟
 /3600 小时
 **/
int sobotIntervalDateSinceSimpleNow(NSString *theDate);

// 带时区的处理规则
int sobotIntervalDateSinceSimpleNowAndTimeZone(NSString *theDate,NSTimeZone *timeZone);

NSString * sobotDateTransformStringWithNSTimeZone(NSString* formate,NSDate*date,NSTimeZone *timeZone,NSInteger time);

NSDate * sobotStringFormateDateFormateStringWihtTimeZone(NSString * stringDate,NSString *formate, NSTimeZone*timeZone,NSInteger time);

NSDate * sobotStringFormateDateWithTime(NSString * stringDate,NSInteger time);

/**
 *  获取日期的年,返回哪一年
 */
NSInteger sobotGetDataYear(NSDate *date);


// 计数日期之间的差值
NSTimeInterval sobotDiffTimeSinceNow(NSString *theDate);

NSInteger sobotGetDataMonth(NSDate *date);

NSInteger sobotGetDataDay(NSDate *date);
// 获取本月第一天
NSString *sobotGetMonthBeginWith(NSString*data);

// 获取本月最后一天
NSString *sobotGetMonthEndWith(NSString*data);

// 获取上个月第一天
NSString *sobotGetLastMonthBeginWith(NSString*data);

// 获取上个月最后一天
NSString *sobotGetLastMonthEndWith(NSString*data,NSString *serverLocale);

// 通过 秒数 转换成 时：分：秒
NSString *sobotTimeFormattedShow(int totalSeconds);

// 获取本周的第一天和最后一天 传1 第一天按星期日，传2 第一天按星期日计算
NSArray *sobotGetCurrentWeekFistDayAndLastDay(NSUInteger firstWeekday,NSTimeZone *timeZone);

// 获取上周 第一天和最后一天 firstWeekday 传1 第一天按星期日，传2 第一天按星期日计算
NSArray *sobotGetLastWeekFistDayAndLastDay(NSUInteger firstWeekday, NSTimeZone*timeZone);
@end

NS_ASSUME_NONNULL_END
