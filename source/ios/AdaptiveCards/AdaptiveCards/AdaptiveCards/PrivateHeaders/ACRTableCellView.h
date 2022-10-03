//
//  ACRTableCell.h
//  ACRTableCell
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRContentStackView.h"
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRContentStackView.h>
#import <AdaptiveCards/ACRView.h>
#endif
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ACRTableCellDefinition : NSObject

@property ACRContainerStyle style;
@property ACRVerticalContentAlignment verticalAlignment;
@property ACRHorizontalAlignment horizontalAlignment;
@property CGFloat cellSpacing;

@end

@interface ACRTableCellView : ACRColumnView

- (instancetype)init:(ACOBaseCardElement *)baseCardElement
      cellDefinition:(ACRTableCellDefinition *)definition
            rootView:(ACRView *)rootView
              inputs:(NSMutableArray *)inputs
          hostConfig:(ACOHostConfig *)acoConfig;
@end

NS_ASSUME_NONNULL_END
