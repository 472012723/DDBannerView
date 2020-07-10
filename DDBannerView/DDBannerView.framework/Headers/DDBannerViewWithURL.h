//
//  DDBannerViewWithURL.m
//  DDBanner
//
//  Created by wdd on 2020/7/10.
//  Copyright © 2020 王达达. All rights reserved.
//

#import <UIKit/UIKit.h>



@class DDBannerViewWithURL;

//定义一个协议( @protocol 协议名称 <NSObject> )
@protocol DDBannerViewWithURLDelegate <NSObject>

/**
 协议方法实现方式
 optional 可选 (默认是必须实现的)
 */
@optional

/**
 8./用来传值的协议方法

 @param bannerView 本类
 @param currentImage 传进来的当前的图片
 */
- (void)selectImage:(DDBannerViewWithURL *)bannerView currentImage:(NSInteger)currentImage;

@end//协议结束

@interface DDBannerViewWithURL : UIView


@property (nonatomic , weak) id <DDBannerViewWithURLDelegate> delegate;
/**
 销毁定时器类方法
 */
+ (void)destroyTimer;


/**
 1./声明一个自定义的构造方法 让外界的对象用来初始化bannerView
 @param frame 外界传入的frame
 @return 1
 */
- (id)initWithFrame:(CGRect)frame;

/**
 圆点 分页控件  默认颜色pageIndicatorTintColor  选中颜色currentPageIndicatorTintColor
 */
@property (nonatomic , strong) UIPageControl * mainPage;

///时间间隔 默认2秒
@property(nonatomic,assign)float IntervalTimer;

/**
更新图片
@param addImageURLArray 图片数组<NSString>
@param placeholderImage 默认图片
*/
- (void)imageURLArray:(NSMutableArray *)addImageURLArray andplaceholderImage:(NSString *)placeholderImage;


@end
