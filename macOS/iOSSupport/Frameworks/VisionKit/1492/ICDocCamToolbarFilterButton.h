//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface ICDocCamToolbarFilterButton : UIButton
{
    BOOL _compact;
    BOOL _myHighlighted;
    CAShapeLayer *_maskLayer;
    struct CGRect _currentBounds;
}

+ (id)buttonWithType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) BOOL myHighlighted; // @synthesize myHighlighted=_myHighlighted;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(nonatomic) BOOL compact; // @synthesize compact=_compact;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredTintColor;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateInvertedImage;
- (void)layoutSubviews;
- (void)postButtonWithTypeInit;
- (void)setDarkenedTintColor:(id)arg1;
- (id)darkenedTintColor;
- (void)setDefaultTintColor:(id)arg1;
- (id)defaultTintColor;

@end

