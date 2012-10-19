//
//  CG_TestViewController.m
//  CG Test
//
//  Created by jeff on 5/17/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "CG_TestViewController.h"

@implementation CG_TestViewController
@synthesize blackButton;
@synthesize whiteButton;
@synthesize alertButton;
@synthesize orangeButton;
@synthesize redButton;
@synthesize greenButton;
@synthesize blackActionButton;
@synthesize whiteActionButton;
- (void)viewDidLoad
{
    [blackButton useBlackStyle];
    [whiteButton useWhiteStyle];
    [alertButton useAlertStyle];
    [orangeButton useSimpleOrangeStyle];
    [redButton useRedDeleteStyle];
    [greenButton useGreenConfirmStyle];
    [whiteActionButton useWhiteActionSheetStyle];
    [blackActionButton useBlackActionSheetStyle];
}


@end
