//
//  DeviceDetailsSliderCell.h
//  UIKitDemo
//
//  Created by shaolong0703@163.com on 2019/2/21.
//  Copyright © 2019 shaolong0703@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface DeviceDetailsSliderCell : UITableViewCell
@property (nonatomic, strong)   UISlider    *slider;
@property (nonatomic)           NSString    *title;
@end

NS_ASSUME_NONNULL_END
