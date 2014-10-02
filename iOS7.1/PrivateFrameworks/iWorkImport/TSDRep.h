//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDMagicMoveMatching.h"

@class CALayer, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, TSDCanvas, TSDInteractiveCanvasController, TSDKnobTracker, TSDLayout, TSDLayoutGeometry, TSDRep<TSDContainerRep>, TSDTextureContext, TSDTextureSet, TSDTilingBackgroundQueue;

__attribute__((visibility("hidden")))
@interface TSDRep : NSObject <TSDMagicMoveMatching>
{
    TSDCanvas *mCanvas;
    TSDRep<TSDContainerRep> *mParentRep;
    NSArray *mKnobs;
    BOOL mKnobPositionsInvalid;
    BOOL mShowKnobsWhenManipulated;
    BOOL mKnobsAreShowing;
    TSDKnobTracker *mKnobTracker;
    BOOL mSelectionHighlightLayerValid;
    CALayer *mSelectionHighlightLayer;
    unsigned int mTextureDeliveryStyle;
    int mTextureByGlyphStyle;
    TSDTextureContext *mTextureContext;
    unsigned int mTextureStage;
    NSDictionary *mTextureActionAttributes;
    NSDictionary *mTextureAnimationInfo;
    BOOL mShowTemporaryHighlight;
    CALayer *mTemporaryHighlightLayer;
    BOOL mShowDragAndDropHighlight;
    CALayer *mDragAndDropHighlightLayer;
    TSDLayout *mTemporaryMixingLayout;
    TSDLayout *mLayout;
    TSDTextureSet *mTexture;
    struct CGColor *mDefaultSelectionHighlightColor;
    TSDLayoutGeometry *mLastGeometryInRoot;
    struct CGRect mOriginalLayerFrameInScaledCanvas;
    TSDTilingBackgroundQueue *mTileQueue;
    long mTileQueueOnce;
    long mTileProviderQueueLock;
    NSObject<OS_dispatch_queue> *mTileProviderQueue;
}

