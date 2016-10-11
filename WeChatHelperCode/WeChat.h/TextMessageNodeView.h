//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "ILinkEventExt.h"
#import "IMsgRevokeExt.h"
#import "ITranslateMsgMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "TextFloatPreviewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class InteractionLabel, MMTipsViewController, MMUILabel, NSString, RichTextView, TextFloatPreview, UIButton, UIImageView, UIView, WCUIActionSheet;

@interface TextMessageNodeView : BaseMessageNodeView <WCActionSheetDelegate, RichTextLayoutDelegate, ILinkEventExt, IMsgRevokeExt, TextFloatPreviewDelegate, UIAlertViewDelegate, ITranslateMsgMgrExt, MMTipsViewControllerDelegate>
{
    RichTextView *m_oRichTextView;
    TextFloatPreview *m_floatPreview;
    UIView *m_oContainerTextView;
    UIImageView *m_oTranslateLineView;
    UIButton *m_oTranslateStatusButton;
    _Bool m_bTranslateAnimation;
    MMTipsViewController *m_oTranslateIntroView;
    WCUIActionSheet *_uiActionSheet;
    MMUILabel *_labelTitle;
    UIView *_labelTitleLine;
    _Bool _bShowFullText;
    double _fulltextHeight;
    double _limitHeight;
    InteractionLabel *_fullTextLabel;
    double m_fContentMarginRight;
}

+ (_Bool)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)handleChangeForTranslateMsg;
- (void)resizeFrameForTranslate;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (id)patternText;
- (id)titleText;
- (id)bigTitleText;
- (id)getContactDisplayName:(id)arg1;
- (void)dealloc;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onHide;
- (void)onWindowHide;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onMoreOperate:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onTranslateMsg:(id)arg1;
- (void)translateMsg;
- (_Bool)isSupportingTranslation;
- (void)updateSubviewsForTranslate;
- (void)onStopTranslateAnimation;
- (void)initTranslateStatusButton;
- (void)reLayoutSubviews;
- (_Bool)canShowTranslateBottomView;
- (void)showOpearation;
- (void)onOrientationChanged;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopyLinkText:(id)arg1;
- (_Bool)onlyContainsLink;
- (struct CGRect)getPreviewLinkFrameForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)getPreviewLinkForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (_Bool)ifAppInfoAreaInContent;
- (void)layoutSubviewsInternal;
- (double)calculateTranslatedRichTextWidth;
- (double)calculateOriginRichTextHeight;
- (_Bool)shouldShowTranslatedText;
- (void)setRichtextViewContent;
- (void)updateSubviews;
- (void)updateBkgImage:(_Bool)arg1;
- (void)updateFrameForShowFullText;
- (void)showFullText;
- (struct CGSize)sizeForFullTextLabel;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)initLabelTitle;
- (long long)parserType;
- (void)calculateLeftRightMargin;
- (double)labelWidth;
- (void)updateStatus:(id)arg1;
- (id)getSystemFont;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
