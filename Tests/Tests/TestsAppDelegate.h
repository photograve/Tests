//
//  TestsAppDelegate.h
//  Tests
//
//  Created by Gabriel Bremond on 09/06/11.
//  Copyright 2011 Missler Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestsViewController;

@interface TestsAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestsViewController *viewController;

@end
