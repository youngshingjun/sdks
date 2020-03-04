//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Preferences/UITableViewDataSource-Protocol.h>
#import <Preferences/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PSSearchResults, UITableView;
@protocol PSSearchResultsControllerDelegate;

@interface PSSearchResultsController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSMutableDictionary *_iconViewMap;
    NSMutableArray *_reusableIconViews;
    PSSearchResults *_searchResults;
    id <PSSearchResultsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <PSSearchResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PSSearchResults *searchResults; // @synthesize searchResults=_searchResults;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateIconViews:(_Bool)arg1;
- (void)_removeIconViewForSection:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadData;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

