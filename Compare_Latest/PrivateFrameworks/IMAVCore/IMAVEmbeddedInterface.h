/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
{
}

+ (void)updateCriticalState;
- (long long)_runPingTestForChat:(id)arg1;
- (long long)_checkNetworkForChat:(id)arg1 requiresWifi:(_Bool)arg2;
- (void)chatStateUpdated;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (void)endInterruptionForChat:(id)arg1;
- (id)_chatForAudioPropertiesIgnoringChat:(id)arg1;
- (void)startInterruptionForChat:(id)arg1;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;

@end
