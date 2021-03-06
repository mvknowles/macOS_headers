//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSColor, NSString;

@interface FLUTextField : NSTextField
{
    BOOL _verticallyAlignedText;
    NSString *_placeholder;
    NSColor *_placeholderTextColor;
    NSColor *_insertionPointColor;
    CDUnknownBlockType _mouseDownBlock;
    CDUnknownBlockType _mouseEnteredBlock;
    CDUnknownBlockType _mouseExitedBlock;
}

+ (Class)cellClass;
@property(copy, nonatomic) CDUnknownBlockType mouseExitedBlock; // @synthesize mouseExitedBlock=_mouseExitedBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseEnteredBlock; // @synthesize mouseEnteredBlock=_mouseEnteredBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseDownBlock; // @synthesize mouseDownBlock=_mouseDownBlock;
@property(nonatomic) BOOL verticallyAlignedText; // @synthesize verticallyAlignedText=_verticallyAlignedText;
@property(retain, nonatomic) NSColor *insertionPointColor; // @synthesize insertionPointColor=_insertionPointColor;
@property(retain, nonatomic) NSColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (id)makeTouchBar;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)customTypingAttributes:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setFrame:(struct CGRect)arg1;
- (id)cell;
- (void)setupView;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

