//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import "TSDMixing.h"
#import "TSDMutableContainerInfo.h"
#import "TSDSelectionStatisticsContributor.h"
#import "TSKDocumentObject.h"

@class NSMutableArray, NSObject<TSDContainerInfo>, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;

__attribute__((visibility("hidden")))
@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor>
{
    NSMutableArray *mChildInfos;
    BOOL mIsInDocument;
}

+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(char *)arg4;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned int)arg3;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)commandToFlipWithOrientation:(int)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (BOOL)canAnchor;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)ensureGeometryFitsChildren;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)removeAllChildrenInDocument:(BOOL)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildInfo:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (id)childInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (id)allNestedChildrenInfos;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (BOOL)aspectRatioLocked;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct GroupArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct GroupArchive *)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)containsDisallowedElementKind:(unsigned int)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end

