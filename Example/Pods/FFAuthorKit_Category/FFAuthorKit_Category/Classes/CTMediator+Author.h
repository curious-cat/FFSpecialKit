//
//  CTMediator+Author.h
//  FFAuthorKit_Category
//
//  Created by curious_cat on 2017/12/13.
//

#import <CTMediator/CTMediator.h>

#import <FFAPIsKit/APIRequest.h>
@interface CTMediator (Author)

- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;

@end
