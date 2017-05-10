//
//  Target_HomeMain.h
//  ShonemeHomeModule
//
/*
    params
    key => key //key的取名 是 key
    value = >anything
 */


//  Created by 薛坤龙 on 2017/5/10.
//  Copyright © 2017年 xm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Target_HomeMain : NSObject

//去model化
- (UIViewController *)Action_viewControllerWithDic:(NSDictionary *)params;

@end
