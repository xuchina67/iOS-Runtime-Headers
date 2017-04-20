/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXBroker : NSObject {
    NSArray * _servants;
}

@property (nonatomic, retain) NSArray *servants;

- (void).cxx_destruct;
- (void)enumerateGlobalExplanationQueueAndFlushWithBlock:(id /* block */)arg1;
- (id)init;
- (id)queryWithCriteria:(id)arg1 limit:(unsigned int)arg2 timeout:(long long)arg3;
- (id)servants;
- (void)setServants:(id)arg1;

@end