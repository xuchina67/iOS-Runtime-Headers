/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccountNotifier : NSObject {
    int _accountChangedToken;
    NSMapTable *_notificationObservers;
    NSOperationQueue *_notifyQueue;
}

@property (nonatomic) int accountChangedToken;
@property (nonatomic, retain) NSMapTable *notificationObservers;
@property (nonatomic, retain) NSOperationQueue *notifyQueue;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (int)accountChangedToken;
- (void)dealloc;
- (id)init;
- (id)notificationObservers;
- (id)notifyQueue;
- (void)postAccountChangedNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(id /* block */)arg2;
- (void)setAccountChangedToken:(int)arg1;
- (void)setNotificationObservers:(id)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;

@end