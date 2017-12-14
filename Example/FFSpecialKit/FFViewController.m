//
//  FFViewController.m
//  FFSpecialKit
//
//  Created by 842373586@qq.com on 12/13/2017.
//  Copyright (c) 2017 842373586@qq.com. All rights reserved.
//

#import "FFViewController.h"
#import <FFSpecialKit/FFSpecialKit.h>
#import "FFSpecialController.h"
@interface FFViewController ()

@end

@implementation FFViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
}


- (IBAction)specialVC:(id)sender {
    
    FFSpecialController *specialVC =  [[FFSpecialController alloc] init];
    [self.navigationController pushViewController:specialVC animated:YES];
    
}




- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
