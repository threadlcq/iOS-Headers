/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKLeaderboardCategoryInternal, NSString, UIImage;

@interface GKLeaderboardCategory : NSObject
{
    GKLeaderboardCategoryInternal *_internal;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) GKLeaderboardCategoryInternal *internal; // @synthesize internal=_internal;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)description;
- (void)dealloc;
@property(readonly, nonatomic) NSString *imageURL;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *categoryID; // @dynamic categoryID;
@property(nonatomic) int friendCount; // @dynamic friendCount;
@property(retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(nonatomic) int overallRank; // @dynamic overallRank;
@property(nonatomic) int overallRankCount; // @dynamic overallRankCount;
@property(nonatomic) int rankAmongFriends; // @dynamic rankAmongFriends;

@end

