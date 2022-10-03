//
//  ACRSeparator.h
//  ADCIOSFramework
//
//  Copyright © 2017 Microsoft. All rights reserved.
//
#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRContentStackView.h"
#import "ACRIContentHoldingView.h"
#import "HostConfig.h"
#import "SharedAdaptiveCard.h"
#else
#import <AdaptiveCards/ACRContentStackView.h>
#import <AdaptiveCards/ACRIContentHoldingView.h>
#import <AdaptiveCards/HostConfig.h>
#import <AdaptiveCards/SharedAdaptiveCard.h>
#endif
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ACRSeparator : UIView

@property BOOL isVisibilityObserved;

+ (ACRSeparator *)renderSeparation:(std::shared_ptr<AdaptiveCards::BaseCardElement> const &)elem
                      forSuperview:(UIView *)view
                    withHostConfig:(std::shared_ptr<AdaptiveCards::HostConfig> const &)config;

+ (void)renderActionsSeparator:(UIView *)view
                    hostConfig:(std::shared_ptr<AdaptiveCards::HostConfig> const &)config;

+ (void)renderSeparationWithFrame:(CGRect)frame
                        superview:(UIView<ACRIContentHoldingView> *)superview
                             axis:(UILayoutConstraintAxis)huggingAxis;

- (NSLayoutConstraint *)configAutoLayout:(UIView *)superview
                              havingAxis:(UILayoutConstraintAxis)superviewAxis
                                  toAxis:(UILayoutConstraintAxis)huggingAxis;

@end
