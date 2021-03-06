//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLCrashReporterDelegate.h"

@class NSLock, NSMutableArray, NSString;

@interface MMCrashReportExtLogMgr : NSObject <PLCrashReporterDelegate>
{
    NSString *m_nsJailbreak;
    unsigned long long m_uin;
    NSLock *m_lock;
    NSMutableArray *m_logCycleArray;
    unsigned long long m_tailPoint;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onMemoryWarning;
- (unsigned long long)getUin;
- (id)getExtLogs;
- (void)setCurUin:(unsigned long long)arg1;
- (id)formateLog:(const char *)arg1 withLogInfo:(struct XLoggerInfo_t)arg2;
- (void)addLogInfo:(struct XLoggerInfo_t)arg1 withMessage:(const char *)arg2;
- (void)dealloc;
- (void)resetLogCycleArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

