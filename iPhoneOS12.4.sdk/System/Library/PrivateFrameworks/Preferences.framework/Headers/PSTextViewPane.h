//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

@class UITextView;

@interface PSTextViewPane : PSEditingPane
{
    UITextView *_textView;
}

- (void)setText:(id)arg1;
- (void)setPreferenceSpecifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)handlesDoneButton;

@end

