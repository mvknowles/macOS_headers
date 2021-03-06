//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class HgLockedDictionary, IPPersonCache, ImageDB, NewFaceDetector;

@interface DetectedFaceCache : NSObject
{
    ImageDB *_db;
    NewFaceDetector *_faceDetector;
    IPPersonCache *_personCache;
    HgLockedDictionary *_detectedFaceCache;
}

@property(nonatomic) HgLockedDictionary *detectedFaceCache; // @synthesize detectedFaceCache=_detectedFaceCache;
@property(nonatomic) IPPersonCache *personCache; // @synthesize personCache=_personCache;
@property(nonatomic) NewFaceDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(nonatomic) ImageDB *db; // @synthesize db=_db;
- (id)facesWithFaceKeys:(id)arg1;
- (id)facesWithFaceKey:(int)arg1;
- (id)facesWithImageKeys:(id)arg1 faceKeys:(id)arg2 includeRejected:(BOOL)arg3;
- (id)facesForPeopleModel;
- (unsigned long long)faceCountForFaceKey:(long long)arg1;
- (id)facePhotoKeysForFaceKey:(long long)arg1;
- (id)haveNonExternalFacesInFaceKey:(long long)arg1;
- (id)externalFacesWithFaceKey:(long long)arg1;
- (id)unusedFaceKeys;
- (id)usedFaceKeys;
- (unsigned long long)unnamedFaceCountForImageKey:(unsigned long long)arg1;
- (unsigned long long)unnamedFaceCountInImageKeySet:(id)arg1 ignoringImageKeySet:(id)arg2;
- (id)unnamedFaceInImageKeySet:(id)arg1 ignoringImageKeySet:(id)arg2 includeRejects:(BOOL)arg3;
- (id)faceKeysForPhotosKeys:(id)arg1 named:(BOOL)arg2;
- (id)namedFaceInfo:(id)arg1 includeExternallyOwned:(BOOL)arg2 withCanceler:(id)arg3;
- (id)namedFaceInfo:(id)arg1 includeExternallyOwned:(BOOL)arg2;
- (id)faceKeysForPhotosKeys:(id)arg1;
- (id)faceKeysIndexSetForPhotoKey:(unsigned long long)arg1;
- (long long)faceIndexForImageKey:(unsigned long long)arg1 faceKey:(long long)arg2;
- (id)faceIndicesForImageKey:(unsigned long long)arg1 includeIgnored:(BOOL)arg2 includeRejected:(BOOL)arg3 named:(int)arg4;
- (id)faceIndicesForImageKey:(unsigned long long)arg1 includeIgnored:(BOOL)arg2 named:(int)arg3;
- (id)allFaceData;
- (id)detectedFacesForFaceKey:(long long)arg1 skipFiltering:(BOOL)arg2;
- (id)detectedFacesForPhotoKey:(unsigned long long)arg1 skipFiltering:(BOOL)arg2;
- (id)allDetectedFaces;
- (id)faceRecognitionInfoForPhotoKey:(unsigned long long)arg1 includeRejected:(BOOL)arg2;
- (id)faceRecognitionInfoForInitialFaceKeyOrderedByFaceKeyThenDate:(unsigned long long)arg1;
- (id)faceRecognitionInfoForInitialFaceKeyOrderedByFaceKey:(int)arg1;
- (id)faceRecognitionInfoOrderedByFaceKey:(id)arg1;
- (id)mostRecentDetectedFacesForFaceKey:(long long)arg1 maxCount:(unsigned long long)arg2;
- (void)changeFaceKey:(unsigned long long)arg1 toFaceKey:(unsigned long long)arg2 updateCorrelatedFaceKey:(BOOL)arg3;
- (void)removeDetectedFace:(id)arg1;
- (id)getDetectedFaceForImage:(unsigned long long)arg1 faceIndex:(unsigned long long)arg2;
- (id)invalidateCacheForDetectedFace:(id)arg1;
- (void)dealloc;
- (id)init;

@end

