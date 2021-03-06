//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBControlCenterSectionView.h"

@class NSMutableArray, UIScrollView;

@interface SBCCButtonLayoutView : SBControlCenterSectionView
{
    NSMutableArray *_buttons;
    UIScrollView *_scrollView;
    double _interButtonPadding;
    unsigned long long _buttonStretchThreshold;
    unsigned long long _buttonShrinkThreshold;
    long long _maxButtons;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) long long maxButtons; // @synthesize maxButtons=_maxButtons;
@property(nonatomic) unsigned long long buttonShrinkThreshold; // @synthesize buttonShrinkThreshold=_buttonShrinkThreshold;
@property(nonatomic) unsigned long long buttonStretchThreshold; // @synthesize buttonStretchThreshold=_buttonStretchThreshold;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) double interButtonPadding; // @synthesize interButtonPadding=_interButtonPadding;
- (void)layoutSubviews;
- (void)_setButtons:(id)arg1;
- (void)_didRemoveButton:(id)arg1;
- (void)_didAddButton:(id)arg1;
- (void)resortButtons;
- (void)_resortButtons;
- (void)removeButton:(id)arg1;
- (void)addButton:(id)arg1;
- (id)buttons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

