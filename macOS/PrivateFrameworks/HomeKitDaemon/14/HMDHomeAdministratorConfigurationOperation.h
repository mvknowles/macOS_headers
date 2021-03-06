//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFOperation.h"

#import "HMFLogging.h"

@class HMDHome, HMFMessage, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging>
{
    BOOL _shouldSuspendSyncing;
    HMFMessage *_message;
    HMDHome *_home;
    CDUnknownBlockType _sendCompletionBlock;
    CDUnknownBlockType _responseHandler;
}

+ (id)logCategory;
+ (double)timeout;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy) CDUnknownBlockType sendCompletionBlock; // @synthesize sendCompletionBlock=_sendCompletionBlock;
@property BOOL shouldSuspendSyncing; // @synthesize shouldSuspendSyncing=_shouldSuspendSyncing;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMFMessage *message; // @synthesize message=_message;
- (id)logIdentifier;
- (void)main;
- (id)messageDispatcher;
- (id)initWithMessage:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

