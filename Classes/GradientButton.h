//
//  ButtonGradientView.h
//  Custom Alert View
//
//  Created by jeff on 5/17/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreGraphics/CoreGraphics.h>

@interface GradientButton : UIButton 

// These two arrays define the gradient that will be used
// when the button is in UIControlStateNormal
@property (nonatomic) NSArray *normalGradientColors; // Colors
@property (nonatomic) NSArray *normalGradientLocations; // Relative locations

// These two arrays define the gradient that will be used
// when the button is in UIControlStateHighlighted
@property (nonatomic) NSArray *highlightGradientColors; // Colors
@property (nonatomic) NSArray *highlightGradientLocations; // Relative locations

// This defines the corner radius of the button
@property (nonatomic) CGFloat cornerRadius;

// This defines the size and color of the stroke
@property (nonatomic) CGFloat strokeWeight;
@property (nonatomic) UIColor *strokeColor;

- (void)useAlertStyle;
- (void)useRedDeleteStyle;
- (void)useWhiteStyle;
- (void)useBlackStyle;
- (void)useWhiteActionSheetStyle;
- (void)useBlackActionSheetStyle;
- (void)useSimpleOrangeStyle;
- (void)useGreenConfirmStyle;

@end
