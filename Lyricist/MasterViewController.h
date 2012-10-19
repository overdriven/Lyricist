//
//  MasterViewController.h
//  Lyricist
//
//  Created by Gerald Patterson on 10/19/12.
//  Copyright (c) 2012 Gerald Patterson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
