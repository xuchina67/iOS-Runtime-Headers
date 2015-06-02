/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatusManager : NSObject {
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; struct CLConnection {} x4; struct CLNameValuePair { int (**x_5_1_1)(); struct __CFDictionary {} *x_5_1_2; } x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; id /* block */ x8; id /* block */ x9; id x10; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x11; id /* block */ x12; } *fLocationdConnection;
    id /* block */ fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
}

+ (BOOL)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)setPropertiesWithDictionary:(id)arg1;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)startWatchdogCheckinsPrivate;
- (void)stopOnBodyStatusDetection;
- (void)stopOnBodyStatusDetectionPrivate;
- (void)stopWatchdogCheckinsPrivate;
- (BOOL)validateParameters:(id)arg1;

@end