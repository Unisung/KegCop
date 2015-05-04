//
//  ViewControllerCalibrate.h
//  KegCop
//
//  Created by capin on 4/27/15.
//
//

#import <UIKit/UIKit.h>
#import "removeCalibrateProtocol.h"

@protocol ViewControllerCalibrateDelegate;
@protocol ViewControllerCalibrateDelegate <NSObject> // Don\t need any of this I made new protocol
- (void) removeCalibrateView;
@end

@interface ViewControllerCalibrate : UIViewController <removeCalibrateProtocol>
//@property (nonatomic, weak) id<ViewControllerCalibrateDelegate> delegate; NOT HERE
@end
