//
//  ACOBaseCardElementPrivate
//  ACOBaseCardElementPrivate.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//
#ifdef USE_AC_SWIFT_PACKAGE
#import "ACOBaseCardElement.h"
#import "BaseCardElement.h"
#else
#import <AdaptiveCards/ACOBaseCardElement.h>
#import <AdaptiveCards/BaseCardElement.h>
#endif

using namespace AdaptiveCards;

@interface ACOBaseCardElement ()

- (instancetype)initWithBaseCardElement:(std::shared_ptr<BaseCardElement> const &)element;
- (std::shared_ptr<BaseCardElement>)element;
- (void)setElem:(std::shared_ptr<BaseCardElement> const &)elem;

@end
