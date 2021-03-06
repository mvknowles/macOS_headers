//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetTrack, AVSampleBufferGenerator, AVSampleCursor, VideoDecompressor;

@interface VideoAccessRand : NSObject
{
    unsigned int _recurs;
    AVAsset *asset;
    AVAssetTrack *videoTrack;
    AVSampleBufferGenerator *_sampBufGen;
    VideoDecompressor *_vidDecompr;
    AVSampleCursor *_cursor;
    struct __CFDictionary *_currentChunk;
    CDStruct_1b6d18a9 _frameTime2x;
}

@property struct __CFDictionary *currentChunk; // @synthesize currentChunk=_currentChunk;
@property unsigned int recurs; // @synthesize recurs=_recurs;
@property CDStruct_1b6d18a9 frameTime2x; // @synthesize frameTime2x=_frameTime2x;
@property(retain) AVSampleCursor *cursor; // @synthesize cursor=_cursor;
@property(retain) VideoDecompressor *vidDecompr; // @synthesize vidDecompr=_vidDecompr;
@property(retain) AVSampleBufferGenerator *sampBufGen; // @synthesize sampBufGen=_sampBufGen;
@property(readonly) AVAssetTrack *videoTrack; // @synthesize videoTrack;
@property(readonly) AVAsset *asset; // @synthesize asset;
- (void).cxx_destruct;
- (int)getFrameAtTime:(CDStruct_1b6d18a9)arg1 pixBuf:(struct __CVBuffer **)arg2 actualTime:(CDStruct_1b6d18a9 *)arg3;
- (CDStruct_1b6d18a9)currPresTime;
- (int)decodeFrame:(struct __CVBuffer **)arg1;
- (void)dealloc;
- (id)initFromFile:(id)arg1 pixelFormat:(unsigned int)arg2;

@end

