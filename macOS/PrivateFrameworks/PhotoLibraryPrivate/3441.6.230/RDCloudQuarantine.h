//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RDCloudQuarantine : NSObject
{
}

+ (void)servicePerformUnquarantineForModelId:(unsigned long long)arg1 inTableId:(unsigned long long)arg2 withDatabase:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)unquarantineModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

