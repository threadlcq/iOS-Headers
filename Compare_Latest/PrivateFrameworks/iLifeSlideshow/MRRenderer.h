/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CADisplayLink, MCMontage, MRLayerParallelizer, MRRendererInternal, NSDictionary;

@interface MRRenderer : NSObject
{
    MRLayerParallelizer *mTopMRLayer;
    struct CGSize mSize;
    MRRendererInternal *mInternal;
    id <MREditingDelegate> mEditingDelegate;
    id <MRFeatureDelegate> mFeatureDelegate;
    NSDictionary *mDescriptionsForRandomTransitionPresetIDs;
    CADisplayLink *mDisplayLink;
    double mDisplayLinkTimestamp;
    _Bool mIsEditing;
    _Bool mIsPlaying;
    _Bool mPushRendering;
    _Bool mRequestRenderingOnChanges;
    _Bool mDisplaysFPS;
    _Bool mDisplaysPlayingIDs;
    _Bool mDisplaysIsPreloadingImages;
    _Bool mIsCleanedUp;
    _Bool _asynchronousOperationsAreSuspended;
    _Bool _allowsThumbnails;
    int mMode;
    int mOrientation;
    float mVolume;
    MCMontage *mMontage;
    id <MZMediaManagement> mAssetManagementDelegate;
    id <MRRenderingDelegate> mRenderingDelegate;
    double mTimeQuantum;
    NSDictionary *mParameters;
    double _fadeInStartTime;
    double _fadeInDuration;
    double _fadeOutStartTime;
    double _fadeOutDuration;
}

+ (_Bool)isDiskImageCacheEnabled;
+ (void)enableDiskImageCache;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeOutStartTime; // @synthesize fadeOutStartTime=_fadeOutStartTime;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) double fadeInStartTime; // @synthesize fadeInStartTime=_fadeInStartTime;
@property(nonatomic) _Bool allowsThumbnails; // @synthesize allowsThumbnails=_allowsThumbnails;
@property(setter=suspendAsynchronousOperations:) _Bool asynchronousOperationsAreSuspended; // @synthesize asynchronousOperationsAreSuspended=_asynchronousOperationsAreSuspended;
@property(readonly) _Bool isCleanedUp; // @synthesize isCleanedUp=mIsCleanedUp;
@property(readonly) NSDictionary *parameters; // @synthesize parameters=mParameters;
@property(nonatomic) double timeQuantum; // @synthesize timeQuantum=mTimeQuantum;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
@property(retain) id <MREditingDelegate> editingDelegate; // @synthesize editingDelegate=mEditingDelegate;
@property(retain) id <MRRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=mRenderingDelegate;
@property(retain) id <MRFeatureDelegate> featureDelegate; // @synthesize featureDelegate=mFeatureDelegate;
@property(retain, nonatomic) id <MZMediaManagement> assetManagementDelegate; // @synthesize assetManagementDelegate=mAssetManagementDelegate;
@property(nonatomic) _Bool displaysIsPreloadingImages; // @synthesize displaysIsPreloadingImages=mDisplaysIsPreloadingImages;
@property(nonatomic) _Bool displaysPlayingIDs; // @synthesize displaysPlayingIDs=mDisplaysPlayingIDs;
@property(nonatomic) _Bool displaysFPS; // @synthesize displaysFPS=mDisplaysFPS;
@property(nonatomic) _Bool requestRenderingOnChanges; // @synthesize requestRenderingOnChanges=mRequestRenderingOnChanges;
@property(nonatomic) _Bool pushRendering; // @synthesize pushRendering=mPushRendering;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=mIsEditing;
@property(nonatomic) int mode; // @synthesize mode=mMode;
@property(nonatomic) struct CGSize size; // @synthesize size=mSize;
@property(retain, nonatomic) MCMontage *montage; // @synthesize montage=mMontage;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 andOrientation:(int)arg2 withDuration:(double)arg3;
- (void)addIDToDisplay:(id)arg1:(id)arg2;
- (void)imagePreloadingEnded;
- (void)imagePreloadingBegan;
- (void)stall;
- (void)effect:(id)arg1 requestedNumberOfSlides:(unsigned long long)arg2 firstSlideIndexStillNeeded:(unsigned long long)arg3;
- (void)_effectRequestedSlides:(id)arg1;
- (void)nearingEndForSerializer:(id)arg1;
- (void)_nearingEndForSerializer:(id)arg1;
- (void)dumpActiveHierarchy;
- (id)snapshotOfStates:(id)arg1 atSize:(struct CGSize)arg2;
- (void)gotoState:(id)arg1;
- (id)currentState;
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)arg1;
- (id)layerForPlugObjectID:(id)arg1;
- (id)layerForPlug:(id)arg1;
- (void)transitionToPreviousPlugInContainerOfPlug:(id)arg1;
- (void)transitionToNextPlugInContainerOfPlug:(id)arg1;
@property(readonly) _Bool isOffscreen;
@property _Bool usesNewImageManager;
@property(nonatomic) unsigned char currentLayoutIndex;
- (void)disableFadeInAndOut;
- (void)resetFadeInAndOut;
@property(nonatomic) int orientation; // @synthesize orientation=mOrientation;
- (void)setContextOffset:(struct CGPoint)arg1;
- (struct CGPoint)contextOffset;
- (void)setTemporarySize:(struct CGSize)arg1;
- (void)_syncTimeToOuter;
@property(nonatomic) double time;
- (void)setUsesExternalDisplayLink:(_Bool)arg1;
- (void)moveNavigatorFromForthToBackHistory:(id)arg1;
- (void)moveNavigatorFromBackToForthHistory:(id)arg1;
- (void)removeNavigatorFromForthHistory:(id)arg1;
- (void)removeNavigatorFromBackHistory:(id)arg1;
- (void)addNavigatorToForthHistory:(id)arg1;
- (void)addNavigatorToBackHistory:(id)arg1;
- (_Bool)canGoForth;
- (_Bool)canGoBack;
- (void)goForth;
- (void)goBack;
- (void)stepBackward;
- (void)stepForward;
- (void)_doSnapshot;
- (void)_renderForScreenBurnTestAtTime:(double)arg1;
- (void)_renderWithPassParameters:(id)arg1;
- (void)_stopRenderTimer;
- (void)_startRenderTimer;
- (void)_renderOnDisplayLink:(id)arg1;
- (void)updateTimeWithDisplayLinkTimestamp:(double)arg1;
- (void)_renderThreadMain;
- (void)warmupVideo:(_Bool)arg1;
- (void)warmupAudio:(_Bool)arg1;
- (_Bool)requestRenderingWithin:(double)arg1;
- (void)requestRendering:(_Bool)arg1;
- (void)pauseWhenStill;
- (void)_resume;
- (void)_pause;
- (void)_syncIsPlayingToOuter;
- (void)resume;
- (void)pause;
@property(readonly) _Bool isPlaying; // @synthesize isPlaying=mIsPlaying;
@property _Bool slaveFrameMode;
- (void)unlockRendering;
- (void)lockRendering;
- (void)setEAGLContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithParameters:(id)arg1;

@end
