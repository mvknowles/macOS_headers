//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface TSCHMacTableShadowView : NSView
{
    int mLocation;
    struct CGPoint mTableOffset;
    double mTopShadowHeight;
    double mLeftShadowWidth;
}

+ (double)shadowWidth;
@property(nonatomic) struct CGPoint tableOffset; // @synthesize tableOffset=mTableOffset;
- (void)drawRect:(struct CGRect)arg1;
- (id)p_shadowImageForLocation:(int)arg1;
- (double)p_leftShadowWidth;
- (double)p_topShadowHeight;
- (BOOL)isFlipped;
- (id)initWithLocation:(int)arg1;

@end

