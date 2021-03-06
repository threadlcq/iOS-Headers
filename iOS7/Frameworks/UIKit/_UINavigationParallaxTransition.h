/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioningEx-Protocol.h"
#import "_UIBasicAnimationFactory-Protocol.h"

@class UIView, _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx>
{
    _Bool _interactionAborted;
    _Bool _clipUnderlapWhileTransitioning;
    long long _operation;
    id <UIViewControllerContextTransitioning> _transitionContext;
    _UINavigationInteractiveTransitionBase *_interactionController;
    _UIParallaxDimmingView *_borderDimmingView;
    _UIParallaxDimmingView *_contentDimmingView;
    UIView *_containerFromView;
    UIView *_containerToView;
    UIView *_clipUnderView;
    long long _transitionStyle;
    double _transitionGap;
}

@property(nonatomic) double transitionGap; // @synthesize transitionGap=_transitionGap;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) _Bool clipUnderlapWhileTransitioning; // @synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning;
@property(retain, nonatomic) UIView *clipUnderView; // @synthesize clipUnderView=_clipUnderView;
@property(retain, nonatomic) UIView *containerToView; // @synthesize containerToView=_containerToView;
@property(retain, nonatomic) UIView *containerFromView; // @synthesize containerFromView=_containerFromView;
@property(retain, nonatomic) _UIParallaxDimmingView *contentDimmingView; // @synthesize contentDimmingView=_contentDimmingView;
@property(retain, nonatomic) _UIParallaxDimmingView *borderDimmingView; // @synthesize borderDimmingView=_borderDimmingView;
@property(nonatomic) _UINavigationInteractiveTransitionBase *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool interactionAborted; // @synthesize interactionAborted=_interactionAborted;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (id)initWithCurrentOperation:(long long)arg1;

@end

