//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreChart/CCVegaSingleItemShapeMarkDef.h>

@class NSString;

@interface CCVegaPathMarkDef : CCVegaSingleItemShapeMarkDef
{
    NSString *_cachedPathDef;
    struct CGPath *_cachedPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct CATransform3D)transformForMark:(id)arg1;
- (struct CGPath *)newPathForMark:(id)arg1;

@end

