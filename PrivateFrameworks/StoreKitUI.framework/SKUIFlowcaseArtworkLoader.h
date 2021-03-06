/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUIArtworkRequestDelegate.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, SKUIFlowcaseImageDataConsumer, SKUIFlowcaseViewController, SKUIResourceLoader, UIImage;

@interface SKUIFlowcaseArtworkLoader : NSObject <SKUIArtworkRequestDelegate>
{
    SKUIResourceLoader *_artworkLoader;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    SKUIFlowcaseViewController *_flowcaseViewController;
    NSMapTable *_landscapeArtworkRequestIDs;
    SKUIFlowcaseImageDataConsumer *_landscapeConsumer;
    UIImage *_landscapePlaceholderImage;
    NSMapTable *_portraitArtworkRequestIDs;
    SKUIFlowcaseImageDataConsumer *_portraitConsumer;
    UIImage *_portraitPlaceholderImage;
    NSMapTable *_outstandingArtworkRequests;
}

@property(readonly, nonatomic) SKUIFlowcaseViewController *flowcaseViewController; // @synthesize flowcaseViewController=_flowcaseViewController;
@property(readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
- (void).cxx_destruct;
- (void)_setLandscapeImage:(id)arg1 portraitImage:(id)arg2 forItem:(id)arg3;
- (void)_cutOrientationImagesWithItem:(id)arg1 image:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)prefetchResourcesWithReason:(int)arg1;
- (id)placeholderImageForOrientation:(int)arg1;
- (BOOL)loadImageForItem:(id)arg1 reason:(int)arg2;
- (id)cachedImageForItem:(id)arg1 orientation:(int)arg2;
- (id)initWithArtworkLoader:(id)arg1 flowcase:(id)arg2;

@end

