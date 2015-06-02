/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding> {
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSDictionary *__backgroundTaskTimingData;
    long long _basePriority;
    NSString *_bundleID;
    long long _countOfBytesExpectedToReceive;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    double _creationTime;
    NSURLRequest *_currentRequest;
    NSURL *_destinationURL;
    BOOL _disablesRetry;
    BOOL _discretionary;
    NSURL *_downloadFileURL;
    NSError *_error;
    BOOL _establishedConnection;
    BOOL _expectingResumeCallback;
    NSURL *_fileURL;
    BOOL _hasStarted;
    unsigned int _identifier;
    unsigned int _lowThroughputTimerRetryCount;
    NSDictionary *_options;
    NSURLRequest *_originalRequest;
    NSURLResponse *_response;
    unsigned int _retryCount;
    NSString *_sessionID;
    BOOL _shouldCancelOnDisconnect;
    int _state;
    unsigned int _suspendCount;
    NSString *_taskDescription;
    unsigned int _taskKind;
    NSString *_uniqueIdentifier;
}

@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *_backgroundTaskTimingData;
@property long long basePriority;
@property (retain) NSString *bundleID;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property double creationTime;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSURL *destinationURL;
@property BOOL disablesRetry;
@property (getter=isDiscretionary) BOOL discretionary;
@property (retain) NSURL *downloadFileURL;
@property (copy) NSError *error;
@property BOOL establishedConnection;
@property BOOL expectingResumeCallback;
@property (retain) NSURL *fileURL;
@property BOOL hasStarted;
@property unsigned int identifier;
@property unsigned int lowThroughputTimerRetryCount;
@property (retain) NSDictionary *options;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLResponse *response;
@property unsigned int retryCount;
@property (retain) NSString *sessionID;
@property BOOL shouldCancelOnDisconnect;
@property int state;
@property unsigned int suspendCount;
@property (copy) NSString *taskDescription;
@property unsigned int taskKind;
@property (retain) NSString *uniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)_backgroundTaskTimingData;
- (long long)basePriority;
- (id)bundleID;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (double)creationTime;
- (id)currentRequest;
- (void)dealloc;
- (id)destinationURL;
- (BOOL)disablesRetry;
- (id)downloadFileURL;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (BOOL)establishedConnection;
- (BOOL)expectingResumeCallback;
- (id)fileURL;
- (BOOL)hasStarted;
- (unsigned int)identifier;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 taskIdentifier:(unsigned int)arg4 bundleID:(id)arg5 sessionID:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (BOOL)isDiscretionary;
- (unsigned int)lowThroughputTimerRetryCount;
- (id)options;
- (id)originalRequest;
- (id)response;
- (unsigned int)retryCount;
- (id)sessionID;
- (void)setAVAssetDownloadToken:(unsigned long long)arg1;
- (void)setBasePriority:(long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setCreationTime:(double)arg1;
- (void)setCurrentRequest:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDisablesRetry:(BOOL)arg1;
- (void)setDiscretionary:(BOOL)arg1;
- (void)setDownloadFileURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEstablishedConnection:(BOOL)arg1;
- (void)setExpectingResumeCallback:(BOOL)arg1;
- (void)setFileURL:(id)arg1;
- (void)setHasStarted:(BOOL)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLowThroughputTimerRetryCount:(unsigned int)arg1;
- (void)setOptions:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShouldCancelOnDisconnect:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)setSuspendCount:(unsigned int)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskKind:(unsigned int)arg1;
- (void)setURL:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (BOOL)shouldCancelOnDisconnect;
- (int)state;
- (unsigned int)suspendCount;
- (id)taskDescription;
- (unsigned int)taskKind;
- (id)uniqueIdentifier;

@end