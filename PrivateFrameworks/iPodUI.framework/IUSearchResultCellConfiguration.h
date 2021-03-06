/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iPodUI/IUMediaEntityCellConfiguration.h>

@interface IUSearchResultCellConfiguration : IUMediaEntityCellConfiguration
{
    int _groupingType;
}

+ (float)rowHeightForGlobalContext:(id)arg1;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)reloadImages;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (BOOL)showsUntruncationCallout;
- (void)reloadLayoutInformation;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (struct CGSize)artworkSize;
- (id)init;

@end

