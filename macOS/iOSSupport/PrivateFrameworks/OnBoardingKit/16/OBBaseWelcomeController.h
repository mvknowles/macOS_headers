//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface OBBaseWelcomeController : UIViewController
{
    unsigned long long _templateType;
}

@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
- (void)_presentationStyleValidationCheck;
- (void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2;
- (id)navigationItem;
- (double)autoScrollEdgeTransitionDistance;
- (long long)navigationBarScrollToEdgeBehavior;
- (struct NSDirectionalEdgeInsets)insetsForTemplateType:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets)directionalLayoutMargins;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

