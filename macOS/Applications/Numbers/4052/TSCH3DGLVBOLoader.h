//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DResourceLoader.h"

@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader
{
    unsigned int mType;
}

+ (id)loaderWithType:(unsigned int)arg1;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (void)setClientState:(const struct DataBufferInfo *)arg1;
- (void)loadSingleValueInBuffer:(id)arg1;
- (BOOL)activateResource:(id)arg1 insideSession:(id)arg2;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (unsigned int)usageOfResource:(id)arg1;
- (id)generateHandleWithConfig:(void *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)arg1;

@end

