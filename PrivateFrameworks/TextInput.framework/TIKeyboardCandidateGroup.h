/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding> {
    NSOrderedSet *_candidates;
    NSArray *_nonExtensionCandidates;
    NSString *_title;
}

@property (copy) NSOrderedSet *candidates;
@property (retain) NSArray *nonExtensionCandidates;
@property (copy) NSString *title;

+ (BOOL)supportsSecureCoding;

- (void)addCandidate:(id)arg1;
- (id)candidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAlternativeText;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCandidates;
- (id)nonExtensionCandidates;
- (void)setCandidates:(id)arg1;
- (void)setNonExtensionCandidates:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)sortUsingComparator:(id /* block */)arg1;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id /* block */)arg2;
- (id)title;

@end