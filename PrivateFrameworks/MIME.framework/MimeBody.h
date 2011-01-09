/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class MimePart;



@interface MimeBody : MessageBody 
{
    MimePart *_topLevelPart;
    NSUInteger _preferredTextEncoding;
    unsigned int _preferredAlternative : 16;
    unsigned int _numAlternatives : 16;
}

+ (id)versionString;
+ (id)copyNewMimeBoundary;
+ (void)initialize;

- (void)setPreferredTextEncoding:(unsigned long)arg1;
- (id)mimeSubtype;
- (id)partWithNumber:(id)arg1;
- (void)decodeIfNecessary;
- (void)setPreferredAlternative:(NSInteger)arg1;
- (NSInteger)preferredAlternative;
- (id)preferredBodyPart;
- (unsigned long)preferredTextEncoding;
- (NSUInteger)totalTextSize;
- (BOOL)isRich;
- (NSUInteger)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)attachments;
- (NSInteger)numberOfAlternatives;
- (void)setTopLevelPart:(id)arg1;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (BOOL)isHTML;
- (id)topLevelPart;
- (id)textHtmlPart;
- (id)mimeType;
- (id)init;
- (void)dealloc;

@end