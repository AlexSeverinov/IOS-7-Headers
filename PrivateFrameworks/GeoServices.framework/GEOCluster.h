/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOPlaceResult;

@interface GEOCluster : PBCodable
{
    CDStruct_56d48c16 _indexs;
    GEOPlaceResult *_container;
}

@property(retain, nonatomic) GEOPlaceResult *container; // @synthesize container=_container;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setIndexs:(int *)arg1 count:(unsigned int)arg2;
- (int)indexAtIndex:(unsigned int)arg1;
- (void)addIndex:(int)arg1;
- (void)clearIndexs;
@property(readonly, nonatomic) int *indexs;
@property(readonly, nonatomic) unsigned int indexsCount;
@property(readonly, nonatomic) BOOL hasContainer;
- (void)dealloc;

@end

