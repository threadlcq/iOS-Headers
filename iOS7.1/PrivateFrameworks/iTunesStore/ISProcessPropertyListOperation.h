//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation
{
    ISPropertyListProvider *_dataProvider;
    NSDictionary *_propertyList;
}

@property(retain) ISPropertyListProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void)run;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end
