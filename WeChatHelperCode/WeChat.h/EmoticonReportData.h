//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface EmoticonReportData : MMObject
{
}

+ (void)ReportEmoticonAction:(unsigned long long)arg1 MD5:(id)arg2 Scene:(unsigned long long)arg3 DesignerId:(id)arg4 ProductId:(id)arg5;
+ (void)ReportEmoticonDownloadFromQrcode;
+ (void)ReportEmoticonDownloadFromNodeView;
+ (void)ReportEmoticonDownloadFromSns;
+ (void)ReportEmoticonDownloadFromPreview;
+ (void)ReportEmoticonBoardShowClick;

@end

