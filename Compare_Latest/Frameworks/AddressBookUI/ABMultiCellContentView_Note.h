/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABMultiCellContentView.h>

#import "ABSwellTextViewDelegate-Protocol.h"

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate>
{
    ABSwellTextView *_textView;
}

+ (id)swellTextViewForReuse;
+ (void)setupTextView:(id)arg1 withStyleProvider:(id)arg2 whenEditing:(BOOL)arg3;
+ (id)labelTextForPropertyGroup:(id)arg1 info:(id)arg2 styleProvider:(id)arg3;
+ (struct CGSize)layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;
- (BOOL)shouldUseTwoLineLabels;
- (struct CGRect)frameForLabel;
- (void)dealloc;
- (void)reload;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setLabelText:(id)arg1;
- (void)reloadFromModel;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (struct CGRect)focusRectForView:(id)arg1;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (id)viewForFirstResponder;
- (BOOL)canBeginEditingAnytime;
- (void)swellTextViewTextDidChange:(id)arg1;
- (BOOL)swellTextViewShouldBeginEditing:(id)arg1;
- (BOOL)swellTextViewShouldEndEditing:(id)arg1;
- (void)swellTextViewDidEndEditing:(id)arg1;
- (void)swellTextViewDidBeginEditing:(id)arg1;
- (void)swellTextView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)setAbCellStyle:(int)arg1;

@end
