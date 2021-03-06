/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSPersistentStore.h>

@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore
{
    NSMutableDictionary *_nodeCache;
    NSMutableDictionary *_entityCache;
    NSMutableDictionary *_storeMetadata;
    int _nextReference;
    void *_reserved4;
    void *_reserved5;
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (id)_rawMetadata__;
- (id)referenceObjectForObjectID:(id)arg1;
- (id)objectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (id)cacheNodeForObjectID:(id)arg1;
- (void)willRemoveCacheNodes:(id)arg1;
- (id)cacheNodes;
- (void)addCacheNodes:(id)arg1;
- (BOOL)load:(id *)arg1;
- (BOOL)save:(id *)arg1;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)init;
- (id)_retainedObjectIDForEntity:(id)arg1 referenceObject:(id)arg2;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)_updateObject:(id)arg1;
- (void)_removeObject:(id)arg1;
- (void)_addObject:(id)arg1;
- (id)_getNewIDForObject:(id)arg1;
- (void)_storeNextReferenceInMetadata;
- (void)_preflightCrossCheck;
- (void)_didLoadMetadata;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_retrieveNodesSatisfyingRequest:(id)arg1;
- (void)_deleteNodeFromEntityCache:(id)arg1;
- (void)_deleteNodeFromMainCache:(id)arg1;
- (void)_insertNodeIntoEntityCache:(id)arg1;
- (void)_insertNodeIntoMainCache:(id)arg1;
- (id)_retrieveNodeForObject:(id)arg1;
- (id)_retrieveNodeForObjectID:(id)arg1;
- (id)executeRefreshRequest:(id)arg1 withContext:(id)arg2;
- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;
- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;
- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)_registerCacheNode:(id)arg1;

@end

