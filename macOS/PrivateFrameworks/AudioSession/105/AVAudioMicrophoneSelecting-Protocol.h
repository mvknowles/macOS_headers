//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVAudioDSPControlling.h"

@class AVAudioMicrophoneConfiguration, NSArray;

@protocol AVAudioMicrophoneSelecting <AVAudioDSPControlling>
@property(readonly, nonatomic) AVAudioMicrophoneConfiguration *selectedConfiguration;
@property(readonly, nonatomic) NSArray *availableConfigurations;
- (BOOL)setConfiguration:(AVAudioMicrophoneConfiguration *)arg1 error:(id *)arg2;
@end

