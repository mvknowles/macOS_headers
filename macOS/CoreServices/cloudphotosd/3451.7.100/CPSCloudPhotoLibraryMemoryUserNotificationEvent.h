//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPAgentUserNotificationEvent.h"

@class CSMemoryNotificationUpdate;

@interface CPSCloudPhotoLibraryMemoryUserNotificationEvent : ICPAgentUserNotificationEvent
{
    CSMemoryNotificationUpdate *_memoryNotificationUpdate;
}

+ (id)type;
@property(readonly, nonatomic) CSMemoryNotificationUpdate *memoryNotificationUpdate; // @synthesize memoryNotificationUpdate=_memoryNotificationUpdate;
- (void).cxx_destruct;
- (id)_bestDateForDeliveringNotification;
- (void)postUserNotification;
- (id)notificationIdentifier;
- (id)matchingIdentifier;
- (id)initWithUserNotificationManager:(id)arg1 andMemoryNotificationUpdate:(id)arg2;

@end

