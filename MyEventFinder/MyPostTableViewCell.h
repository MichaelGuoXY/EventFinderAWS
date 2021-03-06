//
//  MyPostTableViewCell.h
//  MyEventFinder
//
//  Created by Guo Xiaoyu on 10/20/15.
//  Copyright © 2015 Xiaoyu Guo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyPostTableViewCell : UITableViewCell

@property UIImageView *imageOfEvent;
@property UILabel *lNameOfEvent;
@property UILabel *lTimeOfEvent;
@property UILabel *lDateOfEvent;
@property UILabel *lLocationOfEvent;
@property UIImageView *locationImg;
@property UIImageView *timeImg;
@property UIImageView *dateImg;
@property UIImageView *nameImg;
@property UIImageView *imageOfParticipants;

@end
