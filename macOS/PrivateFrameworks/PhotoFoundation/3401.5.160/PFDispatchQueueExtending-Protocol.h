//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/NSObject-Protocol.h>

@class NSObject, PFDispatchQueue, PFExtendedDispatchQueue;
@protocol OS_dispatch_group, PFDispatchQueueExtending;

@protocol PFDispatchQueueExtending <NSObject>
- (void)queueWillResume:(PFExtendedDispatchQueue *)arg1;
- (void)queueDidSuspend:(PFExtendedDispatchQueue *)arg1;
- (void)queue:(PFExtendedDispatchQueue *)arg1 skippedExecuting:(NSObject *)arg2;
- (void)queue:(PFExtendedDispatchQueue *)arg1 didExecute:(NSObject *)arg2;
- (void)queue:(PFExtendedDispatchQueue *)arg1 willExecute:(NSObject *)arg2;
- (void)queue:(PFExtendedDispatchQueue *)arg1 didDequeue:(NSObject *)arg2 skipExecution:(void (^)(void))arg3;
- (void)queue:(PFExtendedDispatchQueue *)arg1 willEnqueueAsync:(NSObject *)arg2 when:(NSObject<OS_dispatch_group> * (^)(void))arg3;
- (void)queue:(PFExtendedDispatchQueue *)arg1 willEnqueueSync:(NSObject *)arg2;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchGroup:(NSObject<OS_dispatch_group> *)arg2 notify:(void (^)(void))arg3;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchGroup:(NSObject<OS_dispatch_group> *)arg2 async:(void (^)(void))arg3;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchAfter:(void (^)(void))arg2;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchBarrierAsync:(void (^)(void))arg2;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchAsync:(void (^)(void))arg2;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchBarrierSync:(void (^)(void))arg2;
- (NSObject *)queue:(PFExtendedDispatchQueue *)arg1 receivedDispatchSync:(void (^)(void))arg2;
- (id <PFDispatchQueueExtending>)queue:(PFExtendedDispatchQueue *)arg1 willTargetQueue:(PFDispatchQueue *)arg2;
- (void)installOnQueue:(PFExtendedDispatchQueue *)arg1;
@end

