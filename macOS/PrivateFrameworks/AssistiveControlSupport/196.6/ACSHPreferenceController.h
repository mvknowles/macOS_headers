//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ACSHPreferenceController : NSObject
{
    NSDictionary *_preferenceDefaults;
    struct __IOHIDEventSystemClient *_iohidEventSystemClient;
    BOOL _showButtonLabels;
}

+ (id)sharedController;
@property(nonatomic) BOOL showButtonLabels; // @synthesize showButtonLabels=_showButtonLabels;
- (void).cxx_destruct;
@property(readonly, nonatomic) double hotCornerDwellTime;
@property(nonatomic) BOOL autoHideEnabled;
@property(nonatomic) BOOL showDwellActionsInMenuBar;
@property(nonatomic) BOOL showDwellActionsInPanels;
@property(nonatomic) BOOL alwaysAllowDwellInPanels;
@property(readonly, nonatomic) double defaultDwellTime;
@property(readonly, nonatomic) struct CGSize progressCursorSize;
@property(readonly, nonatomic) BOOL shouldEnableVirtualKeyboardWithoutDwell;
@property(readonly, nonatomic) BOOL shouldEnableDwellControl;
@property(readonly, nonatomic) long long assistiveControlType;
@property(readonly, nonatomic) BOOL reverseMouseWhenReachingScreenEdge;
- (id)colorForTheme:(unsigned long long)arg1 attributeColor:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long highlightStyle;
- (id)copyPreferenceNumberForKey:(id)arg1;
- (id)copyPreferenceStringForKey:(id)arg1;
- (id)copyPreferenceValueForKey:(id)arg1;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
- (id)_preferenceDefaults;
- (void)setViewingAlpha:(double)arg1 forPanelUUID:(id)arg2;
- (double)viewingAlphaForPanelUUID:(id)arg1;
- (void)setViewingZoomScale:(double)arg1 forPanelUUID:(id)arg2;
- (double)viewingZoomScaleForPanelUUID:(id)arg1;
@property(readonly, nonatomic) double minimumPressBeforeRepeatDuration;
@property(readonly, nonatomic) double repeatInterval;
@property(readonly, nonatomic) double doublePressInterval;
@property(readonly, nonatomic) double firstElementDelay;
@property(readonly, nonatomic) double minimumPressDuration;
@property(readonly, nonatomic) double coalescePressesDuration;
@property(readonly, nonatomic) double sweepingRotationAngle;
@property(readonly, nonatomic) double rotatingCursorStage5PixelsPerSecond;
@property(readonly, nonatomic) double rotatingCursorStage4PixelsPerSecond;
@property(readonly, nonatomic) double rotatingCursorStage3AngleDegreesPerSecond;
@property(readonly, nonatomic) double rotatingCursorStage2AngleDegreesPerSecond;
@property(readonly, nonatomic) double rotatingCursorStage1AngleDegreesPerSecond;
@property(readonly, nonatomic) double sweepingCursorStage3PixelsPerSecond;
@property(readonly, nonatomic) double sweepingCursorStage2PixelsPerSecond;
@property(readonly, nonatomic) double sweepingCursorStage1PixelsPerSecond;
@property(readonly, nonatomic) unsigned long long maxScanCycleCount;
@property(readonly, nonatomic) double autoScanElementInterval;
@property(readonly, nonatomic) double autoScanPanelInterval;
@property(readonly, nonatomic) BOOL isAutoScanEnabled;
@property(readonly, nonatomic) BOOL speakSelectedElement;
@property(readonly, nonatomic) long long cursorSize;
@property(readonly, nonatomic) long long mouseMoveStyle;
- (void)setDesiredPanelWindowPosition:(unsigned long long)arg1 panelWindowFrame:(struct CGRect)arg2;
@property(readonly, nonatomic) struct CGRect desiredPanelWindowFrame;
@property(readonly, nonatomic) unsigned long long desiredPanelWindowPosition;
- (void)setPanelPosition:(unsigned long long)arg1 windowFrame:(struct CGRect)arg2;
@property(nonatomic) unsigned long long panelPosition;
@property(readonly, nonatomic) struct CGRect panelFrame;
- (void)setshowButtonLabels:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

