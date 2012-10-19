//
//  DetailViewController.h
//  Lyricist
//
//  Created by Gerald Patterson on 10/19/12.
//  Copyright (c) 2012 Gerald Patterson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
