/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IUGeniusSeeder : NSObject
{
    BOOL _shouldContinuePlayingCurrentItem;
    BOOL _shouldSwitchViewControllerContexts;
}

@property(nonatomic) BOOL shouldSwitchViewControllerContexts; // @synthesize shouldSwitchViewControllerContexts=_shouldSwitchViewControllerContexts;
@property(nonatomic) BOOL shouldContinuePlayingCurrentItem; // @synthesize shouldContinuePlayingCurrentItem=_shouldContinuePlayingCurrentItem;
- (void)seedGeniusPlaylist:(id)arg1 withItem:(id)arg2 timeout:(double)arg3 completionBlock:(id)arg4;
- (id)init;

@end

