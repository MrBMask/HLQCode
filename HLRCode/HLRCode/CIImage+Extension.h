//
//  CoreImage/CoreImage.h
//  mybigbrother
//
//  Created by 郝靓 on 2018/6/12.
//  Copyright © 2018年 思能教育咨询(大连)有限公司. All rights reserved.
//

#import <CoreImage/CoreImage.h>
#import <UIKit/UIKit.h>

@interface CIImage (Extension)

- (UIImage *)createNonInterpolatedWithSize:(CGFloat)size;

@end
