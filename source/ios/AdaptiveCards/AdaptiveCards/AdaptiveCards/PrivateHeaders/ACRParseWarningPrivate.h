//
//  ACRParseWarningPrivate
//  ACRParseWarningPrivate.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRParseWarning.h"
#import "AdaptiveCardParseWarning.h"
#else
#import <AdaptiveCards/ACRParseWarning.h>
#import <AdaptiveCards/AdaptiveCardParseWarning.h>
#endif
#import <Foundation/Foundation.h>

@interface ACRParseWarning ()

- (instancetype)initWithParseWarning:(std::shared_ptr<AdaptiveCards::AdaptiveCardParseWarning> const &)parseWarning;

@end
