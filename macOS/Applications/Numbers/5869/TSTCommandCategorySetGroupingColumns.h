//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSKCommand, TSTCellDiffMap, TSTColumnAggregateList, TSTGroupingColumnList, TSTSummaryModelGroupByChangeState;

@interface TSTCommandCategorySetGroupingColumns : TSTTableCommand <GSSPAutoEncodable>
{
    long long _enabledChanging;
    TSTGroupingColumnList *_groupingColumns;
    BOOL _restoreBaseOrder;
    vector_4dc5f307 _baseRowOrder;
    BOOL _restoreViewOrder;
    vector_4dc5f307 _viewRowOrder;
    BOOL _forceRestoreAllStates;
    TSTColumnAggregateList *_columnAggregates;
    vector_4dc5f307 _collapseState;
    TSTSummaryModelGroupByChangeState *_summaryChangeState;
    TSTCellDiffMap *_cellDiffMap;
    BOOL _definedCellDiffMap;
    vector_4dc5f307 _undoBaseRowOrder;
    vector_4dc5f307 _undoViewRowOrder;
    vector_4dc5f307 _undoCollapseState;
    BOOL _undoRestoreBaseOrder;
    BOOL _undoRestoreViewOrder;
    long long _undoEnabledChanging;
    TSTGroupingColumnList *_undoGroupingColumns;
    TSTColumnAggregateList *_undoColumnAggregates;
    TSTSummaryModelGroupByChangeState *_undoSummaryChangeState;
    TSTCellDiffMap *_undoCellDiffMap;
    TSKCommand *_undoSetEnabledRewriteCommand;
    TSKCommand *_undoSetColumnsRewriteCommand;
}

@property(retain, nonatomic) TSKCommand *undoSetColumnsRewriteCommand; // @synthesize undoSetColumnsRewriteCommand=_undoSetColumnsRewriteCommand;
@property(retain, nonatomic) TSKCommand *undoSetEnabledRewriteCommand; // @synthesize undoSetEnabledRewriteCommand=_undoSetEnabledRewriteCommand;
@property(retain, nonatomic) TSTCellDiffMap *undoCellDiffMap; // @synthesize undoCellDiffMap=_undoCellDiffMap;
@property(retain, nonatomic) TSTSummaryModelGroupByChangeState *undoSummaryChangeState; // @synthesize undoSummaryChangeState=_undoSummaryChangeState;
@property(readonly, nonatomic) const vector_4dc5f307 *undoCollapseState; // @synthesize undoCollapseState=_undoCollapseState;
@property(retain, nonatomic) TSTColumnAggregateList *undoColumnAggregates; // @synthesize undoColumnAggregates=_undoColumnAggregates;
@property(readonly, nonatomic) const vector_4dc5f307 *undoViewRowOrder; // @synthesize undoViewRowOrder=_undoViewRowOrder;
@property(nonatomic) BOOL undoRestoreViewOrder; // @synthesize undoRestoreViewOrder=_undoRestoreViewOrder;
@property(readonly, nonatomic) const vector_4dc5f307 *undoBaseRowOrder; // @synthesize undoBaseRowOrder=_undoBaseRowOrder;
@property(nonatomic) BOOL undoRestoreBaseOrder; // @synthesize undoRestoreBaseOrder=_undoRestoreBaseOrder;
@property(retain, nonatomic) TSTGroupingColumnList *undoGroupingColumns; // @synthesize undoGroupingColumns=_undoGroupingColumns;
@property(nonatomic) long long undoEnabledChanging; // @synthesize undoEnabledChanging=_undoEnabledChanging;
@property(copy, nonatomic) TSTSummaryModelGroupByChangeState *summaryChangeState; // @synthesize summaryChangeState=_summaryChangeState;
@property(copy, nonatomic) TSTColumnAggregateList *columnAggregates; // @synthesize columnAggregates=_columnAggregates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)supportsCollaboration;
- (void)rollbackWork;
- (id)makeInverse;
- (BOOL)implementsIsInverse;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (void)p_doWorkWithGroupingColumns:(id)arg1 groupByChange:(id)arg2 isSettingEnabled:(BOOL)arg3 isEnabled:(BOOL)arg4 isUndo:(BOOL)arg5;
- (id)p_cellDiffMapForRestoringStrokes;
- (void)p_restoreViewRowOrder:(BOOL)arg1;
- (vector_4dc5f307)p_prunedViewRowOrder;
- (void)p_restoreBaseRowOrder:(BOOL)arg1;
- (id)p_mappingForShufflingToOrder:(const vector_4dc5f307 *)arg1;
- (BOOL)isValidForCommit;
- (id)actionString;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithTableInfo:(id)arg1 setCategoriesEnabled:(BOOL)arg2;
- (id)initWithTableInfo:(id)arg1 groupingColumns:(id)arg2 forceEnabled:(BOOL)arg3;
- (id)initWithTableInfo:(id)arg1 groupingColumns:(id)arg2;
- (id)initWithTableInfo:(id)arg1 enabledChanging:(long long)arg2 groupingColumns:(id)arg3;
- (id)initWithTableInfo:(id)arg1 enabledChanging:(long long)arg2 groupingColumns:(id)arg3 restoreBaseOrder:(BOOL)arg4 baseRowOrder:(const vector_4dc5f307 *)arg5 restoreViewOrder:(BOOL)arg6 viewRowOrder:(const vector_4dc5f307 *)arg7 columnAggregates:(id)arg8 collapseState:(const vector_4dc5f307 *)arg9 summaryChangeState:(id)arg10 cellDiffMap:(id)arg11;
- (void)populateGSSPCmdCategorySetGroupingColumns:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

