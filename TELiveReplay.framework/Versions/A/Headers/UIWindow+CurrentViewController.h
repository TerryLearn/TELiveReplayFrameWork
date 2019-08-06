

#import <UIKit/UIKit.h>

@interface UIWindow (CurrentViewController)

/*!
 @method currentViewController
 
 @return Returns the topViewController in stack of topMostController.
 */
+ (UIViewController*)zf_currentViewController;
@end
