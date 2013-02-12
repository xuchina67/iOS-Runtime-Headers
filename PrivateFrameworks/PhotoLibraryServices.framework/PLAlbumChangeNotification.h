/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDictionary, PLGenericAlbum;

@interface PLAlbumChangeNotification : PLContainerChangeNotification {
    BOOL _keyAssetDidChange;
    BOOL _titleDidChange;
    NSDictionary *_userInfo;
}

@property(readonly) PLGenericAlbum * album;
@property(readonly) BOOL keyAssetDidChange;
@property(readonly) BOOL titleDidChange;

+ (id)notificationWithAlbum:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;

- (void)_calculateDiffs;
- (id)_contentRelationshipName;
- (id)album;
- (void)dealloc;
- (id)description;
- (BOOL)keyAssetDidChange;
- (id)name;
- (id)notificaionForDerivedAlbum:(id)arg1;
- (BOOL)titleDidChange;
- (id)userInfo;

@end