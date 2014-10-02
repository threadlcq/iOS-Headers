//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString, TSUPathSet, TSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSPDistributableFileManager : NSObject
{
    NSString *_directoryPath;
    BOOL _shouldCreate;
    TSUPathSet *_claimedPaths;
    NSMutableSet *_newIdentifiers;
    NSMutableSet *_modifiedIdentifiers;
    NSMutableSet *_deletedIdentifiers;
    TSUTemporaryDirectory *_modifiedFilesDirectory;
    BOOL _isCullingDisabled;
}

- (void).cxx_destruct;
- (void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3;
- (id)_filePathForIdentifier:(id)arg1;
- (id)_filePathForModifiedIdentifier:(id)arg1;
- (id)_modifiedFilesDirectoryPath;
- (id)_claimedPaths;
- (BOOL)rehomeOntoPath:(id)arg1;
- (BOOL)prepareForSaveToPath:(id)arg1 error:(id *)arg2;
- (void)disableFileCulling;
- (void)removeIdentifier:(id)arg1;
- (id)representationForIdentifier:(id)arg1;
- (void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3;
- (void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3;
- (id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2;
- (BOOL)commitWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 shouldCreate:(BOOL)arg2;

@end
