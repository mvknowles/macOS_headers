//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSArray, NSExpression, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate
{
    NSSQLEntity *_entity;
    NSExpression *_indexName;
    NSArray *_properties;
    NSArray *_ranges;
}

- (id)generateSQLStringInContext:(id)arg1;
- (BOOL)_validateExpression:(id)arg1 context:(id)arg2;
- (BOOL)_validateCollection:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5;

@end

