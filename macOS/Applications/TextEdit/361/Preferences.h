//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@interface Preferences : NSWindowController
{
    BOOL changingRTFFont;
    long long originalDimensionFieldValue;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)controlTextDidBeginEditing:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)revertToDefault:(id)arg1;
- (void)setHTMLStylingMode:(long long)arg1;
- (long long)HTMLStylingMode;
- (void)setHTMLDocumentType:(unsigned long long)arg1;
- (unsigned long long)HTMLDocumentType;
- (id)plainTextFont;
- (id)richTextFont;
- (void)setPlainTextFont:(id)arg1;
- (void)setRichTextFont:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)changePlainTextFont:(id)arg1;
- (void)changeRichTextFont:(id)arg1;
- (void)windowDidLoad;
- (id)init;

@end

