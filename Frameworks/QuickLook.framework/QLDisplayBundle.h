/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <QLPreviewItem>, NSURLRequest;

@interface QLDisplayBundle : UIViewController <QLDisplayable> {
    BOOL _cancelled;
    id _delegate;
    BOOL _loading;
    <QLPreviewItem> *_previewItem;
    NSURLRequest *_previewRequest;
}

@property(retain) <QLPreviewItem> *previewItem;
@property(retain) NSURLRequest *previewRequest;
@property(readonly) BOOL cancelled;
@property id delegate;
@property BOOL loading;

- (id)backgroundColor;
- (void)cancelLoad;
- (BOOL)cancelled;
- (void)dealloc;
- (id)delegate;
- (void)didFadeIn;
- (void)didFailLoadingWithError:(id)arg1;
- (void)didLoad;
- (id)initWithPreviewItem:(id)arg1 owner:(id)arg2;
- (void)loadWithHints:(id)arg1;
- (BOOL)loading;
- (id)previewItem;
- (id)previewRequest;
- (void)reloadUI;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewRequest:(id)arg1;
- (BOOL)shouldDisplayFullScreen;
- (void)tearDownUI;
- (void)willFadeIn;

@end