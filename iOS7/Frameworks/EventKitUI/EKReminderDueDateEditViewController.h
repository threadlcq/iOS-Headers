/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

#import "EKPickerTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EKPickerTableView, NSDate;

@interface EKReminderDueDateEditViewController : EKEditItemViewController <UITableViewDelegate, UITableViewDataSource, EKPickerTableViewDelegate>
{
    NSDate *_dueDate;
    BOOL _hasDueDate;
    BOOL _isAllDay;
    BOOL _shouldShowAllDay;
    EKPickerTableView *_container;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)_updateDueDateString;
- (void)_updateDueDateStringForCell:(id)arg1;
- (void)_updateDatePickerMode;
- (void)_updateDatePickerDate;
- (void)_updateDatePickerPresenceAnimated:(BOOL)arg1;
- (void)_updateEnabledState;
- (void)pickerTableViewDidChangeDatePickerInterval:(id)arg1;
- (void)_datePickerChanged:(id)arg1;
- (void)_isAllDayChanged:(id)arg1;
- (void)_hasDueDateChanged:(id)arg1;
- (void)_localeChanged;
- (void)setShouldShowAllDay:(BOOL)arg1;
- (BOOL)isAllDay;
- (void)setIsAllDay:(BOOL)arg1;
- (BOOL)hasDueDate;
- (void)setHasDueDate:(BOOL)arg1;
- (void)_setIsAllDay:(BOOL)arg1 updateSwitch:(BOOL)arg2;
- (void)_setHasDueDate:(BOOL)arg1 updateSwitch:(BOOL)arg2 updateTableAnimated:(BOOL)arg3;
- (id)dueDate;
- (void)setDueDate:(id)arg1;
- (void)_setDueDate:(id)arg1 updateDatePicker:(BOOL)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end
