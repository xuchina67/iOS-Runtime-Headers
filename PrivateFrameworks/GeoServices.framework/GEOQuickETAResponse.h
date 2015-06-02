/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickETAResponse : NSObject {
    unsigned int _baselineETASeconds;
    GEOLocation *_destinationLocation;
    double _distance;
    unsigned int _responseETASeconds;
    NSMutableArray *_sortedETAs;
    GEOLocation *_sourceLocation;
}

@property (nonatomic, readonly) unsigned int baselineETASeconds;
@property (nonatomic, readonly) GEOLocation *destinationLocation;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) unsigned int responseETASeconds;
@property (nonatomic, readonly) NSMutableArray *sortedETAs;
@property (nonatomic, readonly) GEOLocation *sourceLocation;

- (unsigned int)baselineETASeconds;
- (void)dealloc;
- (id)destinationLocation;
- (double)distance;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;
- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;
- (unsigned int)responseETASeconds;
- (id)sortedETAs;
- (id)sourceLocation;

@end