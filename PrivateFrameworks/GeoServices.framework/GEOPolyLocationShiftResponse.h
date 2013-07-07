/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@interface GEOPolyLocationShiftResponse : PBCodable
{
    struct {
        double *list;
        unsigned int count;
        unsigned int size;
    } _parameters;
    double _radius;
    int _status;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) int status; // @synthesize status=_status;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setParameters:(double *)arg1 count:(unsigned int)arg2;
- (double)parametersAtIndex:(unsigned int)arg1;
- (void)addParameters:(double)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) double *parameters;
@property(readonly, nonatomic) unsigned int parametersCount;
- (void)dealloc;

@end
