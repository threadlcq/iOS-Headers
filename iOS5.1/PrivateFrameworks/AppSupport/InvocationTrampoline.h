/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface InvocationTrampoline : NSObject
{
    id _target;
}

- (void)dealloc;
- (void)performInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
@property(retain) id target; // @synthesize target=_target;

@end
