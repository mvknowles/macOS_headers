//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNBuildActionGeometryDynamicChangeStandIn.h"

@class TSDLayoutGeometryDynamicChangeStandIn;

@interface KNBuildActionGeometryTrackerBasedDynamicChangeStandIn : KNBuildActionGeometryDynamicChangeStandIn
{
}

+ (id)keyPathsForValuesAffectingActionGeometry;
- (void)endDynamicChange;
- (void)beginDynamicChange;
@property(readonly, nonatomic) TSDLayoutGeometryDynamicChangeStandIn *ghostLayoutGeometryDynamicChangeStandIn;
- (id)actionGeometry;

@end

