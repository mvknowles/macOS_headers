//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadgetRankStorage.h"

@interface PXForYouGadgetRankStorage : NSObject <PXGadgetRankStorage>
{
}

- (id)_keyForGadgetType:(unsigned long long)arg1;
- (void)setRank:(long long)arg1 forGadgetType:(unsigned long long)arg2;
- (long long)rankForGadgetType:(unsigned long long)arg1;
- (void)resetStoredRanks;

@end

