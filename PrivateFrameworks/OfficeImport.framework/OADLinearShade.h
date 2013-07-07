/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/OADShade.h>

__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade
{
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isScaledOverridden;
- (void)setScaled:(BOOL)arg1;
- (BOOL)scaled;
- (BOOL)isAngleOverridden;
- (void)setAngle:(float)arg1;
- (float)angle;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
