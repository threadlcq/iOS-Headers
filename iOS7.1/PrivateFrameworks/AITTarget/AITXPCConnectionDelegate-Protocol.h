//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AITXPCConnection, NSDictionary, NSObject<OS_xpc_object>, NSString;

@protocol AITXPCConnectionDelegate <NSObject>
- (void)xpcConnectionFailed:(AITXPCConnection *)arg1;
- (void)xpcConnectionUnhandledMessage:(NSObject<OS_xpc_object> *)arg1;
- (void)xpcConnection:(AITXPCConnection *)arg1 receivedMessage:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end
