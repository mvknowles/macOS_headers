//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTImageDownloadClientRequest : NSObject
{
    NSString *_uniqueId;
    NSString *_url;
    NSString *_key;
    CDUnknownBlockType _completion;
    NSString *_uuid;
}

+ (id)requestForUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (id)description;
- (id)initWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

