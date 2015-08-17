//
//  SGSpaceImageViewController.h
//  Out of this World
//
//  Created by Jason Williams on 2015-08-17.
//  Copyright (c) 2015 Screaming Goat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SGOWSpaceObject.h"

@interface SGSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) SGOWSpaceObject *spaceObject;


@end
