/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface UICollectionViewLayoutInvalidationContext : NSObject
{
    BOOL _invalidateDataSource;
    NSDictionary *_invalidatedSupplementaryViews;
}

- (void)_setInvalidateDataSourceCounts:(BOOL)arg1;
@property(readonly, nonatomic) BOOL invalidateDataSourceCounts;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (id)_invalidatedSupplementaryViews;
- (void)dealloc;

@end

