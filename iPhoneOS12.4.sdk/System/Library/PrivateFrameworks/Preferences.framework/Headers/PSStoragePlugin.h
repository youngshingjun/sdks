//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PSStoragePlugin : NSObject
{
    NSString *_identifier;
    NSArray *_tips;
}

@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (long long)externDataSizeForApp:(id)arg1;
- (id)externDataSizeAppIdentifiers;
- (id)documentSpecifiersForApp:(id)arg1;
- (id)documentAppIdentifiers;
- (void)reloadTips;
- (void)notifyUsageChanged;

@end

