//
//  GZZCalendarTool.h
//  GZZCalendarTool
//
//  Created by Jonzzs on 11/01/2018.
//  Copyright (c) 2018 Jonzzs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GZZCalendarTool : NSObject

/**
 获取节日
 
 @param date 日期
 @return 节日
 */
+ (nullable NSString *)holidayFromDate:(NSDate *)date;

/**
 获取阴历日期
 
 @param date 日期
 @return 阴历
 */
+ (nullable NSString *)lunarFromDate:(NSDate *)date;

/**
 获取二十四节气
 
 @param date 日期
 @return 节气
 */
+ (nullable NSString *)solarTermFromDate:(NSDate *)date;

@end
