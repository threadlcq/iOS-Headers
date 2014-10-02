//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject
{
    double _finishTime;
    double _receivedResponseTime;
    double _renderBeginTime;
    double _renderEndTime;
    double _startTime;
    NSURLResponse *_urlResponse;
}

@property(copy, nonatomic) NSURLResponse *URLResponse; // @synthesize URLResponse=_urlResponse;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)setRenderFinishTime:(double)arg1;
- (void)setRenderBeginTime:(double)arg1;
- (void)setReceivedResponseTime:(double)arg1;
- (void)setFinishTime:(double)arg1;
@property(readonly, nonatomic) double renderEndInterval;
@property(readonly, nonatomic) double renderBeginInterval;
@property(readonly, nonatomic) double receivedResponseInterval;
@property(readonly, nonatomic) double finishInterval;
- (void)dealloc;

@end
