//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer
{
    unsigned char _lastEncoded;
    unsigned long _required;
    BOOL _forTextPart;
    BOOL _badlyEncoded;
}

@property(nonatomic) BOOL forTextPart; // @synthesize forTextPart=_forTextPart;
- (void)done;
- (int)appendData:(id)arg1;

@end
