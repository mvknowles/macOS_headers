//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GEOResourceManifestConfiguration : NSObject
{
    unsigned int _tileGroupIdentifier;
    NSString *_os;
    NSString *_osVersion;
    NSString *_osBuild;
    NSString *_countryCode;
    NSString *_hardwareIdentifier;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_environment;
    NSString *_dataDirectory;
}

@property(copy, nonatomic) NSString *dataDirectory; // @synthesize dataDirectory=_dataDirectory;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(nonatomic) unsigned int tileGroupIdentifier; // @synthesize tileGroupIdentifier=_tileGroupIdentifier;
@property(readonly, nonatomic) NSString *directorySuffix;
- (BOOL)isDefaultConfiguration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)conciseDictionaryRepresentation;
- (id)initWithConciseDictionaryRepresentation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

