//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/RolloverActionButtonTableCellView.h>

__attribute__((visibility("hidden")))
@interface SidebarTableCellView : RolloverActionButtonTableCellView
{
    BOOL _offscreenCellForMeasurements;
}

+ (double)fixedHeightOfRow;
+ (BOOL)hasVariableHeight;
@property(nonatomic, getter=isOffscreenCellForMeasurements) BOOL offscreenCellForMeasurements; // @synthesize offscreenCellForMeasurements=_offscreenCellForMeasurements;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityContents;
- (void)setAccessibilityContents:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (double)_actionButtonYOffsetWhenVerticallyCentered;
- (double)_actionButtonHorizontalMargin;
- (double)_actionButtonTopMargin;
- (BOOL)isFlipped;
@property(readonly, nonatomic) double calculatedHeightOfRow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <SidebarTableCellViewDelegate> delegate; // @dynamic delegate;

@end

