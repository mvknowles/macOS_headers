//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class HMDUnassociatedWACAccessory, NSError;

@protocol HMDWACAccessoryConfigurationDelegate
- (void)unassociatedWACAccessoryDidFinishAssociation:(HMDUnassociatedWACAccessory *)arg1 withError:(NSError *)arg2;
- (void)unassociatedWACAccessoryDidStartAssociation:(HMDUnassociatedWACAccessory *)arg1;
- (void)requestPermissionToAssociateWACAccessory:(HMDUnassociatedWACAccessory *)arg1 completionHandler:(void (^)(BOOL))arg2;
@end

