/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetCache, AVAssetInspector, NSDictionary, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader
{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigFormatReader *_formatReader;
    int _figAssetCreationStatus;
    struct dispatch_queue_s *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    struct OpaqueFigSemaphore *_playabilityValidationSemaphore;
    int _playableStatus;
    int _playableResult;
    BOOL _playable;
    struct OpaqueFigSemaphore *_cameraRollValidationSemaphor;
    int _compatibleWithSavedPhotosAlbumStatus;
    int _compatibleWithSavedPhotosAlbumResult;
    BOOL _compatibleWithSavedPhotosAlbum;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    AVAssetInspector *_assetInspector;
    AVAssetCache *_assetCache;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    NSURL *_downloadDestinationURL;
    NSDictionary *_validationPlist;
    unsigned int _referenceRestrictions;
}

+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)dealloc;
- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)assetInspector;
- (struct OpaqueFigAsset *)_figAsset;
- (struct dispatch_queue_s *)_completionHandlerQueue;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (id)_loadingBatches;
- (struct OpaqueFigSemaphore *)_playabilityValidationSemaphore;
- (struct OpaqueFigSemaphore *)_cameraRollValidationSemaphor;
- (int)_loadStatusForProperty:(id)arg1 returningError:(int *)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (void)cancelLoading;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (CDStruct_1b6d18a9)duration;
- (id)lyrics;
- (void)setIsPlayable:(BOOL)arg1 result:(long)arg2;
- (BOOL)isPlayable;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (BOOL)isComposable;
- (void)setIsCompatibleWithSavedPhotosAlbum:(BOOL)arg1 result:(long)arg2;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (id)chapterGroupInfo;
- (id)URL;
- (id)resolvedURL;
- (BOOL)hasProtectedContent;
- (BOOL)_isStreaming;
- (unsigned int)referenceRestrictions;
@property(readonly, nonatomic) NSDictionary *validationPlist; // @synthesize validationPlist=_validationPlist;
@property(readonly, nonatomic) NSURL *downloadDestinationURL; // @synthesize downloadDestinationURL=_downloadDestinationURL;
@property(readonly, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; // @synthesize shouldMatchDataInCacheByURLWithoutQueryComponent=_shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly; // @synthesize shouldMatchDataInCacheByURLPathComponentOnly=_shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly, nonatomic) AVAssetCache *assetCache; // @synthesize assetCache=_assetCache;

@end
