/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ABUIPerson, NSArray;

@interface ABAbstractPropertyGroup : NSObject
{
    NSArray *_people;
    id <ABStyleProvider> _styleProvider;
    BOOL _hasChanges;
    ABUIPerson *_preinsertedPerson;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(retain, nonatomic) ABUIPerson *preinsertedPerson; // @synthesize preinsertedPerson=_preinsertedPerson;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
- (BOOL)canSave;
- (void)reloadFromModel;
- (void)updateRecord;
- (int)property;
- (void)dealloc;
- (id)init;

@end
