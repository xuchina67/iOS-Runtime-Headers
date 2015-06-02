/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeBody : MFMessageBody {
    unsigned int _numAlternatives;
    unsigned int _preferredAlternative;
    MFMimePart *_topLevelPart;
}

+ (id)copyNewMimeBoundary;
+ (id)versionString;

- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (void)dealloc;
- (id)firstPartPassingTest:(id /* block */)arg1;
- (id)init;
- (BOOL)isHTML;
- (BOOL)isRich;
- (id)mimeSubtype;
- (id)mimeType;
- (int)numberOfAlternatives;
- (unsigned int)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (id)partWithNumber:(id)arg1;
- (int)preferredAlternative;
- (id)preferredBodyPart;
- (void)setPreferredAlternative:(int)arg1;
- (void)setTopLevelPart:(id)arg1;
- (id)textHtmlPart;
- (id)topLevelPart;
- (unsigned int)totalTextSize;

@end