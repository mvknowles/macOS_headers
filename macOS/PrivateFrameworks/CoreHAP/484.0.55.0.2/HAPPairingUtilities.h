//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
{
}

+ (id)parseListPairingsResponse:(id)arg1 error:(id *)arg2;
+ (id)createListPairingsRequest:(id *)arg1;
+ (BOOL)parseRemovePairingResponse:(id)arg1 error:(id *)arg2;
+ (id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id *)arg2;
+ (BOOL)parseAddPairingResponse:(id)arg1 error:(id *)arg2;
+ (id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id *)arg2;

@end

