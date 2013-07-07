/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AXElement, AXElementGroup, AXElementGroupPruner, AXVisualElementGrouper, NSArray, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AXElementFetcher : NSObject
{
    NSObject<OS_dispatch_queue> *_elementFetchQueue;
    NSObject<OS_dispatch_queue> *_elementAccessQueue;
    struct __AXObserver *_axRuntimeNotificationObserver;
    unsigned int _scheduledFetchEvent;
    NSObject<OS_dispatch_source> *_eventCoalesceTimer;
    BOOL _enabled;
    BOOL _eventManagementEnabled;
    BOOL _groupingEnabled;
    BOOL _shouldUsePadInterfaceHeuristics;
    BOOL _fetchingElements;
    id <AXElementFetcherDelegate> _delegate;
    int _fetchPolicy;
    NSMapTable *_fetchObservers;
    unsigned int _activeFetchEvents;
    NSArray *_elementCache;
    AXElementGroup *_rootGroupCache;
    AXElementGroup *_keyboardGroupCache;
    AXElement *_currentApp;
    AXVisualElementGrouper *_visualElementGrouper;
    AXElementGroupPruner *_elementGroupPruner;
    NSMutableDictionary *_postFetchFilters;
}

+ (id)currentAppWithPositionHint:(struct CGPoint)arg1;
+ (id)springBoardElement;
+ (id)systemWideElement;
@property(retain, nonatomic) NSMutableDictionary *postFetchFilters; // @synthesize postFetchFilters=_postFetchFilters;
@property(nonatomic, getter=isFetchingElements) BOOL fetchingElements; // @synthesize fetchingElements=_fetchingElements;
@property(nonatomic) BOOL shouldUsePadInterfaceHeuristics; // @synthesize shouldUsePadInterfaceHeuristics=_shouldUsePadInterfaceHeuristics;
@property(retain, nonatomic) AXElementGroupPruner *elementGroupPruner; // @synthesize elementGroupPruner=_elementGroupPruner;
@property(retain, nonatomic) AXVisualElementGrouper *visualElementGrouper; // @synthesize visualElementGrouper=_visualElementGrouper;
@property(retain, nonatomic) AXElement *currentApp; // @synthesize currentApp=_currentApp;
@property(nonatomic, getter=isGroupingEnabled) BOOL groupingEnabled; // @synthesize groupingEnabled=_groupingEnabled;
@property(retain, nonatomic) AXElementGroup *keyboardGroupCache; // @synthesize keyboardGroupCache=_keyboardGroupCache;
@property(retain, nonatomic) AXElementGroup *rootGroupCache; // @synthesize rootGroupCache=_rootGroupCache;
@property(nonatomic, getter=isEventManagementEnabled) BOOL eventManagementEnabled; // @synthesize eventManagementEnabled=_eventManagementEnabled;
@property(retain, nonatomic) NSArray *elementCache; // @synthesize elementCache=_elementCache;
@property(nonatomic) unsigned int activeFetchEvents; // @synthesize activeFetchEvents=_activeFetchEvents;
@property(retain, nonatomic) NSMapTable *fetchObservers; // @synthesize fetchObservers=_fetchObservers;
@property(nonatomic) int fetchPolicy; // @synthesize fetchPolicy=_fetchPolicy;
@property(nonatomic) id <AXElementFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(unsigned int)arg1;
- (id)_debugStringForPolicy:(int)arg1;
- (BOOL)_fetchGroups:(BOOL)arg1;
- (id)_filterGroup:(id)arg1 withFilter:(id)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(int)arg2;
- (id)_groupWithDictionary:(id)arg1;
- (void)updateKeyboardGroup:(id)arg1;
- (id)findGroupableMatchingBlock:(id)arg1;
- (id)_findGroupableMatchingBlock:(id)arg1 inElementGroup:(void)arg2;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(char *)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(char *)arg2;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(char *)arg3;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(char *)arg2;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(char *)arg2;
- (id)lastElement;
- (id)firstElement;
- (id)closestElementToPoint:(struct CGPoint)arg1;
- (id)closestElementToElement:(id)arg1;
- (id)_findElementsMatchingBlock:(id)arg1 internalRequest:(void)arg2;
- (id)findElementsMatchingBlock:(id)arg1;
- (id)findElementMatchingBlock:(id)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)_filterElements:(id)arg1 withFilter:(id)arg2;
- (void)removeAllPostFetchFilters;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (void)addPostFetchFilter:(id)arg1 withIdentifier:(void)arg2;
- (id)_fetchFirstElements;
- (id)_fetchVisibleElements;
- (BOOL)_fetchElements:(BOOL)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroup:(id)arg1 orElements:(id)arg2 appDidChange:(BOOL)arg3;
- (BOOL)_shouldConsiderCacheAsInvalid;
- (void)disableEventManagement;
- (void)enableEventManagement;
- (id)_axNotificationsForManagedEvents;
- (BOOL)_fetchEventCanBeManaged:(unsigned int)arg1;
- (int)_priorityForFetchEvent:(unsigned int)arg1;
- (double)_delayForFetchEvent:(unsigned int)arg1;
- (void)_scheduleFetchEvent:(unsigned int)arg1;
- (void)_tearDownEventCoalesceTimer;
- (void)_fetchEventOccurred:(unsigned int)arg1;
- (void)fetchEventOccurred:(unsigned int)arg1;
- (void)refresh;
- (void)removeFetchEvents:(unsigned int)arg1;
- (void)addFetchEvents:(unsigned int)arg1;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned int)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned int)arg1 foundNewElements:(BOOL)arg2;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned int)arg1;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
@property(readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property(readonly, nonatomic) AXElementGroup *keyboardGroup;
@property(readonly, nonatomic) AXElementGroup *rootGroup;
@property(readonly, nonatomic) NSArray *availableElements;
@property(readonly, nonatomic) BOOL willFetchElements;
- (BOOL)updateCurrentApp;
- (id)description;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned int)arg2 fetchPolicy:(int)arg3 enableEventManagement:(BOOL)arg4 enableGrouping:(BOOL)arg5 beginEnabled:(BOOL)arg6;

@end
