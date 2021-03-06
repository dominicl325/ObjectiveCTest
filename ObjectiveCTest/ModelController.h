//
//  ModelController.h
//  ObjectiveCTest
//
//  Created by Dominic LeBlanc on 2/2/15.
//  Copyright (c) 2015 Dominic LeBlanc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

