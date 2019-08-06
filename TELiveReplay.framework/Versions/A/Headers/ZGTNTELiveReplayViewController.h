//
//  TELiveReplayViewController.h
//  TELiveClass
//
//  Created by offcnitc_xt on 2018/4/16.
//  Copyright © 2018年 offcn_c. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZGTNTELiveReplayViewController : UIViewController

@property (nonatomic, assign) BOOL isCache;//是否缓存
/**
 *如果缓存需要传入缓存播放地址 前提WebSever启用 具体使用参考cocoaHttpserver 或者GCDwebServer
 *缓存的地址 127.0.0.1:8080/Downloads/22_22.m3u8
 */
@property (nonatomic, copy) NSString *videoUrl;

/**
 *json文件的保存路径
 *用于读取部分命令文件
 */
@property (nonatomic, copy) NSString *pathStr;
//是否启用默认的webServer
@property (nonatomic, assign) BOOL isRunningServer;

/**
 *lessonId: 必传参数 课件ID<br>
 *courseId: 必传参数 课程ID<br>
 *deviceId: 必传参数 鉴权使用
 *sessionId: 必传参数 鉴权使用
 *title: 可选参数 回放标题不传显示“默认标题”<br>
 */
- (instancetype)initWithLessonId:(NSString *)lessonId WithCouseId:(NSString *)courseId WithDeviceId:(NSString *)deviceId WithSessionId:(NSString *)sessionId WithRoomTitle:(NSString *)title;
@end
