/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlace : PBCodable <NSCopying> {
    NSMutableArray *_components;
    struct { 
        unsigned int muid : 1; 
        unsigned int preferredMuid : 1; 
        unsigned int resultProviderId : 1; 
        unsigned int status : 1; 
    } _has;
    unsigned long long _muid;
    unsigned long long _preferredMuid;
    int _resultProviderId;
    int _status;
}

@property (nonatomic, retain) NSMutableArray *components;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasPreferredMuid;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned long long preferredMuid;
@property (nonatomic) int resultProviderId;
@property (nonatomic) int status;

+ (id)attributionForPlaceData:(id)arg1 type:(int)arg2;
+ (id)failedPlaceData;
+ (id)failedPlaceDataForMuid:(unsigned long long)arg1;

- (id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1;
- (id)_entityName;
- (void)_removeETAComponents;
- (void)addComponent:(id)arg1;
- (id)bestName;
- (id)businessURL;
- (void)clearComponents;
- (id)compactDebugDescription;
- (id)componentAtIndex:(unsigned int)arg1;
- (id)components;
- (unsigned int)componentsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithStrippedOptionalData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutETAComponents;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoMapItem;
- (BOOL)hasExpiredComponentsAsOf:(double)arg1;
- (BOOL)hasMuid;
- (BOOL)hasPreferredMuid;
- (BOOL)hasResultProviderId;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (BOOL)isCacheable;
- (BOOL)isDisputed;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)phoneNumbers;
- (unsigned long long)preferredMuid;
- (BOOL)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setComponents:(id)arg1;
- (void)setFirstSeenTimestamp:(double)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasPreferredMuid:(BOOL)arg1;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPreferredMuid:(unsigned long long)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setStatus:(int)arg1;
- (id)spokenNameForLocale:(id)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end