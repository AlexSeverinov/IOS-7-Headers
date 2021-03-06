/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iWorkImport/GQDPath.h>

#import "GQDNameMappable.h"

__attribute__((visibility("hidden")))
@interface GQDBezierPath : GQDPath <GQDNameMappable>
{
    struct CGPath *mPath;
    char *mPathStr;
    BOOL mHasVFlip;
    BOOL mVFlip;
    BOOL mHasHFlip;
    BOOL mHFlip;
}

+ (struct __CFString *)createCFStringFromPath:(struct CGPath *)arg1;
+ (const struct StateSpec *)stateForReading;
+ (struct CGPath *)createPathFromCString:(const char *)arg1;
- (BOOL)horizontalFlip;
- (BOOL)verticalFlip;
- (BOOL)hasHorizontalFlip;
- (BOOL)hasVerticalFlip;
- (struct CGPath *)createBezierPath;
- (char *)pathStr;
- (struct CGPath *)path;
- (BOOL)isRectangular;
- (void)dealloc;
- (id)initWithPathString:(const char *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

@end

