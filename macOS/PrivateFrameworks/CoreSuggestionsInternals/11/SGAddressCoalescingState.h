//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SGAddressCoalescingState : NSObject
{
    NSMutableArray *_matches;
    long long _lastAddressIndex;
    long long _lastAddressEndPos;
    // Error parsing type: ^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}, name: _lastResult
}

@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
- (void).cxx_destruct;
-     // Error parsing type: v32@0:8^{__DDResult={__CFRuntimeBase=QAQ}{__DDQueryRange={__DDQueryOffset=b32b32}{__DDQueryOffset=b32b32}}{?=qq}q^{__CFArray}^{__CFString}^{__CFString}^v^{__CFDictionary}qCf}16@24, name: coalesceAddress:orAppendMatch:
- (void)dealloc;
- (id)init;

@end

