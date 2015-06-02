/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAddFavoriteAction : ABPropertyAction <ABPropertyBestIDSValueQueryDelegate> {
    BOOL _allowFaceTimeAudioFavorites;
    BOOL _allowFaceTimeFavorites;
    BOOL _allowPhoneFavorites;
    ABPropertyBestIDSValueQuery *_bestFaceTimeQuery;
    NSArray *_filteredPhoneItems;
    BOOL _hasFaceTimeAudioFavorite;
    BOOL _hasFaceTimeFavorite;
}

@property (nonatomic) BOOL allowFaceTimeAudioFavorites;
@property (nonatomic) BOOL allowFaceTimeFavorites;
@property (nonatomic) BOOL allowPhoneFavorites;
@property (nonatomic, retain) ABPropertyBestIDSValueQuery *bestFaceTimeQuery;
@property (nonatomic, retain) NSArray *filteredPhoneItems;
@property (nonatomic) BOOL hasFaceTimeAudioFavorite;
@property (nonatomic) BOOL hasFaceTimeFavorite;

- (void)_filterFavoritedItems;
- (void)_queryFaceTimeStatus;
- (void)_saveFavorite:(id)arg1 withType:(int)arg2;
- (BOOL)allowFaceTimeAudioFavorites;
- (BOOL)allowFaceTimeFavorites;
- (BOOL)allowPhoneFavorites;
- (id)bestFaceTimeQuery;
- (BOOL)canPerformAction;
- (void)dealloc;
- (id)filteredPhoneItems;
- (BOOL)hasFaceTimeAudioFavorite;
- (BOOL)hasFaceTimeFavorite;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (void)queryComplete;
- (void)setAllowFaceTimeAudioFavorites:(BOOL)arg1;
- (void)setAllowFaceTimeFavorites:(BOOL)arg1;
- (void)setAllowPhoneFavorites:(BOOL)arg1;
- (void)setBestFaceTimeQuery:(id)arg1;
- (void)setFilteredPhoneItems:(id)arg1;
- (void)setHasFaceTimeAudioFavorite:(BOOL)arg1;
- (void)setHasFaceTimeFavorite:(BOOL)arg1;

@end