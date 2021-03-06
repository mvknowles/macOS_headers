//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_country;
    NSString *_state;
    NSString *_streetAddress;
    NSString *_streetName;
    NSArray *_formattedAddressLines;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
@property(retain, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;
@property(retain, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryValue;
- (id)formattedAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLocality:(id)arg1 administrativeArea:(id)arg2 country:(id)arg3 state:(id)arg4 streetAddress:(id)arg5 streetName:(id)arg6;

@end

