//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPreviewInteractionControllerDelegate_Internal-Protocol.h>
#import <UIKitCore/UIViewControllerPreviewing_Internal-Protocol.h>

@class NSString, UIGestureRecognizer, UIPreviewInteractionController, UIView, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal>
{
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_sourceView;
    UIView *_customViewForInteractiveHighlight;
    UIViewController *_viewController;
    UIPreviewInteractionController *_previewInteractionController;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPreviewInteractionController *previewInteractionController; // @synthesize previewInteractionController=_previewInteractionController;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *customViewForInteractiveHighlight; // @synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg1;
- (void)previewInteractionController:(id)arg1 didSelectMenuItem:(id)arg2;
- (id)previewInteractionController:(id)arg1 transitioningDelegateForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCustomCommitForPreviewViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)previewInteractionController:(id)arg1 committedViewControllerForPreviewViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (BOOL)previewInteractionController:(id)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
- (void)unregister;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

