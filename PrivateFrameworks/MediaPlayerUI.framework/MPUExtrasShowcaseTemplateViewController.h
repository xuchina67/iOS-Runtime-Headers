/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasShowcaseTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasNavigationAnimationControllerProvider, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant> {
    MPUExtrasZoomingImageTransitionController *_activeZoomingImageInteractiveTransitionController;
    unsigned int _autohighlightIndex;
    NSArray *_bannerButtonElements;
    NSArray *_carouselLockupElements;
    MPUExtrasCarouselViewController *_carouselViewController;
    MPUExtrasImageBrowserViewController *_imageBrowserViewController;
    NSDictionary *_overriddenFullscreenImages;
    BOOL _supportsOneupMode;
}

@property (nonatomic, retain) MPUExtrasZoomingImageTransitionController *activeZoomingImageInteractiveTransitionController;
@property (nonatomic) unsigned int autohighlightIndex;
@property (nonatomic, retain) NSArray *bannerButtonElements;
@property (nonatomic, retain) NSArray *carouselLockupElements;
@property (nonatomic, retain) MPUExtrasCarouselViewController *carouselViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPUExtrasImageBrowserViewController *imageBrowserViewController;
@property (nonatomic, readonly) unsigned int indexOfVisibleItem;
@property (nonatomic, retain) NSDictionary *overriddenFullscreenImages;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsOneupMode;
@property (nonatomic, readonly) IKShowcaseTemplate *templateElement;

- (void).cxx_destruct;
- (void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_mainChildViewController;
- (void)_prepareLayout;
- (void)_pushImageBrowserWithVisibleItemIndex:(unsigned int)arg1;
- (id)activeZoomingImageInteractiveTransitionController;
- (id)animationControllerForNavigationOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (unsigned int)autohighlightIndex;
- (id)bannerButtonElements;
- (id)carouselLockupElements;
- (unsigned int)carouselSize;
- (id)carouselViewController;
- (void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned int)arg3 withThumbnailImageContainerSize:(struct CGSize { float x1; float x2; })arg4;
- (void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned int)arg2;
- (void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;
- (id)imageBrowserViewController;
- (void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned int)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned int)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned int)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned int)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned int)indexOfVisibleItem;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (unsigned int)numberOfImagesForBrowserViewController:(id)arg1;
- (unsigned int)numberOfItemsInCarouselViewController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overriddenFullscreenImages;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setActiveZoomingImageInteractiveTransitionController:(id)arg1;
- (void)setAutohighlightIndex:(unsigned int)arg1;
- (void)setBannerButtonElements:(id)arg1;
- (void)setCarouselLockupElements:(id)arg1;
- (void)setCarouselViewController:(id)arg1;
- (void)setImageBrowserViewController:(id)arg1;
- (void)setOverriddenFullscreenImages:(id)arg1;
- (void)setSupportsOneupMode:(BOOL)arg1;
- (BOOL)showsPlaceholder;
- (BOOL)supportsOneupMode;
- (id)templateElement;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end