//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKObject.h"

#import "HDSyncObject.h"

@class NSString;

@interface HKObject (HDDataEntity) <HDSyncObject>
+ (Class)healthSyncEntity;
- (BOOL)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entity:(id)arg3 error:(id *)arg4;
- (void)hd_cleanupBeforeJournalInsertion;
- (id)hd_relatedJournalEntries;
- (int)entityType;
@property(readonly, nonatomic) NSString *syncId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end
