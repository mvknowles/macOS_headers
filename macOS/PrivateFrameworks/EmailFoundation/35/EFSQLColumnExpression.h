//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFCacheable.h"
#import "EFSQLExpressable.h"

@class EFSQLDisqualifiedColumnExpression, NSString;

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLExpressable>
{
    NSString *_name;
    NSString *_tableName;
}

+ (id)allColumns;
+ (id)column:(id)arg1;
+ (id)table:(id)arg1 column:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)doesNotMatchMask:(id)arg1;
- (id)matchesMask:(id)arg1;
- (id)concatenate:(id)arg1;
- (id)minus:(id)arg1;
- (id)plus:(id)arg1;
- (id)isNotNull;
- (id)isNull;
- (id)isNot:(id)arg1;
- (id)is:(id)arg1;
- (id)notBetween:(id)arg1;
- (id)between:(id)arg1;
- (id)notInSelect:(id)arg1;
- (id)notIn:(id)arg1;
- (id)inSelect:(id)arg1;
- (id)in:(id)arg1;
- (id)endsWith:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)doesNotContain:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)contains:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)beginsWith:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)notGlob:(id)arg1;
- (id)glob:(id)arg1;
- (id)notLike:(id)arg1 patternType:(unsigned long long)arg2;
- (id)notLike:(id)arg1;
- (id)like:(id)arg1 patternType:(unsigned long long)arg2;
- (id)like:(id)arg1;
- (id)lessThanEqualTo:(id)arg1;
- (id)lessThan:(id)arg1;
- (id)greaterThanEqualTo:(id)arg1;
- (id)greaterThan:(id)arg1;
- (id)notEqualTo:(id)arg1;
- (id)equalTo:(id)arg1;
@property(readonly, nonatomic) EFSQLDisqualifiedColumnExpression *disqualified;
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 table:(id)arg2;
- (id)cachedSelf;
- (id)expressionForPredicateOperatorType:(unsigned long long)arg1 constValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

