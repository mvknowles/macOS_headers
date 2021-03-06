//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class BTTGestureDrawView, NSColor;

__attribute__((visibility("hidden")))
@interface BTTStrokeWindow : NSWindow
{
    NSColor *_drawingAreaBackgroundColor;
    BTTGestureDrawView *_drawView;
}

@property(retain, nonatomic) BTTGestureDrawView *drawView; // @synthesize drawView=_drawView;
@property(retain, nonatomic) NSColor *drawingAreaBackgroundColor; // @synthesize drawingAreaBackgroundColor=_drawingAreaBackgroundColor;
- (void).cxx_destruct;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)setFrameSpecial:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)updateBackgroundColor;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

