//
//  JFStatusCell.h
//  JFQiXin
//
//  Created by jianfanglin on 15/12/30.
//  Copyright © 2015年 JF. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JFStatusFrame;
@interface JFStatusCell : UITableViewCell
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@property (nonatomic, strong) JFStatusFrame *statusFrame;

@end
