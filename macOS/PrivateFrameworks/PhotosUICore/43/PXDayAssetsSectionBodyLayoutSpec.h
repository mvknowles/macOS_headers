//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec
{
    long long _numberOfColumns;
    double _interitemSpacing;
    CDStruct_2bd92d94 _bodyCornerRadius;
}

@property(readonly, nonatomic) CDStruct_2bd92d94 bodyCornerRadius; // @synthesize bodyCornerRadius=_bodyCornerRadius;
@property(readonly, nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(readonly, nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end

