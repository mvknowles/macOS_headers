//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSKit/TSKCommand.h>

#import "GSSPAutoEncodable-Protocol.h"

@class NSUUID;

@interface TNCommandSetPrinterMargins : TSKCommand <GSSPAutoEncodable>
{
    NSUUID *_sheetId;
    double _marginTop;
    double _marginLeft;
    double _marginBottom;
    double _marginRight;
    struct NSEdgeInsets _oldPrintMargins;
}

@property(nonatomic) struct NSEdgeInsets oldPrintMargins; // @synthesize oldPrintMargins=_oldPrintMargins;
@property(readonly, nonatomic) NSUUID *sheetId; // @synthesize sheetId=_sheetId;
- (void).cxx_destruct;
- (void)transformWithOperationTransformer:(id)arg1;
- (id)operations;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)rollback;
- (void)applyPrintMargins:(struct NSEdgeInsets)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)isValidForCommit;
- (BOOL)process;
- (struct NSEdgeInsets)newPrintMargins;
- (void)setNewPrintMargins:(struct NSEdgeInsets)arg1;
- (id)sheet;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)actionString;
- (id)initWithSheet:(id)arg1 printMargins:(struct NSEdgeInsets)arg2 context:(id)arg3;
- (id)initWithSheetID:(id)arg1 printMargins:(struct NSEdgeInsets)arg2 context:(id)arg3;
- (void)populateGSSPCmdSetPrinterMargins:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

