//
//  ACOAuthentication
//  ACOAuthentication.h
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACOAuthCardButton.h"
#import "ACOTokenExchangeResource.h"
#else
#import <AdaptiveCards/ACOAuthCardButton.h>
#import <AdaptiveCards/ACOTokenExchangeResource.h>
#endif
#import <Foundation/Foundation.h>

@interface ACOAuthentication : NSObject

@property NSString *text;
@property NSString *connectionName;
@property ACOTokenExchangeResource *tokenExchangeResource;
@property NSArray<ACOAuthCardButton *> *buttons;

- (instancetype)init:(NSString *)text connectionName:(NSString *)connectionName tokenExchangeResource:(ACOTokenExchangeResource *)tokenExchangeResource buttons:(NSArray<ACOAuthCardButton *> *)buttons;

@end
