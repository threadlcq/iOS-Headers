/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, PLFixedSizeLRUCache;

@interface PLWStackedImageCache : NSObject
{
    PLFixedSizeLRUCache *_stackedImagesCache;
    PLFixedSizeLRUCache *_stackedImageOptionsCache;
    NSLock *_lock;
}

+ (id)absolutePathToCachedStackedImagesDirectory;
+ (id)absolutePathToCachesDirectory;
+ (id)sharedInstance;
- (BOOL)KVOChange:(id)arg1 affectsStackedImageForAlbum:(struct NSObject *)arg2;
- (void)removeEntryForKey:(id)arg1;
- (void)invalidateEntryForKey:(id)arg1;
- (void)invalidateAll;
- (void)setInMemoryStackedImage:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (void)setStackedImage:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (void)prefetchStackedImagesWithKey1:(id)arg1 key2:(id)arg2 key3:(id)arg3 key4:(id)arg4;
- (id)stackedImageWithKey:(id)arg1 options:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

