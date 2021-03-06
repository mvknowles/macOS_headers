//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

#import "NSSecureCoding.h"

@class NSData, NSString;

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding>
{
    NSString *_referenceIdentifier;
    NSData *_nonce;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSString *referenceIdentifier; // @synthesize referenceIdentifier=_referenceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

