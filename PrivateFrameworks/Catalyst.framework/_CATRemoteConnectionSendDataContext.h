/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATRemoteConnectionSendDataContext : NSObject {
    int _bytesWritten;
    NSData *_data;
    NSData *_encodedData;
    id _userInfo;
}

@property (nonatomic) int bytesWritten;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) NSData *encodedData;
@property (nonatomic, readonly) int remainingBytes;
@property (nonatomic, readonly) id userInfo;

- (void).cxx_destruct;
- (int)bytesWritten;
- (id)data;
- (id)encodedData;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;
- (int)remainingBytes;
- (id)remainingData;
- (void)setBytesWritten:(int)arg1;
- (id)userInfo;

@end
