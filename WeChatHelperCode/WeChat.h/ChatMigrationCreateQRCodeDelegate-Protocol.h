//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BakChatCreateQRcodeOfflineResponse, BakChatCreateQRcodeResponse;

@protocol ChatMigrationCreateQRCodeDelegate <NSObject>
- (void)onGetQRCodeOffline:(BakChatCreateQRcodeOfflineResponse *)arg1;
- (void)onGetQRCode:(BakChatCreateQRcodeResponse *)arg1;
@end

