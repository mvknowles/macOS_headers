//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

#import <Vision/VNFaceObservationAccepting-Protocol.h>

@class NSArray, NSString;

@interface VNCreateTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting>
{
}

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedTorsoprints:(id)arg4;
- (long long)dependencyProcessingOrdinality;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *inputFaceObservations;
@property(readonly) Class superclass;

@end

