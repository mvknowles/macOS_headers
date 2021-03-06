//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSScriptCommand.h>

@class NSObject, NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface IPXScriptingSpotlight : NSScriptCommand
{
    NSOperationQueue *_waitQueue;
    NSObject<OS_dispatch_semaphore> *_libraryOpenSema;
}

+ (void)showVersionAt:(id)arg1 inLibrary:(id)arg2;
@property(retain) NSObject<OS_dispatch_semaphore> *libraryOpenSema; // @synthesize libraryOpenSema=_libraryOpenSema;
@property(retain) NSOperationQueue *waitQueue; // @synthesize waitQueue=_waitQueue;
- (void).cxx_destruct;
- (void)windowControllerDidAssignLibrary:(id)arg1;
- (id)performDefaultImplementation;
- (void)dealloc;
- (id)initWithCommandDescription:(id)arg1;

@end

