//
//  CorePlotTestAppDelegate.h
//  CorePlotTest
//

#import <UIKit/UIKit.h>

@class CorePlotTestViewController;

@interface CorePlotTestAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    CorePlotTestViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet CorePlotTestViewController *viewController;

@end

