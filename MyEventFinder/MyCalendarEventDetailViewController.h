//
//  MyCalendarEventDetailViewController.h
//  CampusConqueror
//
//  Created by Guo Xiaoyu on 11/15/15.
//  Copyright © 2015 Xiaoyu Guo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyEventInfo.h"

@interface MyCalendarEventDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIScrollView *scroller;
@property (weak, nonatomic) IBOutlet UIView *mapViewContainer;
@property (weak, nonatomic) IBOutlet UIScrollView *imgviewOfEvent;
@property (weak, nonatomic) IBOutlet UIImageView *authorProfileImg;
@property (weak, nonatomic) IBOutlet UILabel *timeOfPost;
@property (weak, nonatomic) IBOutlet UILabel *nameOfEvent;
@property (weak, nonatomic) IBOutlet UILabel *authorOfEvent;
@property (weak, nonatomic) IBOutlet UILabel *tagOfEvent;
@property (weak, nonatomic) IBOutlet UILabel *locationOfEvent;
@property (weak, nonatomic) IBOutlet UILabel *startingTime;
@property (weak, nonatomic) IBOutlet UILabel *endingTime;
@property (weak, nonatomic) IBOutlet UITextView *introOfEvent;

@property (nonatomic, strong) MyEventInfo *event;


@end
