/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol WLCardViewDelegate <NSObject>

@optional
- (BOOL)passViewBackGrowsCentered:(id)arg1;
- (void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
- (BOOL)passViewShouldFlip:(id)arg1;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passViewTapped:(id)arg1;
- (void)passViewTouchesCancelled:(id)arg1;
- (void)passViewTouchesBegan:(id)arg1;
@end
