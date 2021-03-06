//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermMetalRenderer.h"

@class NSString, iTermMetalBufferPool, iTermMetalRenderer;

@interface iTermBroadcastStripesRenderer : NSObject <iTermMetalRenderer>
{
    iTermMetalRenderer *_metalRenderer;
    id <MTLTexture> _texture;
    struct CGSize _size;
    iTermMetalBufferPool *_verticesPool;
    BOOL _enabled;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)initializeTransientState:(id)arg1;
- (id)createTransientStateForConfiguration:(id)arg1 commandBuffer:(id)arg2;
- (void)drawWithFrameData:(id)arg1 transientState:(id)arg2;
- (int)createTransientStateStat;
@property(readonly, nonatomic) BOOL rendererDisabled;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

