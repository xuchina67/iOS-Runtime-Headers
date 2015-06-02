/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialComponent : SKUIPageComponent {
    NSAttributedString *_bodyAttributedText;
    NSString *_bodyText;
    NSArray *_links;
    int _maximumBodyLines;
    struct SKUIEditorialStyle { 
        int alignment; 
        int bodyFontWeight; 
        float bodyFontSize; 
        float linkSpacing; 
        int titleFontWeight; 
        float titleFontSize; 
        float titleSpacing; 
    } _style;
    NSString *_titleText;
    BOOL _usesLockupTitle;
}

@property (getter=_usesLockupTitle, nonatomic, readonly) BOOL _usesLockupTitle;
@property (nonatomic, readonly) NSAttributedString *bodyAttributedText;
@property (nonatomic, readonly) NSString *bodyText;
@property (nonatomic, readonly) struct SKUIEditorialStyle { int x1; int x2; float x3; float x4; int x5; float x6; float x7; } editorialStyle;
@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) int maximumBodyLines;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) SKUILabelViewElement *viewElement;

- (void).cxx_destruct;
- (void)_setTitleText:(id)arg1;
- (BOOL)_usesLockupTitle;
- (id)bodyAttributedText;
- (id)bodyText;
- (int)componentType;
- (struct SKUIEditorialStyle { int x1; int x2; float x3; float x4; int x5; float x6; float x7; })editorialStyle;
- (id)initWithBrickRoomText:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithUberText:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)links;
- (int)maximumBodyLines;
- (id)titleText;

@end