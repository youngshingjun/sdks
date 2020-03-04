//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSTableCell.h>

#import <Preferences/PSPasscodeFieldDelegate-Protocol.h>

@class NSString, PSPasscodeField;
@protocol KeychainSyncPasscodeFieldDelegate;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate>
{
    PSPasscodeField *_passcodeField;
    _Bool _convertsNumeralsToASCII;
    _Bool _denyFirstResponder;
    id <KeychainSyncPasscodeFieldDelegate> _delegate;
}

@property(readonly, nonatomic) PSPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) _Bool denyFirstResponder; // @synthesize denyFirstResponder=_denyFirstResponder;
@property(nonatomic) _Bool convertsNumeralsToASCII; // @synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII;
@property(nonatomic) __weak id <KeychainSyncPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (long long)keyboardType;
- (void)deleteBackward;
- (id)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (_Bool)hasText;
- (id)passcodeText;
- (_Bool)becomeFirstResponder;
- (void)setPasscodeText:(id)arg1;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)_setSecureTextEntry:(_Bool)arg1;
- (void)cellTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

