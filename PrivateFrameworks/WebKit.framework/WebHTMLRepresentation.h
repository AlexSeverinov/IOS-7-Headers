/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "WebDocumentDOM.h"
#import "WebDocumentRepresentation.h"

@class WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>
{
    WebHTMLRepresentationPrivate *_private;
}

+ (id)unsupportedTextMIMETypes;
+ (id)supportedImageMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedMIMETypes;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned int *)arg3 resultIsInCellAbove:(char *)arg4;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)controlsInForm:(id)arg1;
- (id)currentForm;
- (id)formForElement:(id)arg1;
- (BOOL)elementIsPassword:(id)arg1;
- (BOOL)elementDoesAutoComplete:(id)arg1;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (id)DOMDocument;
- (id)title;
- (id)documentSource;
- (BOOL)canSaveAsWebArchive;
- (BOOL)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (BOOL)_isDisplayingWebArchive;
- (void)setDataSource:(id)arg1;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

