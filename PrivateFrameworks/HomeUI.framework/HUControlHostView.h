/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlHostView : UIView {
    NSArray * _controlConstraints;
    UIView * _controlView;
    BOOL  _requiresWellDefinedSize;
}

@property (nonatomic, retain) NSArray *controlConstraints;
@property (nonatomic, retain) UIView *controlView;
@property (nonatomic) BOOL requiresWellDefinedSize;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)controlConstraints;
- (id)controlView;
- (id)initWithControlView:(id)arg1;
- (BOOL)requiresWellDefinedSize;
- (void)setControlConstraints:(id)arg1;
- (void)setControlView:(id)arg1;
- (void)setRequiresWellDefinedSize:(BOOL)arg1;
- (void)updateConstraints;

@end
