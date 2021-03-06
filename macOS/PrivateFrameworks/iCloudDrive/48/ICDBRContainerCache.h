//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL, icd_pacer;

@interface ICDBRContainerCache : NSObject
{
    id <BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    icd_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id <NSObject> _containerStatusObserver;
    BOOL _didSetupAccountNotification;
    NSURL *_repositoryURL;
}

@property(readonly, nonatomic) NSURL *repositoryURL; // @synthesize repositoryURL=_repositoryURL;
- (void).cxx_destruct;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)arg1;
- (BOOL)_updateContainersCache;
- (void)invalidateAndClearCache:(BOOL)arg1;
- (void)_containerListDidChange;
- (void)unsubscribeToContainerStatusUpdate;
- (void)subscribeToContainerStatusUpdate;
- (id)allContainers;
- (id)allContainersByID;
- (void)_accountWillChange;
- (id)documentContainers;
- (id)allContainersBlockIfNeeded:(BOOL)arg1;
- (void)dealloc;
- (id)initWithRepositoryURL:(id)arg1 helper:(id)arg2;

@end

