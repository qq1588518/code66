//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMDumpReportDataSetting : NSObject
{
}

+ (id)getFileNamesWithPrefix:(id)arg1 FromFilesNameArray:(id)arg2;
+ (id)getDumpFilePathesWithFilePrefix:(id)arg1 withDate:(id)arg2;
+ (id)getDumpFilePathesWithFilePrefix:(id)arg1;
+ (id)getFilePrefixWithCrashType:(unsigned long long)arg1;
+ (id)getDumpReportDataWithReportType:(unsigned long long)arg1 WithDate:(id)arg2;
+ (id)getDumpReportDataWithReportType:(unsigned long long)arg1;
+ (void)dumpData:(id)arg1 withReportType:(unsigned long long)arg2;
+ (void)dumpData:(id)arg1 withReportType:(unsigned long long)arg2 withBlockTime:(unsigned long long)arg3;
+ (id)getAllTypeReportDataWithDate:(id)arg1;
+ (id)getAllTypeReportData;
+ (id)randomGetOneReportData;

@end

