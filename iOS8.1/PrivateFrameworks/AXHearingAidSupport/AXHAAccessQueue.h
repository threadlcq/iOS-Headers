//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface AXHAAccessQueue : NSObject
{
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    unsigned int _specialBehaviors;
}

+ (id)backgroundAccessQueue;
+ (id)mainAccessQueue;
@property(nonatomic) unsigned int specialBehaviors; // @synthesize specialBehaviors=_specialBehaviors;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(copy, nonatomic) NSString *threadLocalStorageKey; // @synthesize threadLocalStorageKey=_threadLocalStorageKey;
- (void)_performBlock:(CDUnknownBlockType)arg1 withDispatchFunction:(CDUnknownFunctionPointerType)arg2 synchronously:(BOOL)arg3 accessQueueContext:(unsigned int)arg4;
- (unsigned int)_accessQueueContextInCurrentExecutionThread;
- (id)description;
- (BOOL)canOnlyReadInCurrentExecutionThread;
- (BOOL)canWriteInCurrentExecutionThread;
- (BOOL)canReadInCurrentExecutionThread;
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;
- (void)performAsynchronousWritingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousReadingBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousWritingBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReadingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL behavesWithoutErrorReporting;
@property(readonly, nonatomic) BOOL behavesAsMainQueue;
@property(readonly, copy, nonatomic) NSString *label;
- (void)dealloc;
- (id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(BOOL)arg3;
- (id)_initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 specialBehaviors:(unsigned int)arg3;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;
- (id)init;

@end

