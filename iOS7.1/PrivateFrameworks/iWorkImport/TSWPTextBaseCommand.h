//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

__attribute__((visibility("hidden")))
@interface TSWPTextBaseCommand : TSKCommand
{
    unsigned int _flags;
}

- (void)invalidateRange:(struct _NSRange)arg1 onStorage:(id)arg2;
- (void)invalidateSelection:(id)arg1 onStorage:(id)arg2;
@property(nonatomic) BOOL suppressChangeNotifications;
- (void)removeFlag:(int)arg1;
- (void)addFlag:(int)arg1;
- (unsigned int)flags;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (void)setSelection:(id)arg1 onStorage:(id)arg2;
- (void)setSelection:(id)arg1 onStorage:(id)arg2 withFlags:(unsigned int)arg3;

@end
