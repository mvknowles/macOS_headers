//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VCPImageQualityAnalyzer : NSObject
{
    float _qualityScore;
}

@property(readonly) float qualityScore; // @synthesize qualityScore=_qualityScore;
- (int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(CDUnknownBlockType)arg3;

@end

