//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying>
{
    NSMutableArray *_categories;
    NSString *_view;
}

+ (Class)categoriesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *view; // @synthesize view=_view;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)categoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesCount;
- (void)addCategories:(id)arg1;
- (void)clearCategories;
@property(readonly, nonatomic) BOOL hasView;

@end

