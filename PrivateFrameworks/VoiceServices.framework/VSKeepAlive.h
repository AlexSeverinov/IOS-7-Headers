/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCConnection;

@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;
    int _audioType;
    BOOL _active;
    BOOL _keepAudioSessionActive;
}

@property(nonatomic) BOOL keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(nonatomic) int audioType; // @synthesize audioType=_audioType;
- (void).cxx_destruct;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (id)_serverConnection;
- (void)dealloc;

@end
