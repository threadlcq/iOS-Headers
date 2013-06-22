/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIImageView, UIView;

@interface RemoteUITableViewCell : UITableViewCell
{
    UIImageView *_invalidRowView;
    BOOL _forceFullDetailLabel;
    BOOL _leftAlignDetailLabel;
    int _remoteUIAccessoryType;
    UIView *_remoteUIAccessoryView;
}

+ (id)alertImage;
- (void)_accessoriesChanged;
@property(nonatomic) int remoteUIAccessoryType; // @synthesize remoteUIAccessoryType=_remoteUIAccessoryType;
@property(retain, nonatomic) UIView *remoteUIAccessoryView; // @synthesize remoteUIAccessoryView=_remoteUIAccessoryView;
- (void)layoutSubviews;
- (void)setRowInvalid:(BOOL)arg1;
- (void)dealloc;
@property(nonatomic) BOOL leftAlignDetailLabel; // @synthesize leftAlignDetailLabel=_leftAlignDetailLabel;
@property(nonatomic) BOOL forceFullSizeDetailLabel; // @synthesize forceFullSizeDetailLabel=_forceFullDetailLabel;

@end
