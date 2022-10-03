//
//  ACRImageSetUICollectionViewController
//  ACRImageSetUICollectionViewController.h
//  ADCIOSFramework
//
//  Copyright © 2017 Microsoft. All rights reserved.
//
#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRView.h"
#import "HostConfig.h"
#import "ImageSet.h"
#import "SharedAdaptiveCard.h"
#else
#import <AdaptiveCards/ACRView.h>
#import <AdaptiveCards/HostConfig.h>
#import <AdaptiveCards/ImageSet.h>
#import <AdaptiveCards/SharedAdaptiveCard.h>
#endif
#import <UIKit/UIKit.h>

@interface ACRImageSetUICollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (instancetype)init:(std::shared_ptr<AdaptiveCards::ImageSet> const &)imageSet
      WithHostConfig:(ACOHostConfig *)hostConfig
       WithSuperview:(UIView *)superview
            rootView:(ACRView *)rootView;
@end
