//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBDataSource;

@interface TBPreferLocalFetchDataSource : NSObject
{
    TBDataSource *_localDataSource;
    TBDataSource *_remoteDataSource;
    id <TBCacheProvider> _cacheProvider;
}

@property(retain, nonatomic) id <TBCacheProvider> cacheProvider; // @synthesize cacheProvider=_cacheProvider;
@property(retain, nonatomic) TBDataSource *remoteDataSource; // @synthesize remoteDataSource=_remoteDataSource;
@property(retain, nonatomic) TBDataSource *localDataSource; // @synthesize localDataSource=_localDataSource;
- (void).cxx_destruct;
- (id)initWithLocalDataSource:(id)arg1 remoteDataSource:(id)arg2 cacheProvider:(id)arg3;

@end

