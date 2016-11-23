//
//  NJKWebViewProgressView.h
// iOS 7 Style WebView Progress Bar
//
//  Created by Satoshi Aasano on 11/16/13.
//  Copyright (c) 2013 Satoshi Asano. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NJKWebViewProgressView : UIView
@property (nonatomic) float progress;

@property (nonatomic) UIView *progressBarView;// 进度条
@property (nonatomic) NSTimeInterval barAnimationDuration; // default 0.27 设置进度的动画时间
@property (nonatomic) NSTimeInterval fadeAnimationDuration; // default 0.27 完成后alpha设为0的动画时间
@property (nonatomic) NSTimeInterval fadeOutDelay; // default 0.1 完成后的动画延迟开始时间

- (void)setProgress:(float)progress animated:(BOOL)animated;

@end
