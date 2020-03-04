//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSRootController.h>

@class NSDictionary, UIViewController;
@protocol PSController;

@interface PSSetupController : PSRootController
{
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}

- (void)statusBarWillChangeHeight:(id)arg1;
- (_Bool)popupStyleIsModal;
- (_Bool)usePopupStyle;
- (void)popControllerOnParent;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (id)controller;
- (void)setParentController:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setupController;
- (id)parentController;
- (void)handleURL:(id)arg1;
- (id)init;

@end

