/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUDataSource.h>

@class MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSURL;

@interface MPUQueryDataSource : MPUDataSource
{
    NSArray *_entities;
    _Bool _invalidateWhenEnteringForeground;
    MPMediaQuerySectionInfo *_sectionInfo;
    MPMediaQuery *_query;
}

@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)_sectionInfo;
- (_Bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out _Bool *)arg2;
- (void)_postInvalidationNotification;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
@property(readonly, nonatomic) NSURL *bestStoreURL;
- (id)titleForGlobalHeader;
- (_Bool)showsEntityCountFooter;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (unsigned long long)numberOfSections;
- (_Bool)showsIndexBar;
- (_Bool)isEmpty;
- (void)invalidateCalculatedEntities;
- (id)entities;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (id)dataSourceFromEntityAtIndex:(unsigned long long)arg1 entityType:(long long)arg2;
- (unsigned long long)count;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (id)initWithEntityType:(long long)arg1;

@end

