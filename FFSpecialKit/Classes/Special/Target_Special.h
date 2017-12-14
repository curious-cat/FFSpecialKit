//
//  Target_Special.h
//  Pods
//
//  Created by curious_cat on 2017/12/13.
//

#import <Foundation/Foundation.h>
#import "FFSpecialKit.h"

@interface Target_Special : NSObject

- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;

- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;

- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;

- (APIRequest*)Action_specialAPIRequest:(NSDictionary*)params;


@end
