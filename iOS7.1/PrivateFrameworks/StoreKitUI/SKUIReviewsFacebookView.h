//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SKUIClientContext, SKUIColorScheme, UIButton, UIControl, UIImageView, UILabel;

@interface SKUIReviewsFacebookView : UIView
{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    NSArray *_friendNames;
    UILabel *_friendsLabel;
    UIButton *_likeButton;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    BOOL _userLiked;
    UIView *_separatorView;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic, getter=isUserLiked) BOOL userLiked; // @synthesize userLiked=_userLiked;
@property(readonly, nonatomic) UIControl *likeToggleButton; // @synthesize likeToggleButton=_likeButton;
@property(copy, nonatomic) NSArray *friendNames; // @synthesize friendNames=_friendNames;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
- (void).cxx_destruct;
- (void)_reloadLikeButtonState;
- (void)_reloadFriendNamesLabel;
- (id)_composedStringForNames:(id)arg1 userLiked:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithClientContext:(id)arg1;

@end
