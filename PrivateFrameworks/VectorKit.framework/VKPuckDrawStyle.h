/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPuckDrawStyle : VKRenderStyle

@property (nonatomic, readonly) float arrowBrightness;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  arrowColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  arrowColorStale; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic, readonly) float circleBrightness;
@property (nonatomic, readonly) BOOL hasArrowBrightness;
@property (nonatomic, readonly) BOOL hasArrowColor;
@property (nonatomic, readonly) BOOL hasArrowColorStale;
@property (nonatomic, readonly) BOOL hasCircleBrightness;
@property (nonatomic, readonly) BOOL hasOffset;
@property (nonatomic, readonly) BOOL hasSize;
@property (nonatomic, readonly) float offset;
@property (nonatomic, readonly) float size;

+ (int)renderStyleID;

- (float)arrowBrightness;
- (struct Matrix<float, 4, 1> { float x1[4]; })arrowColor;
- (struct Matrix<float, 4, 1> { float x1[4]; })arrowColorStale;
- (float)circleBrightness;
- (BOOL)hasArrowBrightness;
- (BOOL)hasArrowColor;
- (BOOL)hasArrowColorStale;
- (BOOL)hasCircleBrightness;
- (BOOL)hasOffset;
- (BOOL)hasSize;
- (float)offset;
- (float)size;

@end