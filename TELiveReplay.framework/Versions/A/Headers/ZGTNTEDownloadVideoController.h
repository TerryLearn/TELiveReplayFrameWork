//
//  TEDownloadVideoController.h
//  TELiveClass
//
//  Created by offcnitc_xt on 2017/10/23.
//  Copyright © 2017年 offcn_c. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ZGTNTEVideoRecordModel;

@interface ZGTNTEDownloadVideoController : UIViewController

@property (nonatomic, copy) NSString *urlString;
@property (nonatomic, strong) ZGTNTEVideoRecordModel *recordModel;
@end
