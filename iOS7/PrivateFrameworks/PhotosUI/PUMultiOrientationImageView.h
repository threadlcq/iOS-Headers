/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, UIImage;

@interface PUMultiOrientationImageView : UIView
{
    NSArray *_orientedSubviews;
    UIView *_currentOrientedSubview;
    _Bool _allowsEdgeAntialiasing;
    UIImage *_image;
}

@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;

@end
