//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopover.h"

#import "STLockoutPinViewDelegate.h"

@class NSArray, NSStackView, NSString, STLockoutPolicyController;

__attribute__((visibility("hidden")))
@interface STLockoutAlertController : NSPopover <STLockoutPinViewDelegate>
{
    NSStackView *_stackView;
    NSArray *_actions;
    STLockoutPolicyController *_policyController;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly) STLockoutPolicyController *policyController; // @synthesize policyController=_policyController;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)pinFieldViewTextDidComplete:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (void)dismissControllerAnimated:(BOOL)arg1;
- (void)_addPinViewWithAction:(id)arg1;
- (long long)indexOfPinView;
- (void)_addButtonWithAction:(id)arg1;
- (void)addAction:(id)arg1;
- (id)_newStackView;
- (void)performClose:(id)arg1;
- (id)initWithPolicyController:(id)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

