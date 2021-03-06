//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSDictionary, NSGradient;

@interface AMActionShowWhenRunOverlayView : NSView
{
    NSButton *_button;
    NSDictionary *_showWhenRunItemDictionary;
    NSGradient *_gradient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSGradient *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
@property(retain) NSDictionary *showWhenRunItemDictionary; // @synthesize showWhenRunItemDictionary=_showWhenRunItemDictionary;
- (void)drawRect:(struct CGRect)arg1;
- (void)selectedChanged:(id)arg1;
- (void)viewDidMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