@property(retain, nonatomic) NSDictionary *textureAnimationInfo; // @synthesize textureAnimationInfo=mTextureAnimationInfo;
@property(nonatomic) NSDictionary *textureActionAttributes; // @synthesize textureActionAttributes=mTextureActionAttributes;
@property(nonatomic) unsigned int textureStage; // @synthesize textureStage=mTextureStage;
@property(copy, nonatomic) TSDTextureContext *textureContext; // @synthesize textureContext=mTextureContext;
@property(nonatomic) int textureByGlyphStyle; // @synthesize textureByGlyphStyle=mTextureByGlyphStyle;
@property(nonatomic) unsigned int textureDeliveryStyle; // @synthesize textureDeliveryStyle=mTextureDeliveryStyle;
@property(retain, nonatomic) TSDTextureSet *texture; // @synthesize texture=mTexture;
@property(nonatomic) TSDKnobTracker *currentKnobTracker; // @synthesize currentKnobTracker=mKnobTracker;
@property(nonatomic) TSDRep<TSDContainerRep> *parentRep; // @synthesize parentRep=mParentRep;
@property(retain, nonatomic) TSDLayout *temporaryMixingLayout; // @synthesize temporaryMixingLayout=mTemporaryMixingLayout;
@property(readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property(readonly, nonatomic) NSArray *hyperlinkRegions;
- (BOOL)wantsToDistortWithImagerContext;
- (void)i_shutdownTileQueue;
- (id)i_tileQueue;
- (id)i_queueForTileProvider;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawInBackgroundDuringScroll;
- (int)tilingMode;
- (BOOL)directlyManagesLayerContent;
- (struct CGPoint)centerForRotation;
- (struct CGRect)boundsForResizeGuideUI;
- (BOOL)wantsGuidesWhileResizing;
- (id)infoForTransforming;
- (BOOL)resizeFromCenterOnly;
- (float)opacity;
- (unsigned int)adjustedKnobForComputingResizeGeometry:(unsigned int)arg1;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)targetRectForEditMenu;
- (id)itemsToAddToEditMenu;
- (BOOL)handlesEditMenu;
- (BOOL)isLocked;
- (BOOL)isPlaceholder;
- (BOOL)isSelectable;
- (int)dragHUDAndGuidesTypeAtCanvasPoint:(struct CGPoint)arg1;
- (int)dragTypeAtCanvasPoint:(struct CGPoint)arg1;
- (BOOL)shouldShowSizesInRulers;
- (BOOL)shouldShowDragHUD;
- (BOOL)isDraggable;
- (BOOL)isOpaque;
- (BOOL)masksToBounds;
- (id)allLayers;
- (void)invalidateAnnotationColor;
- (void)invalidateComments;
- (id)commentHighlightLayer;
- (BOOL)shouldShowCommentHighlight;
- (id)additionalLayersOverLayer;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (void)willUpdateLayer:(id)arg1;
- (BOOL)canEditWithEditor:(id)arg1;
- (id)beginEditing;
- (void)willBeRemoved;
- (void)processChangedProperty:(int)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)repDirectlyManagesContentsScaleOfLayer:(id)arg1;
- (void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2;
- (BOOL)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id *)arg2 andQueue:(id *)arg3;
- (id)queueForDrawingTilingLayerInBackground:(id)arg1;
- (struct CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)arg1;
- (BOOL)canDrawTilingLayerInBackground:(id)arg1;
- (BOOL)shouldLayoutTilingLayer:(id)arg1;
- (id)textureForContext:(id)arg1;
- (void)p_setMagicMoveTextureAttributes:(id)arg1;
- (struct CGAffineTransform)unRotatedTransform:(struct CGAffineTransform)arg1;
- (void)markTextureDirty;
@property(readonly, nonatomic) float textureAngle;
- (BOOL)wantsToHandleTapsWhenLocked;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (BOOL)canClipThemeContentToCanvas;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldIgnoreSingleTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (BOOL)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint)arg1 withRecognizer:(id)arg2;
- (BOOL)wantsEditMenuForTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint)arg1 onKnob:(id)arg2;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (void)dynamicResizeDidEndWithTracker:(id)arg1;
- (void)dynamicallyResizingWithTracker:(id)arg1;
- (BOOL)isBeingResized;
- (id)dynamicResizeDidBegin;
- (void)dynamicRotateDidEndWithTracker:(id)arg1;
- (void)p_dynamicRotateDidEnd;
- (void)dynamicallyRotatingWithTracker:(id)arg1;
- (struct CGPoint)unscaledGuidePosition;
- (float)angleForRotation;
- (BOOL)isBeingRotated;
- (void)p_dynamicRotateDidBegin;
- (void)dynamicRotateDidBegin;
- (BOOL)demandsExclusiveSelection;
- (void)endDragInsertFromPalette;
- (void)beginDragInsertFromPalette;
- (BOOL)allowRotateDelegate;
- (BOOL)allowResizeDelegate;
- (BOOL)allowDragDelegate;
- (void)dynamicDragDidEnd;
- (struct CGRect)i_originalLayerFrameInScaledCanvas;
- (struct CGPoint)i_dragOffset;
- (void)i_dynamicDragDidEnd;
- (BOOL)resetGuidesAfterDragAfterReset;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (BOOL)providesGuidesWhileAligning;
- (struct CGRect)snapRectForDynamicDragWithOffset:(struct CGPoint)arg1;
- (BOOL)isBeingDragged;
- (void)p_dynamicDragDidBegin;
- (void)dynamicDragDidBegin;
- (BOOL)isInDynamicOperation;
- (void)p_dynamicOperationDidEnd;
- (void)dynamicOperationDidEnd;
- (void)p_dynamicOperationDidBegin;
- (void)dynamicOperationDidBegin;
- (id)popoutLayers;
- (id)overlayLayers;
- (id)p_addLayersForKnobsToArray:(id)arg1 withDelegate:(id)arg2 isOverlay:(BOOL)arg3;
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;
- (void)i_invalidateSelectionHighlightLayer;
- (id)selectionHighlightLayer;
- (struct CGAffineTransform)transformForHighlightLayer;
- (struct CGRect)boundsForHighlightLayer;
@property(nonatomic) struct CGColor *selectionHighlightColor;
- (float)selectionHighlightWidth;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)fadeKnobsOut;
- (void)fadeKnobsIn;
- (void)turnKnobsOn;
- (void)showKnobsDuringManipulation:(BOOL)arg1;
- (BOOL)shouldShowKnobs;
- (BOOL)shouldDisplayHyperlinkUI;
@property(readonly, nonatomic) BOOL isEditingPath;
- (BOOL)shouldShowCommentUIDirectlyOverRep;
- (BOOL)shouldCreateCommentKnob;
- (BOOL)shouldCreateLockedKnobs;
- (BOOL)shouldCreateSelectionKnobs;
- (BOOL)shouldCreateKnobs;
- (BOOL)shouldShowSelectionHighlight;
- (float)additionalRotationForKnobOrientation;
- (id)knobForTag:(unsigned int)arg1;
- (void)p_actionGhostKnobHit;
- (void)p_toggleHyperlinkUIVisibility;
- (void)p_toggleCommentVisibility;
- (id)newTrackerForKnob:(id)arg1;
- (void)invalidateKnobPositions;
- (struct CGPoint)positionOfStandardKnob:(id)arg1 forBounds:(struct CGRect)arg2;
- (struct CGPoint)p_positionOfActionGhostKnobForBounds:(struct CGRect)arg1;
- (struct CGPoint)positionOfActionGhostKnob;
- (struct CGPoint)positionOfHyperlinkKnob;
- (BOOL)forcesPlacementOnTop;
- (void)updatePositionsOfKnobs:(id)arg1;
- (struct CGRect)trackingBoundsForStandardKnobs;
- (struct CGRect)boundsForStandardKnobs;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)arg1;
- (void)addActionGhostKnobToArrayIfNecessary:(id)arg1;
- (void)addHyperlinkKnobToArray:(id)arg1;
- (void)addCommentKnobToArray:(id)arg1;
- (void)addLockedKnobsToArray:(id)arg1;
- (void)addSelectionKnobsToArray:(id)arg1;
- (id)newSelectionKnobForType:(int)arg1 tag:(unsigned int)arg2;
- (void)addKnobsToArray:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (void)invalidateKnobs;
@property(readonly, nonatomic) NSArray *knobs;
- (void)becameNotSelected;
- (void)becameSelected;
- (BOOL)isSelected;
- (BOOL)isSelectedIgnoringLocking;
- (void)endDrawingOperation;
- (void)beginDrawingOperation;
- (void)recursivelyDrawChildrenInContext:(struct CGContext *)arg1;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)clipRect;
- (BOOL)isDrawingInFlippedContext;
- (void)didDrawInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)setupForDrawingInLayer:(id)arg1 context:(struct CGContext *)arg2;
- (id)colorBehindLayer:(id)arg1;
- (Class)layerClass;
- (void)viewScrollingEnded;
- (void)viewScrollDidChange;
- (void)viewScaleDidChange;
- (void)screenScaleDidChange;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)processChanges:(id)arg1;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnLayoutGeometry:(id)arg3;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2;
- (void)computeDirectLayerFrame:(struct CGRect *)arg1 andTransform:(struct CGAffineTransform *)arg2 basedOnTransform:(struct CGAffineTransform)arg3 andSize:(struct CGSize)arg4;
- (void)antiAliasDefeatLayerFrame:(struct CGRect *)arg1 forTransform:(struct CGAffineTransform)arg2;
- (void)antiAliasDefeatLayerTransform:(struct CGAffineTransform *)arg1 forFrame:(struct CGRect)arg2;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (struct CGAffineTransform)layerTransformInRootForZeroAnchor;
- (struct CGAffineTransform)parentLayerInverseTransformInRootForZeroAnchor;
- (struct CGAffineTransform)layerTransform;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (void)updateFromLayout;
- (void)updateChildrenFromLayout;
- (id)repForHandleSingleTap;
- (id)repForRotating;
- (id)repForSelecting;
- (id)additionalRepsForDragging;
- (id)repForDragging;
- (BOOL)intersectsUnscaledRect:(struct CGRect)arg1;
- (float)shortestDistanceToPoint:(struct CGPoint)arg1 countAsHit:(char *)arg2;
- (BOOL)shouldExpandHitRegionWhenSmall;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(CDUnknownBlockType)arg2;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)hitRep:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (struct CGRect)convertNaturalRectFromLayerRelative:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToLayerRelative:(struct CGRect)arg1;
- (struct CGPoint)convertNaturalPointFromLayerRelative:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToLayerRelative:(struct CGPoint)arg1;
- (struct CGAffineTransform)transformToConvertNaturalFromLayerRelative;
- (struct CGAffineTransform)transformToConvertNaturalToLayerRelative;
- (struct CGPoint)layerOffsetForDragging;
- (struct CGRect)layerFrameInScaledCanvasRelativeToParent;
- (struct CGRect)i_layerFrameInScaledCanvasIgnoringDragging;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)frameInScreenSpace;
- (struct CGRect)frameInUnscaledCanvasIncludingChrome;
- (struct CGRect)frameInUnscaledCanvas;
- (struct CGPoint)convertNaturalPointFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertNaturalPointToUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectFromUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertNaturalRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)naturalBounds;
- (float)angleInRoot;
- (void)addToSet:(id)arg1;
- (id)parentRepToPerformSelecting;
- (void)i_willEnterForeground;
- (void)i_willBeRemoved;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (id)connectedReps;
- (id)commandController;
- (id)info;
@property(readonly, nonatomic) TSDLayout *layout; // @synthesize layout=mLayout;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (BOOL)i_hasInteractiveCanvasController;
- (id)description;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (struct CGRect)i_partition_deepClipRect;

@end
