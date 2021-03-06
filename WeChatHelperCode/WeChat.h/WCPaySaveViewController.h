//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, UILabel, WCPayBindCardItem, WCPayMoneyTextFieldItem;

@interface WCPaySaveViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    id <WCPaySaveViewControllerDelegate> m_delegate;
    WCPayMoneyTextFieldItem *m_textFieldItem;
    WCPayBindCardItem *m_textBindCardItem;
    UILabel *oDetailLabel;
}

- (void).cxx_destruct;
- (void)refreshBindCardSaveInfo;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)refreshViewWithData:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)viewDidLoad;
- (void)clickInfoCell:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)FillSaveMoneyCancel;
- (void)initFooterView;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)init;

@end

