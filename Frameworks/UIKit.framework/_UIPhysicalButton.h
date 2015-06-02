/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPhysicalButton : NSObject <_UIResponderForwardable> {
    BOOL _abandonForwardingRecord;
    NSMutableArray *_forwardingRecord;
    NSMutableArray *_gestureRecognizers;
    int _phase;
    UIResponder *_responder;
    double _timestamp;
    int _type;
    UIWindow *_window;
}

@property (setter=_setForwardablePhase:, nonatomic) int _forwardablePhase;
@property (setter=_setResponder:, nonatomic, retain) UIResponder *_responder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned int hash;
@property (nonatomic) int phase;
@property (nonatomic, retain) UIResponder *responder;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) int type;
@property (nonatomic, retain) UIWindow *window;

- (void)_abandonForwardingRecord;
- (int)_forwardablePhase;
- (id)_forwardingRecord;
- (BOOL)_isAbandoningForwardingRecord;
- (id)_mutableForwardingRecord;
- (void)_removeGestureRecognizer:(id)arg1;
- (id)_responder;
- (SEL)_responderSelectorForPhase:(int)arg1;
- (void)_setForwardablePhase:(int)arg1;
- (void)_setResponder:(id)arg1;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (void)dealloc;
- (id)gestureRecognizers;
- (int)phase;
- (id)responder;
- (void)setGestureRecognizers:(id)arg1;
- (void)setPhase:(int)arg1;
- (void)setResponder:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (void)setWindow:(id)arg1;
- (double)timestamp;
- (int)type;
- (id)window;

@end