/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MusicCarDisplayUI/MSSectionedTableViewController.h>

#import "AFContextProvider.h"

@interface MSAlbumsTableViewController : MSSectionedTableViewController <AFContextProvider>
{
    BOOL _shouldShowArtistSubtitle;
}

@property(nonatomic) BOOL shouldShowArtistSubtitle; // @synthesize shouldShowArtistSubtitle=_shouldShowArtistSubtitle;
- (id)_representedCollectionForQuery;
- (id)getCurrentContext;
- (BOOL)allowContextProvider:(id)arg1;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end
