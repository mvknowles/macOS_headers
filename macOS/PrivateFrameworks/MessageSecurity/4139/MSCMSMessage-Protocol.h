//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMessage.h"

@class MSOID, NSData;

@protocol MSCMSMessage <MSMessage>
@property(retain) MSOID *contentType;
@property(retain) id <MSCMSMessage> embeddedContent;
@property(retain, nonatomic) NSData *dataContent;
@property(readonly) MSOID *type;
@end

