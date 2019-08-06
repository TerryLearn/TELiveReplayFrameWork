//
//  RightVolumeView.h
//  NetSchool
//
//  Created by mac on 16/5/30.
//  Copyright © 2016年 offcn. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol RightVolumeViewDelegate <NSObject>

- (void)volumeSliderIsDraging:(CGFloat)percentValue;
- (void)volumeSliderDragEnd:(CGFloat)percentValue;

@end

@interface ZGTNRightVolumeView : UIView

@property(nonatomic,assign) id <RightVolumeViewDelegate> delegate;
@property(nonatomic,strong) UISlider *percentSlider;

@end
