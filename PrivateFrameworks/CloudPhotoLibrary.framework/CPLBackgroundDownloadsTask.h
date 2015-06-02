/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {
    NSError *_badError;
    NSMutableArray *_downloadTaskGroups;
    unsigned int _failedDownloadedResourcesCount;
    BOOL _hasResetQueue;
    NSObject<OS_dispatch_queue> *_lock;
    BOOL _shouldStop;
    unsigned int _successfullyDownloadedResourcesCount;
    unsigned int _total;
}

- (void).cxx_destruct;
- (unsigned int)_activeDownloadTaskCount;
- (void)_downloadTask:(id)arg1 didFinishWithError:(id)arg2;
- (id)_downloadTasksSortedForBatching:(id)arg1;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1;
- (void)cancel;
- (id)description;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end