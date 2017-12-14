//
//  UIImage+Special.h
//  Pods
//
//  Created by curious_cat on 2017/12/14.
//

#import <UIKit/UIKit.h>

@interface UIImage (Special)
+ (instancetype)ff_imagePathWithName:(NSString *)imageName bundle:(NSString *)bundle targetClass:(Class)targetClass;
@end
