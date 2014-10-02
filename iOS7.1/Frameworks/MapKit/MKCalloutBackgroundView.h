//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPopoverBackgroundView.h"

@class NSMutableArray, UIColor, UIImageView, UIView, _MKCalloutBackgroundMaskView;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView
{
    float _arrowOffset;
    unsigned int _arrowDirection;
    UIView *_containerView;
    UIView *_baseBorderView;
    _MKCalloutBackgroundMaskView *_mainMaskView;
    NSMutableArray *_vendedMaskViews;
    int _mapDisplayStyle;
    UIImageView *_currentArrowShadow;
}

+ (struct UIEdgeInsets)contentViewInsets;
+ (float)arrowHeight;
+ (float)arrowBase;
+ (BOOL)wantsDefaultContentAppearance;
+ (float)_contentViewCornerRadiusForArrowDirection:(unsigned int)arg1;
+ (void)setBeingCreatedForSmallCalloutController:(id)arg1;
@property(nonatomic) int mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *calloutBackgroundColor;
- (void)_extendLeftRightArrow;
- (void)_retractUpDownArrow;
- (void)_showArrow;
- (void)_hideArrow;
- (void)setArrowDirection:(unsigned int)arg1;
- (unsigned int)arrowDirection;
- (void)setArrowOffset:(float)arg1;
- (float)arrowOffset;
- (id)_shadowPath;
- (void)layoutSubviews;
- (void)_layoutMaskView:(id)arg1 withArrowShadow:(BOOL)arg2;
- (id)newMaskLayer;
- (void)_setupViews;
- (struct UIEdgeInsets)_contentViewInsets;
- (id)initWithFrame:(struct CGRect)arg1;

@end
