//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BBBulletinTransaction : NSObject
{
    NSString *_bulletinID;
    unsigned int _transactionID;
}

+ (id)transactionWithBulletinID:(id)arg1;
@property(readonly, nonatomic) unsigned int transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) NSString *bulletinID; // @synthesize bulletinID=_bulletinID;
- (unsigned int)incrementTransactionID;
- (id)description;
- (void)dealloc;
- (id)initWithBulletinID:(id)arg1;

@end
